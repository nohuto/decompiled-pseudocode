/*
 * XREFs of CarpSaveViolationSnapshot @ 0x1405D5EC4
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x1405D4930 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 */

NTSTATUS __fastcall CarpSaveViolationSnapshot(int a1, int a2, __int64 *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // rax

  result = _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 1, 0);
  if ( result != 1 )
  {
    v5 = 0LL;
    dword_140C34F08 = a1;
    dword_140C34F0C = a2;
    if ( a3 )
    {
      qword_140C34F10 = *a3;
      qword_140C34F18 = a3[1];
      v5 = a3[2];
    }
    else
    {
      qword_140C34F10 = 0LL;
      qword_140C34F18 = 0LL;
    }
    qword_140C34F20 = v5;
    return RtlStringCchCopyW(&pszDest, 0x20uLL, (NTSTRSAFE_PCWSTR)(a4 + 4));
  }
  return result;
}
