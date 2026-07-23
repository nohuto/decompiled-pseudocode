/*
 * XREFs of sub_1406F4650 @ 0x1406F4650
 * Callers:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 * Callees:
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 */

__int64 __fastcall sub_1406F4650(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  result = sub_14026E548(4, a2);
  v5 = 0LL;
  v6 = result;
  v10 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  if ( v3 <= v8 )
  {
    do
    {
      result = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
        result = sub_14027D890(v3, *(_QWORD *)v3);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v6) )
      {
        result = v3 << 25;
        if ( !v5 )
        {
          v7 = result >> 16;
          v9 = result >> 16;
        }
        v5 = ((result + 0x10000000) >> 16) - v7;
        v10 = v5;
      }
      v3 += 8LL;
    }
    while ( v3 <= v4 );
    if ( v5 > 0x1000 )
      return sub_140284EB0(1uLL, (__int64)&v9, 1LL, 45);
  }
  return result;
}
