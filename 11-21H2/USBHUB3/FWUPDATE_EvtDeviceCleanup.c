/*
 * XREFs of FWUPDATE_EvtDeviceCleanup @ 0x1C003E1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_EvtDeviceCleanup(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0067170);
  if ( *(_QWORD *)(*(_QWORD *)result + 2656LL) == a1 )
    *(_QWORD *)(*(_QWORD *)result + 2656LL) = 0LL;
  return result;
}
