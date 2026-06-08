/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C003E644
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C002BD10 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     DecodeAcpi2CState @ 0x1C002C7C0 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C002C988 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *Pool2; // r15
  int v7; // ebx
  unsigned int *v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // r14d
  int *v12; // rdi
  __int128 **v13; // r14
  _DWORD *v14; // rbx
  unsigned int v15; // r9d
  __int128 *v16; // rdx
  _BYTE *v17; // r11
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  _BYTE v26[4]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-75h]
  unsigned int v28; // [rsp+38h] [rbp-71h]
  _QWORD v29[14]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v30; // [rsp+B0h] [rbp+7h] BYREF
  int v31; // [rsp+C0h] [rbp+17h]

  memset(v29, 0, 0x68uLL);
  Pool2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001DCF8,
    0LL);
  if ( !dword_1C001E33C || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v29[0]) = dword_1C001E33C;
    LODWORD(v29[0]) = 69;
    v29[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001E008)(v29);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
        v7);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1144);
  v9 = *(unsigned int **)(a1 + 528);
  v10 = v8[1];
  v11 = *v8;
  v28 = *v8;
  if ( v10 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 16 * v10, 1919119952LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
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
  *(_DWORD *)(a3 + 40) = v8[1];
  v31 = 0;
  v27 = 0;
  v30 = 0LL;
  LOBYTE(v30) = 127;
  BYTE12(v30) = 1;
  HIWORD(v30) = 0;
  if ( !v11 )
  {
LABEL_28:
    *(_QWORD *)(a3 + 48) = Pool2;
    return 0;
  }
  v12 = (int *)(a2 + 120);
  v13 = (__int128 **)(a3 + 64);
  v14 = v8 + 2;
  while ( 1 )
  {
    v26[0] = 0;
    if ( ((*v14 >> 3) & 0xF) != 0 )
      break;
LABEL_27:
    v13 += 11;
    *v12 ^= (*v14 ^ *v12) & 0x78;
    v18 = *v12 ^ (*v14 ^ *v12) & 1;
    *v12 = v18;
    v19 = v18 ^ (*v14 ^ v18) & 2;
    v20 = v26[0];
    *v12 = v19;
    v21 = v19 & 0x7FFFFFFB | (v20 << 31);
    v22 = *v14++ & 4;
    v23 = v22 | v21;
    v24 = v27 + 1;
    *v12 = v23;
    v12 += 8;
    v27 = v24;
    if ( v24 >= v28 )
      goto LABEL_28;
  }
  if ( !v9 || !*v9 )
    goto LABEL_31;
  v15 = 0;
  v16 = &v30;
  v17 = v9 + 4;
  do
  {
    if ( *v17 == ((*v14 >> 3) & 0xF) )
      v16 = (__int128 *)&v9[4 * v15 + 1 + v15];
    ++v15;
    v17 += 20;
  }
  while ( v15 < *v9 );
  if ( v16 != &v30 )
    *v13 = v16;
  if ( (int)DecodeAcpi2CState(a1, (__int64)v16, 0LL, (__int64)v26, (__int64)v13) >= 0 )
  {
    if ( !*v13 && (*v14 & 0x78u) > 8 )
    {
      *v12 |= 0x40000000u;
      v13[2] = 0LL;
      v13[3] = 0LL;
    }
    goto LABEL_27;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
LABEL_31:
  v7 = -1073741823;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v7;
}
