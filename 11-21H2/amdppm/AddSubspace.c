/*
 * XREFs of AddSubspace @ 0x1C0005494
 * Callers:
 *     RegisterSubspace @ 0x1C0025094 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddSubspace(_QWORD *a1)
{
  _QWORD *v2; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011A48,
    0LL);
  while ( 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0011A40);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) >= 0 )
      break;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0011A40);
  }
  v2 = (_QWORD *)qword_1C0011A58;
  if ( *(__int64 **)qword_1C0011A58 != &qword_1C0011A50 )
    __fastfail(3u);
  *a1 = &qword_1C0011A50;
  a1[1] = v2;
  *v2 = a1;
  ++dword_1C0011A60;
  qword_1C0011A58 = (__int64)a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_1C0011A40);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C0011A48);
}
