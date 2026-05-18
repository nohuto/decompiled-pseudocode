/*
 * XREFs of sub_18000C674 @ 0x18000C674
 * Callers:
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C674(DWORD dwMilliseconds)
{
  if ( qword_1801F7340 )
  {
    qword_1801F7340(&unk_1801F7308, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
