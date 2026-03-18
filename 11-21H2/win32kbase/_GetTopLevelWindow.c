/*
 * XREFs of _GetTopLevelWindow @ 0x1C023E508
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029C7E0;
  if ( qword_1C029C7E0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029C7E0(a1);
  return result;
}
