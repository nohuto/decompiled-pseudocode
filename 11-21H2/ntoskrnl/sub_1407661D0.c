/*
 * XREFs of sub_1407661D0 @ 0x1407661D0
 * Callers:
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     sub_140661D3C @ 0x140661D3C (sub_140661D3C.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 */

__int64 __fastcall sub_1407661D0(__int64 a1, _QWORD *a2)
{
  int v4; // ebx

  v4 = sub_14078C9E8(200LL, 1466986064LL, a1, 2LL, L"SWD\\", *a2);
  if ( v4 < 0 || (v4 = sub_14077DE70(a2[2], 200LL, 1466986064LL, a1 + 8), v4 < 0) )
    sub_140661D3C(a1);
  return (unsigned int)v4;
}
