/*
 * XREFs of BgpConsoleSetCursor @ 0x140AB12E0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x140AB0F1C (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = (_DWORD *)qword_140CE1AD8;
  v7 = 0;
  if ( qword_140CE1AD8 )
  {
    if ( a1 >= 0x50 || a2 >= *(_DWORD *)(qword_140CE1AD8 + 4) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_140CE1AD8 + 68) != a1
           || *(_DWORD *)(qword_140CE1AD8 + 72) != a2
           || *(_DWORD *)(qword_140CE1AD8 + 76) != a3 )
    {
      if ( *(_DWORD *)(qword_140CE1AD8 + 76) )
      {
        *(_DWORD *)(qword_140CE1AD8 + 76) = 0;
        BgpConsoleDrawCursor();
        v6 = (_DWORD *)qword_140CE1AD8;
      }
      v6[17] = a1;
      v6[18] = a2;
      v6[19] = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
