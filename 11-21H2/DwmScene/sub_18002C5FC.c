/*
 * XREFs of sub_18002C5FC @ 0x18002C5FC
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 *     sub_180036A48 @ 0x180036A48 (sub_180036A48.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180039F10 @ 0x180039F10 (sub_180039F10.c)
 *     sub_18003A3F4 @ 0x18003A3F4 (sub_18003A3F4.c)
 * Callees:
 *     sub_18002C5D4 @ 0x18002C5D4 (sub_18002C5D4.c)
 *     sub_18002C6A0 @ 0x18002C6A0 (sub_18002C6A0.c)
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002C5FC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_18002C6F4(a1) && !(unsigned __int8)sub_18002C6A0(a1) )
  {
    v4 = sub_18002C5D4(a1, (__int64)&v6);
    if ( *(_BYTE *)(a2 + 8) )
      sub_18002C8E4(*(_QWORD *)a2);
    *(_QWORD *)a2 = *(_QWORD *)v4;
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(v4 + 8);
    *(_QWORD *)v4 = 0LL;
    *(_BYTE *)(v4 + 8) = 0;
    if ( v7 )
      sub_18002C8E4(v6);
  }
  return a2;
}
