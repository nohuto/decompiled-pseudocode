/*
 * XREFs of sub_140A4F0DC @ 0x140A4F0DC
 * Callers:
 *     sub_140A4EB20 @ 0x140A4EB20 (sub_140A4EB20.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void sub_140A4F0DC()
{
  __int64 i; // rbx
  __int64 v1; // rbp
  ULONG v2; // r14d
  char *j; // rsi
  unsigned __int64 v4; // rdi

  for ( i = qword_140C4DD40; (__int64 *)i != &qword_140C4DD40; i = *(_QWORD *)i )
  {
    v4 = *(unsigned int *)(i + 32);
    v2 = 0;
    for ( j = *(char **)(i + 16); v4; v4 -= v1 )
    {
      v1 = v4;
      if ( v4 > 0x100 )
        v1 = 256LL;
      if ( !RtlAreBitsClear((PRTL_BITMAP)(i + 32), v2, v1) )
        PoSetHiberRange(0LL, 0x10000u, j, 16 * v1, 0x746C6168u);
      v2 += v1;
      j += 16 * v1;
    }
  }
}
