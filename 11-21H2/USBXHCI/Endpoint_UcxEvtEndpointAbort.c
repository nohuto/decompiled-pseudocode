/*
 * XREFs of Endpoint_UcxEvtEndpointAbort @ 0x1C003A850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C003BB20 (WPP_RECORDER_SF_ddqd.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointAbort(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r8d
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  _UNKNOWN **result; // rax
  unsigned int v9; // ebp
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00611A8);
  v5 = (_QWORD *)v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v6 = *(_QWORD *)(v3 + 136);
    v7 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 16) = v7;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_ddqd(v5[10], v7, v4, 39);
      v7 = *(_DWORD *)(v6 + 8);
    }
    v9 = 1;
    if ( v7 )
    {
      do
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 3344))(
                                WdfDriverGlobals,
                                *(_QWORD *)(*(_QWORD *)(104LL * (v9++ - 1) + v5[17] + 48) + 72LL),
                                Endpoint_WdfEvtAbortComplete,
                                a2);
      while ( v9 <= *(_DWORD *)(v6 + 8) );
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_DWORD *)(v3 + 144);
      v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x28u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v10,
        v11,
        a2);
    }
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 3344))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v5[11] + 72LL),
                          Endpoint_WdfEvtAbortComplete,
                          a2);
  }
  return result;
}
