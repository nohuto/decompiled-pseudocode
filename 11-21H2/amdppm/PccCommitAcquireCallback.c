/*
 * XREFs of PccCommitAcquireCallback @ 0x1C000B390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PccCommitAcquireCallback(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0011A68);
  for ( i = qword_1C00114D8; (__int64 *)i != &qword_1C00114D8; i = *(_QWORD *)i )
  {
    **(_BYTE **)(i + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(i + 24) + 1LL) = *(_BYTE *)(i + 16);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_1C0011A68);
  LOBYTE(v4) = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_1C0011A18)(qword_1C00119E0, v4, 0LL, 0LL);
  if ( a2 )
    return a2();
  return result;
}
