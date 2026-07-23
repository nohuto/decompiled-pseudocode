/*
 * XREFs of MiAddZeroingThreads @ 0x140222574
 * Callers:
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     MiReassessZeroThreads @ 0x14035179C (MiReassessZeroThreads.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1)
{
  int v2; // ecx
  struct _KEVENT *i; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    ++dword_140C13048;
    return 3LL;
  }
  else if ( *(_DWORD *)(a1 + 4) == v2 )
  {
    ++MiZeroThreadStats;
    return 4LL;
  }
  else
  {
    for ( i = *(struct _KEVENT **)(a1 + 184); ; i = *(struct _KEVENT **)&i->Header.Lock )
    {
      if ( i == (struct _KEVENT *)(a1 + 184) )
      {
        ++dword_140C13044;
        return 4LL;
      }
      if ( ((__int64)i[-2].Header.WaitListHead.Blink & 2) != 0 )
        break;
    }
    ++*(_DWORD *)(a1 + 272);
    LODWORD(i[-2].Header.WaitListHead.Blink) &= ~2u;
    ++*(_DWORD *)(a1 + 12);
    KeSetEvent(i - 1, 0, 0);
    return 0LL;
  }
}
