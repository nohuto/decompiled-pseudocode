/*
 * XREFs of sub_1800369F8 @ 0x1800369F8
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_18003A3F4 @ 0x18003A3F4 (sub_18003A3F4.c)
 * Callees:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800369F8(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  sub_18002C5FC(a1 + 112, (__int64)&v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  if ( v5 )
    sub_18002C8E4(v4);
  return (unsigned int)v2;
}
