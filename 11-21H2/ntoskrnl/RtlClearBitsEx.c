/*
 * XREFs of RtlClearBitsEx @ 0x14030BB30
 * Callers:
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     sub_14025A408 @ 0x14025A408 (sub_14025A408.c)
 *     sub_14025BC50 @ 0x14025BC50 (sub_14025BC50.c)
 *     sub_14026E218 @ 0x14026E218 (sub_14026E218.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_14030E0A0 @ 0x14030E0A0 (sub_14030E0A0.c)
 *     sub_140361290 @ 0x140361290 (sub_140361290.c)
 *     sub_14038F830 @ 0x14038F830 (sub_14038F830.c)
 *     sub_1403D8D00 @ 0x1403D8D00 (sub_1403D8D00.c)
 *     sub_140553E38 @ 0x140553E38 (sub_140553E38.c)
 *     sub_140554D4C @ 0x140554D4C (sub_140554D4C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_140599050 @ 0x140599050 (sub_140599050.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BDDAC @ 0x1405BDDAC (sub_1405BDDAC.c)
 *     RtlShiftLeftBitMapEx @ 0x1405E6C50 (RtlShiftLeftBitMapEx.c)
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 *     sub_1407095A8 @ 0x1407095A8 (sub_1407095A8.c)
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = ~(byte_140018DF0[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_140018DF0[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_140015C40[v3];
      goto LABEL_4;
    }
  }
}
