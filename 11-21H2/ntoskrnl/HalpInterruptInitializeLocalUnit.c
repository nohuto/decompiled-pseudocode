/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x1403B0A04
 * Callers:
 *     HalpInterruptInitializeController @ 0x1403AE924 (HalpInterruptInitializeController.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403AEED4 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalpInterruptRestoreController @ 0x140396364 (HalpInterruptRestoreController.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403B0C40 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403B0CB0 (HalpInitializeCmciVector.c)
 *     HalpInterruptMarkProcessorStarted @ 0x1403B0DA4 (HalpInterruptMarkProcessorStarted.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(_QWORD); // rax
  int v9; // eax
  int v10; // ecx
  char v12; // di
  __int64 (__fastcall *v13)(_QWORD, __int128 *); // rax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, unsigned int *, __int128 *, __int64); // rax
  ULONG_PTR v21; // r8
  int v22; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]
  int v26; // [rsp+70h] [rbp-8h]
  unsigned int v27; // [rsp+80h] [rbp+8h] BYREF

  v27 = 0;
  LODWORD(v25) = 0;
  v24 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  _disable();
  v3 = v26 & 0x200;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 32))(
         *(_QWORD *)(BugCheckParameter3 + 16),
         (unsigned int)v1,
         223LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 594;
    v18 = 4;
LABEL_32:
    v10 = BugCheckParameter3;
LABEL_34:
    HalpInterruptSetProblemEx(
      v10,
      v18,
      v4,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      BugCheckParameter4);
    goto LABEL_13;
  }
  if ( !KeGetPcr()->Prcb.Number )
    HalpInterruptP0LocalId = v27;
  HalpInterruptMarkProcessorStarted(v27);
  if ( *(_DWORD *)(HalpInterruptTargets + 24 * v1) )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 80);
      if ( v8 )
      {
        v9 = v8(*(_QWORD *)(BugCheckParameter3 + 16));
        v6 = v9;
        if ( v9 < 0 )
        {
          HalpInterruptSetProblemEx(
            BugCheckParameter3,
            6,
            v9,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            805);
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, v21);
        }
      }
    }
    goto LABEL_8;
  }
  v12 = 0;
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_38;
  if ( !HalpInterruptClusterModeForced
    && !HalpInterruptClusterModeEnabled
    && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
  {
    LODWORD(v24) = 5;
    DWORD2(v24) = 1 << v1;
    goto LABEL_22;
  }
  if ( HalpInterruptNextCluster >= (unsigned int)HalpInterruptMaxCluster
    || (*(_DWORD *)(BugCheckParameter3 + 228) & 8) == 0 )
  {
LABEL_38:
    DWORD2(v24) = v27;
    LODWORD(v24) = 4;
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_39;
  }
  else
  {
    v12 = 1;
    DWORD2(v24) = HalpInterruptNextCluster;
    HIDWORD(v24) = 1 << HalpInterruptNextClusterIndex;
    LODWORD(v24) = 6;
  }
LABEL_22:
  v13 = *(__int64 (__fastcall **)(_QWORD, __int128 *))(BugCheckParameter3 + 80);
  if ( v13 )
  {
    v14 = v13(*(_QWORD *)(BugCheckParameter3 + 16), &v24);
    v15 = v24;
LABEL_24:
    v16 = DWORD2(v24);
    goto LABEL_25;
  }
  v20 = *(__int64 (__fastcall **)(_QWORD, unsigned int *, __int128 *, __int64))(BugCheckParameter3 + 144);
  if ( !v20 )
    goto LABEL_39;
  LOBYTE(v7) = 1;
  v12 = 0;
  v14 = v20(*(_QWORD *)(BugCheckParameter3 + 16), &v27, &v24, v7);
  v15 = v24;
  if ( (_DWORD)v24 != 6 )
    goto LABEL_24;
  v16 = DWORD2(v24);
  if ( DWORD2(v24) >= (unsigned int)HalpInterruptMaxCluster )
  {
    DWORD2(v24) = v27;
    LODWORD(v24) = 4;
    goto LABEL_39;
  }
LABEL_25:
  if ( v14 < 0 )
  {
LABEL_39:
    v19 = HalpInterruptTargets;
    *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
    *(_DWORD *)(v19 + 24 * v1 + 8) = v27;
LABEL_40:
    KeAddProcessorAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v1);
    goto LABEL_8;
  }
  HalpInterruptLogicalMode = 1;
  if ( v15 == 6 )
  {
    HalpInterruptClusterModeEnabled = 1;
    if ( v16 > HalpInterruptNextCluster )
      HalpInterruptNextCluster = v16;
  }
  if ( v12 )
  {
    if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
    {
      HalpInterruptNextClusterIndex = 0;
      ++HalpInterruptNextCluster;
    }
  }
  v17 = HalpInterruptTargets;
  *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v24;
  *(_QWORD *)(v17 + 24 * v1 + 16) = v25;
  if ( (_DWORD)v24 == 4 )
    goto LABEL_40;
LABEL_8:
  v4 = HalpInitializeCmciVector(BugCheckParameter3, v27, v6);
  v5 = v4;
  v10 = BugCheckParameter3;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 826;
    v18 = 10;
    goto LABEL_34;
  }
  v4 = HalpInitializeDeferredErrorVector(BugCheckParameter3, v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 839;
    v18 = 38;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 228) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter3 + 48))(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
  if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 224) - 3) <= 1
    && (*(_DWORD *)(BugCheckParameter3 + 232) & 1) != 0 )
  {
    v22 = HalpInterruptRestoreController(BugCheckParameter3, 1);
    v5 = v22;
    if ( v22 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v22);
  }
LABEL_13:
  if ( v3 )
    _enable();
  return v5;
}
