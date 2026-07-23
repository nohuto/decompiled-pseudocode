/*
 * XREFs of sub_14059A9B4 @ 0x14059A9B4
 * Callers:
 *     sub_14059A86C @ 0x14059A86C (sub_14059A86C.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140352D90 @ 0x140352D90 (sub_140352D90.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140598CA4 @ 0x140598CA4 (sub_140598CA4.c)
 */

__int64 __fastcall sub_14059A9B4(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 result; // rax

  v6 = sub_14027B080(BugCheckParameter2);
  if ( v6 != 15 )
    KeBugCheckEx(0x1Au, 0x5402uLL, BugCheckParameter2, BugCheckParameter3, v6);
  if ( !(unsigned int)sub_140598CA4() )
    KeBugCheckEx(0x1Au, 0x5403uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v7 = a3 | 0x4000;
  if ( (a3 & 0x8000) == 0 )
    v7 = a3;
  result = sub_140227ED0(BugCheckParameter2, BugCheckParameter3 >> 12, v7, 3u);
  if ( result )
    result = sub_140352D90(15, result, 0);
  if ( (v7 & 0x8000) != 0 )
    return sub_14026DAB0(BugCheckParameter2, BugCheckParameter2 + BugCheckParameter3, 15);
  return result;
}
