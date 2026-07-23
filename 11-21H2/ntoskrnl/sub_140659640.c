/*
 * XREFs of sub_140659640 @ 0x140659640
 * Callers:
 *     sub_140429770 @ 0x140429770 (sub_140429770.c)
 *     sub_140659C4C @ 0x140659C4C (sub_140659C4C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140659640(char *Src, void *a2, unsigned __int8 a3)
{
  size_t v3; // r8

  v3 = 8LL * a3;
  if ( v3 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v3] > 0x7FFFFFFF0000LL || &Src[v3] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(a2, Src, v3);
  return 0LL;
}
