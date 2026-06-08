/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C00345D8
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0033BF0 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C880 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0023BF0 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C003B608 (PepRegisterSpmSettings.c)
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
  _BYTE v27[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-95h]
  unsigned int v29; // [rsp+38h] [rbp-91h]
  _DWORD *v30; // [rsp+40h] [rbp-89h]
  __int64 v31; // [rsp+48h] [rbp-81h]
  __int64 v32; // [rsp+50h] [rbp-79h] BYREF
  __int64 v33; // [rsp+58h] [rbp-71h]
  _QWORD v34[14]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v35; // [rsp+D0h] [rbp+7h] BYREF
  int v36; // [rsp+E0h] [rbp+17h]

  v33 = a3;
  v31 = a1;
  v4 = a3;
  memset(v34, 0, 0x68uLL);
  Pool2 = 0LL;
  v32 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  if ( !dword_1C0012B4C || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v34[0]) = dword_1C0012B4C;
    LODWORD(v34[0]) = 72;
    v34[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C00127F8)(v34);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
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
  v35 = 0LL;
  *(_DWORD *)(v4 + 40) = v12;
  v13 = 0;
  LOBYTE(v35) = 127;
  BYTE12(v35) = 1;
  HIWORD(v35) = 0;
  v36 = 0;
  while ( 1 )
  {
    v29 = v13;
    if ( v13 >= v11 )
    {
      *(_QWORD *)(v4 + 48) = Pool2;
      return 0;
    }
    v14 = v13;
    v27[0] = 0;
    v15 = (__int128 **)(88LL * v13 + v4 + 64);
    v16 = 32LL * v13;
    if ( ((v8[v13 + 2] >> 3) & 0xF) != 0 )
      break;
LABEL_28:
    v4 = v33;
    *(_DWORD *)(v16 + a2 + 120) ^= (*(_DWORD *)(v16 + a2 + 120) ^ v8[v14 + 2]) & 0x78;
    v21 = *(_DWORD *)(v16 + a2 + 120) ^ (v8[v14 + 2] ^ *(_DWORD *)(v16 + a2 + 120)) & 1;
    *(_DWORD *)(v16 + a2 + 120) = v21;
    v22 = v21 ^ (v8[v14 + 2] ^ v21) & 2;
    v23 = v27[0];
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
  v18 = &v35;
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
  if ( v18 != &v35 )
    *v15 = v18;
  if ( (int)DecodeAcpi2CState(v20, (__int64)v18, (__int64)&v32, (__int64)v27, (__int64)v15) >= 0 )
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
