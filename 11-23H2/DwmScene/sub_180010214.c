/*
 * XREFs of sub_180010214 @ 0x180010214
 * Callers:
 *     sub_18000FFF0 @ 0x18000FFF0 (sub_18000FFF0.c)
 *     sub_1800149F4 @ 0x1800149F4 (sub_1800149F4.c)
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_180016570 @ 0x180016570 (sub_180016570.c)
 *     sub_1800166AC @ 0x1800166AC (sub_1800166AC.c)
 *     sub_180016800 @ 0x180016800 (sub_180016800.c)
 *     sub_18001693C @ 0x18001693C (sub_18001693C.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     sub_18001BA30 @ 0x18001BA30 (sub_18001BA30.c)
 *     sub_1800E3B53 @ 0x1800E3B53 (sub_1800E3B53.c)
 *     sub_1800E45B3 @ 0x1800E45B3 (sub_1800E45B3.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

__int64 __fastcall sub_180010214(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B988(v1);
  return result;
}
