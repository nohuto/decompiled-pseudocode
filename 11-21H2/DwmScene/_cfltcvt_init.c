/*
 * XREFs of _cfltcvt_init @ 0x1800021F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *cfltcvt_init())(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  __int64 (__fastcall *result)(DWORD, LPWSTR, DWORD); // rax

  qword_1801F73F8 = (__int64)sub_18000DFD0;
  qword_1801F73C0 = (__int64)DebugBreak;
  qword_1801F73F0 = (__int64)sub_180010190;
  qword_1801F73B8 = (__int64)sub_18000F430;
  qword_1801F73A8 = (__int64)sub_18000F390;
  result = sub_18000DDA0;
  qword_1801F7398 = (__int64)sub_18000DDA0;
  return result;
}
