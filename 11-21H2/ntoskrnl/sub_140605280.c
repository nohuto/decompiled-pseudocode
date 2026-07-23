/*
 * XREFs of sub_140605280 @ 0x140605280
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 */

__int64 __fastcall sub_140605280(int a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax

  result = (unsigned int)_InterlockedCompareExchange(&dword_140D04C00, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    v5 = 0LL;
    dword_140C18F28 = a1;
    dword_140C18F2C = a2;
    if ( a3 )
    {
      qword_140C18F30 = *a3;
      qword_140C18F38 = a3[1];
      v5 = a3[2];
    }
    else
    {
      qword_140C18F30 = 0LL;
      qword_140C18F38 = 0LL;
    }
    qword_140C18F40 = v5;
    return sub_1402E0200(word_140C18F5C, 32LL, a4 + 4);
  }
  return result;
}
