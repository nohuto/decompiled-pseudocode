/*
 * XREFs of sub_1800B52F0 @ 0x1800B52F0
 * Callers:
 *     sub_1800B5388 @ 0x1800B5388 (sub_1800B5388.c)
 * Callees:
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B42B4 @ 0x1800B42B4 (sub_1800B42B4.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B52F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8[24]; // [rsp+38h] [rbp-C0h] BYREF

  result = sub_1800B4028();
  if ( result )
  {
    result = sub_1800B42B4(a2, (__int64)&v6);
    if ( v6 == 2 )
    {
      *a3 = v7;
      sub_1800B3D60((__int64)v8);
      sub_1800B3E48(a2, v8);
    }
    else
    {
      if ( v6 != 5 )
        return result;
      sub_1800B3D60((__int64)v8);
      sub_1800B3E48(a2, v8);
    }
    return sub_1800B3DDC((__int64)v8);
  }
  return result;
}
