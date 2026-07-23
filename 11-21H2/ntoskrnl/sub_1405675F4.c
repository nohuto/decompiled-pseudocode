/*
 * XREFs of sub_1405675F4 @ 0x1405675F4
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 * Callees:
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 */

__int64 sub_1405675F4()
{
  __int64 result; // rax
  _QWORD v1[5]; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( !byte_140D0194C )
  {
    v1[0] = -1LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    return sub_140429850(0LL, (__int64)v1, 4u);
  }
  return result;
}
