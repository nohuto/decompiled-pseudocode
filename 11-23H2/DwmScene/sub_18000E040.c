/*
 * XREFs of sub_18000E040 @ 0x18000E040
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 *     sub_18000FC64 @ 0x18000FC64 (sub_18000FC64.c)
 * Callees:
 *     sub_18000DFD4 @ 0x18000DFD4 (sub_18000DFD4.c)
 */

signed int __fastcall sub_18000E040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  __int64 v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_18000DFD4(0LL, 0, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
