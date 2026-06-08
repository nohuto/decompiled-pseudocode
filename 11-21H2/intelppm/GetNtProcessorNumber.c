/*
 * XREFs of GetNtProcessorNumber @ 0x1C002D3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     LookupNtProcessorNumber @ 0x1C0003044 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  int v6; // [rsp+28h] [rbp-10h]

  v2 = LookupNtProcessorNumber(a1);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = a1[12];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x32u,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
        v6);
    }
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DCF8,
      0LL);
    *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + (unsigned int)a1[14]) = a1;
    v3 = a1 + 8;
    v4 = (_QWORD *)qword_1C001DD40;
    if ( *(__int64 **)qword_1C001DD40 != &qword_1C001DD38 )
      __fastfail(3u);
    *v3 = &qword_1C001DD38;
    v3[1] = v4;
    *v4 = v3;
    qword_1C001DD40 = (__int64)v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001DCF8);
  }
  return (unsigned int)v2;
}
