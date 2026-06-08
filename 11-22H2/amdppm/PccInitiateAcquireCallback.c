/*
 * XREFs of PccInitiateAcquireCallback @ 0x1C000BD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PccInitiateAcquireCallback(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0012B18);
  for ( i = qword_1C0012558; (__int64 *)i != &qword_1C0012558; i = *(_QWORD *)i )
    **(_BYTE **)(i + 24) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_1C0012B18);
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))qword_1C0012AC8)(
             qword_1C0012A90,
             0LL,
             PccInitiateExecuteCallback,
             a2);
  if ( (int)result < 0 )
  {
    if ( a2 )
      return a2();
  }
  return result;
}
