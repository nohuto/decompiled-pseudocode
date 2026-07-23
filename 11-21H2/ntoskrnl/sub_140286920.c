/*
 * XREFs of sub_140286920 @ 0x140286920
 * Callers:
 *     sub_14023F9CC @ 0x14023F9CC (sub_14023F9CC.c)
 *     sub_140250924 @ 0x140250924 (sub_140250924.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     sub_1402875B0 @ 0x1402875B0 (sub_1402875B0.c)
 *     sub_1402ED0C4 @ 0x1402ED0C4 (sub_1402ED0C4.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_140597C48 @ 0x140597C48 (sub_140597C48.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 */

__int64 __fastcall sub_140286920(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += sub_1402869C0(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += sub_140220AAC(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
