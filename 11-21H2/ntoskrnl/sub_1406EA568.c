/*
 * XREFs of sub_1406EA568 @ 0x1406EA568
 * Callers:
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 * Callees:
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409F5444 @ 0x1409F5444 (sub_1409F5444.c)
 */

char __fastcall sub_1406EA568(__int64 a1)
{
  unsigned __int8 v1; // si
  char v3; // di
  unsigned int v5; // edx
  __int64 v7; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v7 = sub_140797594(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL),
           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
           0LL);
    v3 = sub_1409F5444(v7, a1);
    sub_1407981E8(v7, 0LL);
  }
  while ( v3 );
  return v3;
}
