/*
 * XREFs of sub_140AB17C4 @ 0x140AB17C4
 * Callers:
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AB1400 @ 0x140AB1400 (sub_140AB1400.c)
 * Callees:
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_140AABCD8 @ 0x140AABCD8 (sub_140AABCD8.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_140AB17C4(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _BYTE *v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = sub_140AABCD8(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = sub_1403A7F70(v5, a2);
    sub_140AAD3E0((__int64)v5);
  }
  return (unsigned int)v3;
}
