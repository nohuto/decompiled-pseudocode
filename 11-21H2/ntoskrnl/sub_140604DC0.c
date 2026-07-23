/*
 * XREFs of sub_140604DC0 @ 0x140604DC0
 * Callers:
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604E24 @ 0x140604E24 (sub_140604E24.c)
 *     sub_140604E78 @ 0x140604E78 (sub_140604E78.c)
 */

__int64 sub_140604DC0()
{
  __int64 v0; // rcx

  memset(word_140C18FE0, 0, sizeof(word_140C18FE0));
  dword_140C18FD8 = 1;
  dword_140C18FD4 = 0;
  dword_140C18FD0 = 0;
  qword_140C1A7E0 = 0LL;
  if ( (_DWORD)dword_140C4E560 )
  {
    LOBYTE(v0) = 1;
    sub_140604E24(v0);
    return sub_140604E78();
  }
  else
  {
    sub_140604E24(0LL);
    return 0LL;
  }
}
