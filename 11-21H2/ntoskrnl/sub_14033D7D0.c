/*
 * XREFs of sub_14033D7D0 @ 0x14033D7D0
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14033D7D0(unsigned int a1)
{
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return 1LL;
  if ( a1 >> 3 == 3 )
  {
    if ( (a1 & 7) == 0 )
      return 1LL;
    return 2LL;
  }
  else
  {
    return a1 >> 3 != 1;
  }
}
