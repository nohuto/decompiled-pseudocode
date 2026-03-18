/*
 * XREFs of HUBHTX_CancelInterruptTransfer @ 0x1C00039B0
 * Callers:
 *     HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1C0008000 (HUBHSM_CancellingInterruptTransferOnSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall HUBHTX_CancelInterruptTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 968));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            0x1Fu,
                            (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  }
  return result;
}
