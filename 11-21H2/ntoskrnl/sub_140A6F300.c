/*
 * XREFs of sub_140A6F300 @ 0x140A6F300
 * Callers:
 *     sub_14076185C @ 0x14076185C (sub_14076185C.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 * Callees:
 *     sub_140A6F360 @ 0x140A6F360 (sub_140A6F360.c)
 */

__int64 __fastcall sub_140A6F300(int a1)
{
  _DWORD v2[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  v4 = 0;
  v2[0] = 128;
  v2[1] = 5;
  v2[2] = 32;
  return sub_140A6F360(
           a1,
           (unsigned int)sub_140A72AC0,
           (unsigned int)&sub_140A72D50,
           (unsigned int)sub_140A6F0A0,
           (__int64)v2);
}
