/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C0034854
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0033AC0 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C2BC (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C00363E8 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v4; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r14d
  bool v9; // zf
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  bool IsAnyHypervisorPresent; // al
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int8 v16; // r9
  __int128 v17; // xmm0
  __int64 v18; // r14
  __int128 *v19; // rsi
  unsigned int v20; // edx
  _BYTE *v21; // r10
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  unsigned __int8 v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+34h] [rbp-4Ch]
  unsigned int v32; // [rsp+38h] [rbp-48h]
  unsigned int *v33; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int128 v37; // [rsp+60h] [rbp-20h] BYREF
  int v38; // [rsp+70h] [rbp-10h]

  v3 = 0;
  v4 = *(unsigned int **)(a1 + 1152);
  v33 = *(unsigned int **)(a1 + 528);
  v6 = a3;
  v30 = 0;
  v7 = a2;
  v34 = 0LL;
  v8 = *v4;
  *(_WORD *)(a2 + 18) = 257;
  v9 = (*(_DWORD *)(a1 + 280) & 0x7F377) == 0LL;
  v35 = a3;
  v10 = AcpiCStatePreselect;
  v36 = a2;
  if ( v9 )
    v10 = PepIdlePreselect;
  v32 = v8;
  *(_QWORD *)(a2 + 40) = v10;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v12 = PepIdleTest;
  if ( IsAnyHypervisorPresent )
    v12 = PepIdleVmTest;
  *(_QWORD *)(v7 + 48) = v12;
  *(_QWORD *)(v7 + 56) = PepIdleAvailabilityCheck;
  *(_QWORD *)(v7 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(v7 + 80) = PepIdleExecute;
  *(_QWORD *)(v7 + 88) = PepIdleCompleteV2;
  *(_QWORD *)(v7 + 96) = PepIsHalted;
  *(_QWORD *)(v7 + 104) = PepInitiateWake;
  *(_DWORD *)(v7 + 112) = 0;
  *(_BYTE *)(v7 + 16) = 1;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_DWORD *)(v6 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124E8,
    0LL);
  *(_BYTE *)(a1 + 1177) = 0;
  v37 = 0LL;
  LOBYTE(v37) = 127;
  BYTE12(v37) = 1;
  HIWORD(v37) = 0;
  v38 = 0;
  v13 = 0LL;
  while ( 1 )
  {
    v31 = v13;
    if ( (unsigned int)v13 >= v8 )
      break;
    v14 = 3 * v13;
    v15 = 32 * v13 + v7;
    v16 = 0;
    v17 = *(_OWORD *)(*(_QWORD *)(a1 + 1160) + 16LL * (unsigned int)v13);
    v30 = 0;
    *(_OWORD *)(v15 + 136) = v17;
    v18 = 88LL * (unsigned int)v13 + v6 + 64;
    if ( ((v4[3 * v13 + 1] >> 3) & 0xF) != 0 )
    {
      if ( !v33 || !*v33 )
        goto LABEL_26;
      v19 = &v37;
      v20 = 0;
      v21 = v33 + 4;
      do
      {
        if ( *v21 == ((v4[3 * v13 + 1] >> 3) & 0xF) )
          v19 = (__int128 *)&v33[4 * v20 + 1 + v20];
        ++v20;
        v21 += 20;
      }
      while ( v20 < *v33 );
      if ( v19 != &v37 )
        *(_QWORD *)v18 = v19;
      if ( (int)DecodeAcpi2CState(a1, (_DWORD)v19, (unsigned int)&v34, (unsigned int)&v30, v18) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
LABEL_26:
        v3 = -1073741823;
        break;
      }
      if ( !*(_QWORD *)v18 && (v4[v14 + 1] & 0x78) > 8 )
      {
        *(_DWORD *)(v15 + 120) |= 0x40000000u;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 24) = 0LL;
      }
      v22 = v4[v14 + 2];
      if ( v22 == -1 )
        v22 = 10 * *((unsigned __int16 *)v19 + 7);
      v16 = v30;
      v6 = v35;
    }
    else
    {
      v22 = v4[3 * v13 + 2];
    }
    *(_DWORD *)(v15 + 124) = v22;
    *(_BYTE *)(v18 + 81) = (v4[v14 + 1] & 0x200) != 0;
    v8 = v32;
    *(_DWORD *)(v15 + 120) ^= (*(_DWORD *)(v15 + 120) ^ v4[v14 + 1]) & 0x78;
    v23 = *(_DWORD *)(v15 + 120);
    *(_DWORD *)(v15 + 128) = v4[v14 + 3];
    v24 = v23 ^ (v4[v14 + 1] ^ v23) & 0x80;
    *(_DWORD *)(v15 + 120) = v24;
    v25 = v24 ^ (v4[v14 + 1] ^ v24) & 0x100;
    *(_DWORD *)(v15 + 120) = v25;
    v26 = v25 ^ (v4[v14 + 1] ^ v25) & 1;
    *(_DWORD *)(v15 + 120) = v26;
    v27 = v26 ^ (v4[v14 + 1] ^ v26) & 2;
    *(_DWORD *)(v15 + 120) = v27;
    v28 = v31;
    *(_DWORD *)(v15 + 120) = v4[v14 + 1] & 4 | v27 & 0x7FFFFFFB | (v16 << 31);
    v13 = (unsigned int)(v28 + 1);
    v7 = v36;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124E8);
  return v3;
}
