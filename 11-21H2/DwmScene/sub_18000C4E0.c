/*
 * XREFs of sub_18000C4E0 @ 0x18000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C4E0()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hHandle )
    CloseHandle(hHandle);
}
