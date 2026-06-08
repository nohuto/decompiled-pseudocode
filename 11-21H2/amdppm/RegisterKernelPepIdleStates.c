/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C0033620
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0035540 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C003A664 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  void *Pool2; // r14
  int v7; // ebx
  unsigned int *v8; // rbx
  _DWORD *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r13
  __int128 **v15; // r15
  __int64 v16; // r12
  __int64 v17; // r9
  __int128 *v18; // rdx
  _BYTE *v19; // r11
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  unsigned __int8 v27; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-95h]
  unsigned int v29; // [rsp+38h] [rbp-91h]
  _DWORD *v30; // [rsp+40h] [rbp-89h]
  __int64 v31; // [rsp+48h] [rbp-81h]
  __int64 v32; // [rsp+50h] [rbp-79h]
  _QWORD v33[14]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v34; // [rsp+D0h] [rbp+7h] BYREF
  int v35; // [rsp+E0h] [rbp+17h]

  v32 = a3;
  v31 = a1;
  v4 = a3;
  memset(v33, 0, 0x68uLL);
  Pool2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  if ( !dword_1C0011A9C || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v33[0]) = dword_1C0011A9C;
    LODWORD(v33[0]) = 69;
    v33[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0011768)(v33);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
        v7);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1144);
  v9 = *(_DWORD **)(a1 + 528);
  v30 = v9;
  v10 = v8[1];
  v11 = *v8;
  v28 = *v8;
  if ( v10 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 16 * v10, 1919119952LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v9 = v30;
    v11 = v28;
  }
  *(_WORD *)(a2 + 18) = 1;
  *(_QWORD *)(a2 + 24) = PepIdlePrepare;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleComplete;
  *(_QWORD *)(a2 + 32) = PepIdleCancel;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = v8[1];
  *(_BYTE *)(a2 + 16) = 1;
  v12 = v8[1];
  v34 = 0LL;
  *(_DWORD *)(v4 + 40) = v12;
  v13 = 0;
  LOBYTE(v34) = 127;
  BYTE12(v34) = 1;
  HIWORD(v34) = 0;
  v35 = 0;
  while ( 1 )
  {
    v29 = v13;
    if ( v13 >= v11 )
    {
      *(_QWORD *)(v4 + 48) = Pool2;
      return 0;
    }
    v14 = v13;
    v27 = 0;
    v15 = (__int128 **)(88LL * v13 + v4 + 64);
    v16 = 32LL * v13;
    if ( ((v8[v13 + 2] >> 3) & 0xF) != 0 )
      break;
LABEL_28:
    v4 = v32;
    *(_DWORD *)(v16 + a2 + 120) ^= (*(_DWORD *)(v16 + a2 + 120) ^ v8[v14 + 2]) & 0x78;
    v21 = *(_DWORD *)(v16 + a2 + 120) ^ ((unsigned __int8)*(_DWORD *)(v16 + a2 + 120) ^ (unsigned __int8)v8[v14 + 2]) & 1;
    *(_DWORD *)(v16 + a2 + 120) = v21;
    v22 = v21 ^ (v8[v14 + 2] ^ v21) & 2;
    v23 = v27;
    *(_DWORD *)(v16 + a2 + 120) = v22;
    v24 = v8[v14 + 2] & 4 | v22 & 0x7FFFFFFB | (v23 << 31);
    v25 = v29;
    *(_DWORD *)(v16 + a2 + 120) = v24;
    v13 = v25 + 1;
    v9 = v30;
  }
  if ( !v9 || !*v9 )
    goto LABEL_30;
  v17 = 0LL;
  v18 = &v34;
  v19 = v9 + 4;
  do
  {
    if ( *v19 == ((v8[v13 + 2] >> 3) & 0xF) )
      v18 = (__int128 *)&v30[4 * v17 + 1 + (unsigned int)v17];
    v17 = (unsigned int)(v17 + 1);
    v19 += 20;
  }
  while ( (unsigned int)v17 < *v9 );
  v20 = v31;
  if ( v18 != &v34 )
    *v15 = v18;
  if ( (int)DecodeAcpi2CState(v20, (_DWORD)v18, 0, (unsigned int)&v27, (__int64)v15) >= 0 )
  {
    v11 = v28;
    if ( !*v15 && (v8[v14 + 2] & 0x78) > 8 )
    {
      *(_DWORD *)(v16 + a2 + 120) |= 0x40000000u;
      v15[2] = 0LL;
      v15[3] = 0LL;
    }
    goto LABEL_28;
  }
  _InterlockedOr((volatile signed __int32 *)(v20 + 1112), 8u);
LABEL_30:
  v7 = -1073741823;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v7;
}
