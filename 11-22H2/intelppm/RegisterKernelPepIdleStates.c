/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C003F844
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C002CC30 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     DecodeAcpi2CState @ 0x1C002D610 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C002DB80 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *Pool2; // r14
  int v7; // ebx
  unsigned int *v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int *v12; // rdi
  __int128 **v13; // r15
  int *v14; // rbx
  unsigned int v15; // r9d
  __int128 *v16; // rdx
  _BYTE *v17; // r11
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  _BYTE v25[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-85h]
  unsigned int v27; // [rsp+38h] [rbp-81h]
  __int64 v28; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v29[14]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v30; // [rsp+C0h] [rbp+7h] BYREF
  int v31; // [rsp+D0h] [rbp+17h]

  memset(v29, 0, 0x68uLL);
  v28 = 0LL;
  Pool2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  if ( !dword_1C001F68C || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v29[0]) = dword_1C001F68C;
    LODWORD(v29[0]) = 72;
    v29[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001F338)(v29);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
        v7);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1144);
  v9 = *(unsigned int **)(a1 + 528);
  v10 = v8[1];
  v11 = *v8;
  v27 = *v8;
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
  v26 = 0;
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
  v14 = (int *)(v8 + 2);
  while ( 1 )
  {
    v25[0] = 0;
    if ( (((unsigned int)*v14 >> 3) & 0xF) != 0 )
      break;
LABEL_27:
    v13 += 11;
    *v12 ^= (*v12 ^ *v14) & 0x78;
    v18 = *v12 ^ (*v14 ^ *v12) & 1;
    *v12 = v18;
    v19 = v18 ^ (*v14 ^ v18) & 2;
    v20 = v25[0];
    *v12 = v19;
    v21 = *v14++;
    v22 = v19 & 0x7FFFFFFB | v21 & 4 | (v20 << 31);
    v23 = v26 + 1;
    *v12 = v22;
    v12 += 8;
    v26 = v23;
    if ( v23 >= v27 )
      goto LABEL_28;
  }
  if ( !v9 || !*v9 )
    goto LABEL_31;
  v15 = 0;
  v16 = &v30;
  v17 = v9 + 4;
  do
  {
    if ( *v17 == (((unsigned int)*v14 >> 3) & 0xF) )
      v16 = (__int128 *)&v9[4 * v15 + 1 + v15];
    ++v15;
    v17 += 20;
  }
  while ( v15 < *v9 );
  if ( v16 != &v30 )
    *v13 = v16;
  if ( (int)DecodeAcpi2CState(a1, (__int64)v16, (__int64)&v28, (__int64)v25, (__int64)v13) >= 0 )
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
