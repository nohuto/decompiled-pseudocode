/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x1C023E0D0
 * Callers:
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C020A888 (ApiSetEditionPostMouseWheelToForeground.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall EditionPostMouseWheelToForeground(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax

  result = qword_1C029CDB0;
  if ( qword_1C029CDB0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))qword_1C029CDB0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
