/*
 * XREFs of _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0135A9C
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0137210 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(_QWORD *a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( a1[4] )
  {
    result = qword_1C0295558;
    if ( qword_1C0295558 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C0295558(a1 + 5);
  }
  if ( *a1 )
  {
    result = qword_1C0295558;
    if ( qword_1C0295558 )
      return (__int64 (__fastcall *)(_QWORD))qword_1C0295558(a1 + 1);
  }
  return result;
}
