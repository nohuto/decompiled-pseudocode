/*
 * XREFs of MiRelocateImagePfn @ 0x1407444B0
 * Callers:
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402DC710 (MiValidateInPage.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x140A4A25C (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E64 (MiMakeProtectionPfnCompatible.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x14067C2B8 (RtlDoesRequireFunctionOverrideFixups.c)
 *     MiPerformFixups @ 0x14079DAF0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned int v8; // esi
  __int64 *v11; // rdi
  __int64 v12; // r10
  __int64 v13; // rcx
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v14; // rcx
  __int64 v16; // r13
  ULONG_PTR v17; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  unsigned __int64 v27; // [rsp+30h] [rbp-38h]
  ULONG_PTR v28; // [rsp+70h] [rbp+8h]

  v8 = a3;
  v11 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  v12 = *v11;
  if ( (a7 & 1) == 0 || a3 >= *((_DWORD *)v11 + 14) )
    return 1LL;
  while ( !*(_QWORD *)(v12 + 8LL * a3) )
  {
    v13 = v11[11];
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 8LL * a3 + 56) )
        break;
    }
    v14 = (const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *)v11[12];
    if ( v14 )
    {
      if ( RtlDoesRequireFunctionOverrideFixups(v14, a3) )
        break;
    }
    if ( (a7 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
      break;
    if ( ++a3 != v8 )
      return 1LL;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  if ( BugCheckParameter3 && (BugCheckParameter3 < 0xFFFFF68000000000uLL || BugCheckParameter3 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v17 = 0LL;
    v28 = 0LL;
    goto LABEL_17;
  }
  v28 = BugCheckParameter3;
  v17 = MiReservePtes((__int64)&qword_140C69940, 1u);
  if ( v17 )
  {
LABEL_15:
    BugCheckParameter3 = (__int64)(v17 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v16);
    ValidPte = MiMakeValidPte(v17, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( MiPteInShadowRange(v17) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v17 = ValidPte;
        MiWritePteShadow(v17, ValidPte, v24);
LABEL_17:
        CurrentThread = KeGetCurrentThread();
        if ( (struct _KTHREAD *)v11[1] == CurrentThread )
        {
          CurrentThread = 0LL;
        }
        else
        {
          --CurrentThread->SpecialApcDisable;
          v21 = KeAbPreAcquire((__int64)(v11 + 3), 0LL);
          v27 = v21;
          if ( _InterlockedCompareExchange64(v11 + 3, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v11 + 3, 0LL, v21, (__int64)(v11 + 3));
            v21 = v27;
          }
          if ( v21 )
            *(_BYTE *)(v21 + 18) = 1;
        }
        v22 = v11[5];
        if ( (a7 & 4) == 0 )
          v22 = 0LL;
        MiPerformFixups(BugCheckParameter3, BugCheckParameter2, v22, a7);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v11 + 3, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v11 + 3);
          KeAbPostRelease((ULONG_PTR)(v11 + 3));
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( !v17 )
          return 0LL;
        if ( v17 != v28 )
        {
          MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v17, 1u);
          return 0LL;
        }
        v25 = ZeroPte;
        if ( MiPteInShadowRange(v17) )
        {
          if ( MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
              v25 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)v17 = v25;
            MiWritePteShadow(v17, v25, v26);
            goto LABEL_60;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v25 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v17 = v25;
LABEL_60:
        KeFlushSingleTb(BugCheckParameter3, 0, 1u);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    goto LABEL_17;
  }
  if ( BugCheckParameter3 )
  {
    v17 = BugCheckParameter3;
    goto LABEL_15;
  }
  return 3221225626LL;
}
