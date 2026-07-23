/*
 * XREFs of sub_140998440 @ 0x140998440
 * Callers:
 *     <none>
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140998440(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return sub_140293A88((__int64)dword_140D06E40, (__int64)sub_1405D8720, 0LL, 0LL);
}
