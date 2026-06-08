/*
 * XREFs of RegisterKernelLpiStates @ 0x1C00331F8
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpiIdleState @ 0x1C0035598 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterKernelLpiStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r12
  void *v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  int v13; // eax
  int v14; // r8d
  char v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h]
  unsigned __int8 v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  v3 = *(_QWORD *)(a1 + 544);
  v4 = 0;
  v16 = 0;
  v5 = a3;
  v18 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) )
  {
    *(_BYTE *)(a2 + 19) = 1;
    *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
    *(_QWORD *)(a2 + 40) = PepIdlePreselect;
    *(_QWORD *)(a2 + 80) = LpiIdleExecute;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(a2 + 64) = PepNotifyLpiPreExecute;
      v8 = PepNotifyLpiComplete;
    }
    else
    {
      v8 = AcpiCStateIdleCancel;
    }
    *(_QWORD *)(a2 + 88) = v8;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011468,
      0LL);
    *(_BYTE *)(a1 + 1177) = 0;
    *(_QWORD *)(a2 + 96) = AcpiCStateIsHalted;
    v9 = 0;
    *(_DWORD *)(a2 + 112) = 0;
    *(_QWORD *)(a2 + 104) = AcpiCStateIsHalted;
    *(_BYTE *)(a2 + 16) = 1;
    for ( *(_QWORD *)(a2 + 72) = *(_QWORD *)(v3 + 8); v9 < *(_DWORD *)(v3 + 16); ++v9 )
    {
      v10 = 32LL * v9;
      v11 = 88LL * v9 + v5 + 64;
      v12 = 80LL * v9;
      *(_DWORD *)(v10 + a2 + 124) = 10 * *(_DWORD *)(v12 + v3 + 28);
      v13 = *(_DWORD *)(v12 + v3 + 24);
      *(_DWORD *)(v10 + a2 + 120) |= 0x81u;
      *(_DWORD *)(v10 + a2 + 128) = 10 * v13;
      *(_OWORD *)(v10 + a2 + 136) = *(_OWORD *)(v12 + v3 + 88);
      v14 = DecodeAcpiIdleState(
              a1,
              (int)v12 + (int)v3 + 48,
              -1,
              *(_DWORD *)(v12 + v3 + 36),
              0LL,
              (__int64)&v18,
              (__int64)&v16,
              v11);
      if ( v14 < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
      else
        *(_DWORD *)(v10 + a2 + 120) = (4 * (v16 & 1)) | *(_DWORD *)(v10 + a2 + 120) & 0x7FFFFFF9 | (2
                                                                                                  * (v16 & 1 | (v18 << 30))) & 0xFFFFFFFB;
      *(_QWORD *)(v11 + 56) = *(_QWORD *)(v12 + v3 + 52);
      if ( v14 < 0 || (*(_DWORD *)(v12 + v3 + 32) & 1) == 0 )
        *(_DWORD *)(v10 + a2 + 120) |= 0x40000000u;
      v5 = v17;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011468);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
