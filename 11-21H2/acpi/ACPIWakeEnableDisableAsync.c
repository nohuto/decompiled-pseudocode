/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C0062CD8
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004F0F0 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001A120 (ExAllocateFromNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C006352C (ACPIWakeEnableDisablePciDevice.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64 *, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  bool v9; // zf
  char v10; // r8
  void *v11; // rsi
  const char *v12; // r10
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // rcx
  void *v18; // rax
  int v20; // ecx
  __int64 v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  KIRQL v24; // al
  __int64 v25; // r12
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // edx
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edi
  void *v34; // rax
  void *v35; // rax
  __int64 *v37; // [rsp+58h] [rbp-E0h]
  __int64 v39; // [rsp+60h] [rbp-D8h]
  _QWORD v41[16]; // [rsp+70h] [rbp-C8h] BYREF

  v6 = 259;
  memset(v41, 0, 0x78uLL);
  v7 = *(_DWORD *)(a1 + 552);
  v8 = 0LL;
  v9 = a2 == 0;
  v10 = 0;
  v11 = &unk_1C006FB8B;
  v12 = (const char *)&unk_1C006FB8B;
  v13 = (__int64)&unk_1C006FB8B;
  if ( v9 )
  {
    v20 = v7 - 1;
    *(_DWORD *)(a1 + 552) = v7 - 1;
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v10 = a1;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a1 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v13 = *(_QWORD *)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x10u,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        v20,
        v10,
        v12,
        (const char *)v13);
      v20 = *(_DWORD *)(a1 + 552);
    }
    if ( v20 )
    {
      if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
        goto LABEL_12;
      v13 = 1LL;
      goto LABEL_11;
    }
  }
  else
  {
    v14 = v7 + 1;
    *(_DWORD *)(a1 + 552) = v7 + 1;
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v10 = a1;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a1 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v13 = *(_QWORD *)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xFu,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        v14,
        v10,
        v12,
        (const char *)v13);
      v14 = *(_DWORD *)(a1 + 552);
    }
    if ( v14 != 1 )
    {
      if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
      {
LABEL_12:
        v16 = 0LL;
        goto LABEL_13;
      }
      LOBYTE(v13) = 1;
LABEL_11:
      ACPIWakeEnableDisablePciDevice(a1, v13);
      goto LABEL_12;
    }
  }
  v16 = *(__int64 **)(a1 + 456);
  v37 = v16;
  if ( !v16 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      LOBYTE(v13) = a2;
      ACPIWakeEnableDisablePciDevice(a1, v13);
    }
    goto LABEL_13;
  }
  v22 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v23 = v22;
  if ( !v22 )
  {
    v16 = v37;
    v6 = -1073741670;
LABEL_13:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = &unk_1C006FB8B;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x13u,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        v6,
        a1,
        (__int64)v11,
        (__int64)v18);
    return a3(v16, v6, 0LL, a4);
  }
  v22[24] = a2;
  *((_QWORD *)v22 + 4) = a3;
  *((_QWORD *)v22 + 5) = a4;
  *((_QWORD *)v22 + 2) = a1;
  *((_DWORD *)v22 + 7) = 1;
  v24 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v25 = a1 + 560;
  v39 = *(_QWORD *)(a1 + 560);
  v26 = *(_QWORD **)(a1 + 568);
  if ( *v26 != a1 + 560 )
    __fastfail(3u);
  *((_QWORD *)v23 + 1) = v26;
  *(_QWORD *)v23 = v25;
  *v26 = v23;
  *(_QWORD *)(a1 + 568) = v23;
  KeReleaseSpinLock(&AcpiPowerLock, v24);
  v27 = *(_QWORD *)(a1 + 8);
  if ( v39 == v25 )
  {
    if ( (v27 & 0x800000000000000LL) != 0 && !v23[24] )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v28 = *(_DWORD *)(a1 + 600);
    WORD1(v41[0]) = 1;
    if ( (v28 & 0x40) != 0 )
    {
      v30 = *(_DWORD *)(a1 + 540);
      v29 = 3;
      WORD1(v41[5]) = 1;
      v41[2] = a2 != 0;
      LOBYTE(v8) = AcpiPowerLeavingS0 != 0;
      WORD1(v41[10]) = 1;
      v41[7] = v8;
      if ( v30 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
        v41[12] = v30 - 1;
      else
        v41[12] = 4LL;
    }
    else
    {
      v29 = 1;
      LOBYTE(v8) = a2 != 0;
      v41[2] = v8;
    }
    v31 = AMLIAsyncEvalObject(v37, 0LL, v29, v41, ACPIWakeEnableDisableAsyncCallBack, v23);
    v32 = *(_QWORD *)(a1 + 8);
    v33 = v31;
    v34 = &unk_1C006FB8B;
    if ( (v32 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 608);
      if ( (v32 & 0x400000000000LL) != 0 )
        v34 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x11u,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        v33,
        a1,
        (__int64)v11,
        (__int64)v34);
    if ( v33 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v37, v33, 0LL, v23);
  }
  else
  {
    v35 = &unk_1C006FB8B;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 608);
      if ( (v27 & 0x400000000000LL) != 0 )
        v35 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x12u,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        3,
        a1,
        (__int64)v11,
        (__int64)v35);
  }
  return 259LL;
}
