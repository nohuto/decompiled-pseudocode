/*
 * XREFs of Isoch_EP_StopMapping @ 0x1C0042440
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_EP_StopMapping(__int64 a1)
{
  __int64 result; // rax

  result = TR_AttemptStateChange(a1, 5, 1);
  if ( (_DWORD)result == 4 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 320),
      0LL);
  }
  else if ( (_DWORD)result != 2 )
  {
    return result;
  }
  return TR_AttemptStateChange(a1, 1, 0);
}
