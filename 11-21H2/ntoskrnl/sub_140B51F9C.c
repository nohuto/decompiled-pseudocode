/*
 * XREFs of sub_140B51F9C @ 0x140B51F9C
 * Callers:
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 */

__int64 __fastcall sub_140B51F9C(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = sub_1403095B0((__int64)&qword_140C534C0, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)sub_14082B1B4(&qword_140C4F410, (__int64)(v2 << 25) >> 16, 0x80000000LL, 15) )
  {
    sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
