/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0010180 (Endpoint_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C001625C (XilEndpoint_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // r10
  __int16 v13; // ax
  char v14; // al
  __int64 DequeuePointer; // rax
  __int64 v16; // r10
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  _OWORD v21[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]

  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v21);
  v3 = *((_QWORD *)&v21[0] + 1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v21[0] + 1) + 24LL),
         off_1C00611A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      4u,
      0xDu,
      0x1Fu,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL),
      *(_DWORD *)(v4 + 144),
      *(_DWORD *)(v3 + 32));
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0061090);
  memset((void *)(v7 + 8), 0, 0x70uLL);
  *(_QWORD *)v7 = v4;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v3 + 32);
  v8 = XilEndpoint_AcquireBuffer(v4, (*(_DWORD *)(v5 + 100) & 4) != 0 ? 2112 : 1056, v4, 829714501LL);
  v9 = 0;
  *(_QWORD *)(v7 + 8) = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v11 = -(__int64)((*(_DWORD *)(v5 + 100) & 4) != 0);
    *(_DWORD *)(v10 + 4) |= 2u;
    v12 = v10 + (v11 & 0x40) + 64;
    *(_DWORD *)(v12 + 4) ^= (*(_DWORD *)(v12 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v13 = *(_WORD *)(v7 + 16);
    *(_BYTE *)(v12 + 2) = 0;
    *(_DWORD *)v12 &= 0xFFFF80FF;
    *(_WORD *)(v12 + 6) = v13;
    *(_BYTE *)(v12 + 5) = 0;
    v14 = *(_BYTE *)(v4 + 99) & 3;
    if ( v14 != 1 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)v4 + 336LL) & 0x10000000000000LL) == 0
        || v14 != 3
        || *(char *)(v4 + 98) >= 0
        || (v20 = *(_QWORD *)(v4 + 16), *(_WORD *)(v20 + 124) != 1529)
        || *(_WORD *)(v20 + 126) != 4353
        || *(_DWORD *)(v20 + 36) <= 1u )
      {
        v9 = 6;
      }
    }
    *(_DWORD *)(v12 + 4) = v9 & 0xFFFFFFFE | *(_DWORD *)(v12 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v16 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = *(unsigned __int16 *)(v16 + 6);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset((void *)(v7 + 24), 0, 0x60uLL);
    *(_QWORD *)(v7 + 72) = v7;
    *(_QWORD *)(v7 + 64) = Endpoint_EvaluateContextCompletion;
    *(_DWORD *)(v7 + 60) = *(_DWORD *)(v7 + 60) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v7 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
    *(_QWORD *)(v7 + 96) = v10;
    *(_DWORD *)(v7 + 104) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 44LL);
    *(_DWORD *)(v7 + 108) = 2;
    *(_QWORD *)(v7 + 112) = v4;
    return Command_SendCommand(v6, v7 + 24);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)v4 + 72LL),
        v18,
        13,
        32,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL),
        *(_DWORD *)(v4 + 144));
    }
    v19 = *(_QWORD *)(v7 + 8);
    if ( v19 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v19);
      *(_QWORD *)(v7 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
}
