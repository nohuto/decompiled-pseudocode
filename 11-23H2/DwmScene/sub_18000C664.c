/*
 * XREFs of sub_18000C664 @ 0x18000C664
 * Callers:
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C664(DWORD dwMilliseconds)
{
  if ( qword_1801D3210 )
  {
    qword_1801D3210(&unk_1801D31D8, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
