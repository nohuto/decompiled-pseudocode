/*
 * XREFs of sub_140B34828 @ 0x140B34828
 * Callers:
 *     KeCheckedKernelInitialize @ 0x140B17B50 (KeCheckedKernelInitialize.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B34828()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  __int16 v2; // [rsp+8h] [rbp-10h]

  v1 = 0LL;
  v2 = 0;
  __lidt(&v1);
  return 0LL;
}
