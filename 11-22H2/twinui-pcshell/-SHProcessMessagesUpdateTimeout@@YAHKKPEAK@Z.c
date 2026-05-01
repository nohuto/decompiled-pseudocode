/*
 * XREFs of ?SHProcessMessagesUpdateTimeout@@YAHKKPEAK@Z @ 0x18001138C
 * Callers:
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1800111EC (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUpdateTimeout(int a1, DWORD a2, unsigned int *a3)
{
  unsigned int v5; // esi
  DWORD v6; // eax

  *a3 = 0;
  v5 = 1;
  if ( a2 == -1 )
  {
    *a3 = -1;
  }
  else
  {
    v6 = GetTickCount() - a1;
    if ( v6 > a2 )
      return 0;
    else
      *a3 = a2 - v6;
  }
  return v5;
}
