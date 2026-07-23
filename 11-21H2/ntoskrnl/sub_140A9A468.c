/*
 * XREFs of sub_140A9A468 @ 0x140A9A468
 * Callers:
 *     sub_140A898F0 @ 0x140A898F0 (sub_140A898F0.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1405FEF58 @ 0x1405FEF58 (sub_1405FEF58.c)
 *     sub_1405FFD94 @ 0x1405FFD94 (sub_1405FFD94.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A8AAE0 @ 0x140A8AAE0 (sub_140A8AAE0.c)
 *     sub_140A8AB50 @ 0x140A8AB50 (sub_140A8AB50.c)
 *     sub_140A93644 @ 0x140A93644 (sub_140A93644.c)
 *     sub_140A937C4 @ 0x140A937C4 (sub_140A937C4.c)
 */

__int64 __fastcall sub_140A9A468(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 48);
  sub_140A89D58();
  if ( (unsigned int)sub_140A8AB50(v2, a2) )
  {
    v5 = sub_140A937C4(a1);
    if ( v5 >= 0 )
    {
      if ( sub_1405FFD94() && (v5 = sub_1405FEF58(v2), v5 < 0) )
      {
        sub_140A93644(a1);
        sub_140A8AAE0();
      }
      else
      {
        ++dword_140C29FF4;
        ++*(_DWORD *)(a2 + 16);
        if ( dword_140D5750C )
          sub_140A89F08(1, a1);
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  if ( v5 >= 0 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return (unsigned int)v5;
}
