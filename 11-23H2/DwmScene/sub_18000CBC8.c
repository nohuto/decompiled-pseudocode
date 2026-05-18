/*
 * XREFs of sub_18000CBC8 @ 0x18000CBC8
 * Callers:
 *     sub_18000F004 @ 0x18000F004 (sub_18000F004.c)
 * Callees:
 *     sub_18000CAC8 @ 0x18000CAC8 (sub_18000CAC8.c)
 *     sub_18000DFD4 @ 0x18000DFD4 (sub_18000DFD4.c)
 *     sub_18000E55C @ 0x18000E55C (sub_18000E55C.c)
 */

__int64 __fastcall sub_18000CBC8(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  v8 = sub_18000DFD4(a1, a2, (unsigned int)"wil", a4);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  LODWORD(v13) = v9;
  HIDWORD(v13) = sub_18000E55C(v9);
  LOBYTE(v14) = 0;
  v16 = v14;
  v15 = v13;
  sub_18000CAC8(a1, a2, (int)"wil", v10, v12, a6, (__int64)&v15);
  return v9;
}
