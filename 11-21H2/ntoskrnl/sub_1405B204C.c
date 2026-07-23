/*
 * XREFs of sub_1405B204C @ 0x1405B204C
 * Callers:
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_1405B1FD0 @ 0x1405B1FD0 (sub_1405B1FD0.c)
 *     sub_14097EE28 @ 0x14097EE28 (sub_14097EE28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405B204C(PVOID P)
{
  BOOL v2; // ebx

  v2 = sub_1405B1FD0((__int64)P);
  sub_14097EE28(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
