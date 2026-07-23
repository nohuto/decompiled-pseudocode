/*
 * XREFs of sub_1406D8240 @ 0x1406D8240
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D8240(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
