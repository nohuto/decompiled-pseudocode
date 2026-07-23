/*
 * XREFs of MiCopySinglePage @ 0x1402EE8BC
 * Callers:
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E84 (MiMakeProtectionPfnCompatible.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiIsPageSecured @ 0x1402EED30 (MiIsPageSecured.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiCopySinglePageExceptionHandler @ 0x140419A50 (MiCopySinglePageExceptionHandler.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int8 v9; // di
  int v10; // r13d
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  const void *v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r11
  _DWORD *v24; // r9
  int v25; // edx
  bool v26; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v35; // eax
  int v36; // [rsp+24h] [rbp-64h]
  int v38; // [rsp+98h] [rbp+10h]

  if ( a2 > qword_140C65CA0 )
    return 3221225793LL;
  v7 = 6 * a2;
  if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    return 3221225793LL;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( (a6 & 1) != 0 )
    v9 = MiLockPageInline(48 * a2 - 0x220000000000LL);
  else
    v9 = 17;
  if ( a2 > qword_140C65CA0 || (*(_QWORD *)(8 * v7 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    if ( v9 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v26 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v8 + 35) >= 0 && !(unsigned int)MiIsPageSecured(8 * v7 - 0x220000000000LL) )
  {
    v10 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( v10 == 3 )
      MiChangePageAttribute(8 * v7 - 0x220000000000LL, 1LL, 1LL);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, 8 * v7 - 0x220000000000LL);
    if ( !a5 )
    {
      v16 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
      goto LABEL_24;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v36 = 0;
    if ( MiPteInShadowRange(a5) )
    {
      if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
      {
        v36 = 1;
        if ( HIBYTE(word_140C66DFC) || (ValidPte & 1) == 0 )
          goto LABEL_20;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
             || (ValidPte & 1) == 0 )
      {
        goto LABEL_20;
      }
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_20:
    *(_QWORD *)a5 = ValidPte;
    if ( v36 )
      MiWritePteShadow(a5, ValidPte);
    v16 = (__int64)(a5 << 25) >> 16;
LABEL_24:
    v17 = (const void *)(a3 + v16);
    memmove(a1, v17, a4);
    if ( !a5 )
    {
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v17, 0x11u);
LABEL_35:
      if ( v10 == 3 )
        MiChangePageAttribute(v8, 3LL, 3LL);
      if ( v9 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && v9 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v26 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        __writecr8(v9);
      }
      return 0LL;
    }
    v18 = ZeroPte;
    v38 = 0;
    if ( MiPteInShadowRange(a5) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21) )
      {
        v38 = 1;
        if ( !HIBYTE(word_140C66DFC) )
        {
LABEL_30:
          if ( (ZeroPte & 1) != 0 )
            v18 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_30;
      }
    }
    *(_QWORD *)a5 = v18;
    if ( v38 )
      MiWritePteShadow(a5, v18);
    goto LABEL_35;
  }
  if ( v9 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v9 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v26 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v9);
  }
  return 3221227273LL;
}
