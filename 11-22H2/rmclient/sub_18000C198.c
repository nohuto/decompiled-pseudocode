/*
 * XREFs of sub_18000C198 @ 0x18000C198
 * Callers:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 * Callees:
 *     sub_18000C09C @ 0x18000C09C (sub_18000C09C.c)
 *     sub_18000E264 @ 0x18000E264 (sub_18000E264.c)
 *     sub_18000E81C @ 0x18000E81C (sub_18000E81C.c)
 */

__int64 __fastcall sub_18000C198(int a1, int a2, __int64 a3, int a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = sub_18000E264(a1, a2, (unsigned int)"wil", a4);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
  sub_18000E81C(v5);
  sub_18000C09C();
  return v5;
}
