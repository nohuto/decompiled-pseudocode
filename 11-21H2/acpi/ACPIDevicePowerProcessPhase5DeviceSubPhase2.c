/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  unsigned int v3; // edi
  _OWORD *Pool2; // rbp
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  _OWORD *v15; // rax
  size_t v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  const char *v19; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C006FB8B;
  v3 = 0;
  Pool2 = 0LL;
  v5 = 0;
  v7 = &unk_1C006FB8B;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = &unk_1C006FB8B;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      76,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      5,
      v5,
      (__int64)v7,
      (__int64)v8);
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u)
    || (v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1397904223LL)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1000), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(v1 + 688);
  v14 = v12;
  if ( v13 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, *(unsigned int *)(v13 + 24) + 40LL, 1332765505LL);
    if ( Pool2 )
    {
      v15 = *(_OWORD **)(v1 + 688);
      *Pool2 = *v15;
      Pool2[1] = v15[1];
      v16 = *((unsigned int *)Pool2 + 6);
      *((_QWORD *)Pool2 + 4) = (char *)Pool2 + 40;
      memmove((char *)Pool2 + 40, *(const void **)(*(_QWORD *)(v1 + 688) + 32LL), v16);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( Pool2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1000), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v17 = AMLIAsyncEvalObject(v10, 0, 1, (_DWORD)Pool2, (__int64)ACPIDeviceCompleteGenericPhase, a1);
    v18 = *(_QWORD *)(v1 + 8);
    v3 = v17;
    v19 = (const char *)&unk_1C006FB8B;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v18 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x4Du,
        (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
        a1,
        v3,
        v1,
        v2,
        v19);
    ExFreePoolWithTag(Pool2, 0);
  }
  AMLIDereferenceHandleEx(v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_8;
  return result;
}
