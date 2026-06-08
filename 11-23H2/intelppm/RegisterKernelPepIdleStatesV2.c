/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C003FBA8
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C002CC30 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C00028F8 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C002D610 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r15
  unsigned int v4; // ebx
  unsigned int *v5; // r12
  unsigned int v9; // r14d
  bool v10; // zf
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  bool IsAnyHypervisorPresent; // al
  void *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int *v17; // rdi
  __int64 v18; // rcx
  _DWORD *v19; // r15
  __int128 v20; // xmm0
  unsigned int *v21; // r14
  unsigned int v22; // r8d
  _BYTE *v23; // r10
  int v24; // eax
  bool v25; // al
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  _BYTE v33[4]; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+34h] [rbp-3Ch]
  unsigned int v35; // [rsp+38h] [rbp-38h]
  __int64 v36; // [rsp+40h] [rbp-30h]
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  __int128 v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+60h] [rbp-10h]

  v3 = *(unsigned int **)(a1 + 1152);
  v4 = 0;
  v5 = *(unsigned int **)(a1 + 528);
  v33[0] = 0;
  v37 = 0LL;
  v9 = *v3;
  *(_WORD *)(a2 + 18) = 257;
  v10 = (*(_DWORD *)(a1 + 280) & 0x7F377) == 0LL;
  v35 = v9;
  v11 = AcpiCStatePreselect;
  if ( v10 )
    v11 = PepIdlePreselect;
  *(_QWORD *)(a2 + 40) = v11;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v13 = PepIdleTest;
  if ( IsAnyHypervisorPresent )
    v13 = PepIdleVmTest;
  *(_QWORD *)(a2 + 48) = v13;
  *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
  *(_QWORD *)(a2 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleCompleteV2;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = 0;
  *(_BYTE *)(a2 + 16) = 1;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F028,
    0LL);
  *(_BYTE *)(a1 + 1177) = 0;
  v39 = 0;
  v15 = 0LL;
  v34 = 0;
  v38 = 0LL;
  LOBYTE(v38) = 127;
  BYTE12(v38) = 1;
  HIWORD(v38) = 0;
  if ( !v9 )
    goto LABEL_28;
  v16 = a3 + 64;
  v36 = 0LL;
  v17 = (int *)(a2 + 120);
  v18 = 0LL;
  v19 = v3 + 1;
  while ( 1 )
  {
    LOBYTE(v14) = 0;
    v20 = *(_OWORD *)(v18 + *(_QWORD *)(a1 + 1160));
    v33[0] = 0;
    *((_OWORD *)v17 + 1) = v20;
    if ( ((*v19 >> 3) & 0xF) != 0 )
      break;
    v17[1] = v19[1];
LABEL_24:
    v15 = (unsigned int)(v15 + 1);
    v25 = (*v19 & 0x200) != 0;
    v34 = v15;
    *(_BYTE *)(v16 + 81) = v25;
    v16 += 88LL;
    *v17 ^= (*v19 ^ *v17) & 0x78;
    v26 = *v17;
    v17[2] = v19[2];
    v27 = v26 ^ (*v19 ^ v26) & 0x80;
    *v17 = v27;
    v28 = v27 ^ (*v19 ^ v27) & 0x100;
    *v17 = v28;
    v29 = v28 ^ (*v19 ^ v28) & 1;
    *v17 = v29;
    v30 = v29 ^ (*v19 ^ v29) & 2;
    *v17 = v30;
    v31 = *v19 & 4;
    v19 += 3;
    *v17 = v31 | v30 & 0x7FFFFFFB | ((unsigned __int8)v14 << 31);
    v17 += 8;
    v18 = v36 + 16;
    v36 += 16LL;
    if ( (unsigned int)v15 >= v9 )
      goto LABEL_28;
  }
  if ( !v5 )
    goto LABEL_27;
  v15 = *v5;
  if ( !(_DWORD)v15 )
    goto LABEL_27;
  v21 = (unsigned int *)&v38;
  v22 = 0;
  v23 = v5 + 4;
  do
  {
    if ( *v23 == ((*v19 >> 3) & 0xF) )
      v21 = &v5[4 * v22 + 1 + v22];
    ++v22;
    v23 += 20;
  }
  while ( v22 < (unsigned int)v15 );
  if ( v21 != (unsigned int *)&v38 )
    *(_QWORD *)v16 = v21;
  if ( (int)DecodeAcpi2CState(a1, (__int64)v21, (__int64)&v37, (__int64)v33, v16) >= 0 )
  {
    if ( !*(_QWORD *)v16 && (*v19 & 0x78u) > 8 )
    {
      *v17 |= 0x40000000u;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
    }
    v24 = v19[1];
    if ( v24 == -1 )
      v24 = 10 * *((unsigned __int16 *)v21 + 7);
    v9 = v35;
    LODWORD(v15) = v34;
    v17[1] = v24;
    LOBYTE(v14) = v33[0];
    goto LABEL_24;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
LABEL_27:
  v4 = -1073741823;
LABEL_28:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C001F028,
    v14,
    v15);
  return v4;
}
