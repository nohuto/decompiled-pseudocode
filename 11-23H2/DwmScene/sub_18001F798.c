/*
 * XREFs of sub_18001F798 @ 0x18001F798
 * Callers:
 *     sub_18002DB00 @ 0x18002DB00 (sub_18002DB00.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001EA48 @ 0x18001EA48 (sub_18001EA48.c)
 */

void **__fastcall sub_18001F798(void **Src, const void *a2, unsigned __int64 a3)
{
  void *v4; // rcx
  bool v5; // cf
  __int64 v6; // rsi
  _QWORD *v7; // rdi

  v4 = Src[2];
  if ( a3 > (_BYTE *)Src[3] - (_BYTE *)v4 )
    return sub_18001EA48(Src, a3, a3, a2, a3);
  v5 = (unsigned __int64)Src[3] < 8;
  v6 = (__int64)v4 + a3;
  Src[2] = (char *)v4 + a3;
  v7 = Src;
  if ( !v5 )
    v7 = *Src;
  memmove((char *)v7 + 2 * (_QWORD)v4, a2, 2 * a3);
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
