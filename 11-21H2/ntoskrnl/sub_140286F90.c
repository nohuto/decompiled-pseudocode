/*
 * XREFs of sub_140286F90 @ 0x140286F90
 * Callers:
 *     sub_14026CF88 @ 0x14026CF88 (sub_14026CF88.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_140279474 @ 0x140279474 (sub_140279474.c)
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_1405C48E0 @ 0x1405C48E0 (sub_1405C48E0.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_140707CF0 @ 0x140707CF0 (sub_140707CF0.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 * Callees:
 *     sub_14026F0F0 @ 0x14026F0F0 (sub_14026F0F0.c)
 *     sub_140287070 @ 0x140287070 (sub_140287070.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 */

unsigned int *__fastcall sub_140286F90(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // rbx
  unsigned __int64 i; // rdx

  *a3 = a2 >> 12;
  if ( *a3 >= sub_140287070() )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return sub_14026F0F0((unsigned int *)(a1 + 128), a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v6 = a1 + 128;
    for ( i = *(unsigned int *)(v6 + 44); *a3 >= i; i = *(unsigned int *)(v6 + 44) )
    {
      *a3 -= i;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  else
  {
    v6 = sub_140287180(a1, a2, 0LL);
    *a3 -= *(unsigned int *)(v6 + 36) | ((unsigned __int64)(*(_WORD *)(v6 + 32) & 0xFFC0) << 26);
  }
  return (unsigned int *)v6;
}
