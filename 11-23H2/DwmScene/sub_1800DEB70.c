/*
 * XREFs of sub_1800DEB70 @ 0x1800DEB70
 * Callers:
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 *     sub_1800DEB70 @ 0x1800DEB70 (sub_1800DEB70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DEB70 @ 0x1800DEB70 (sub_1800DEB70.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB6C @ 0x1800DFB6C (sub_1800DFB6C.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DEB70(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  _QWORD v13[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-30h] BYREF

  v4 = sub_1800DFB6C(a2);
  sub_18001E3BC(v14, (__int64)L"Value");
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 != 1 )
            goto LABEL_10;
          v8 = v14;
          if ( v14[3] >= 8uLL )
            v8 = (_QWORD *)v14[0];
          if ( (unsigned __int8)sub_1800DFB78(a2, v8) )
          {
            v9 = sub_180012440(v13, (__int64)v14);
            v10 = sub_1800DFA18(a2, v9);
            v11 = sub_1800DEB70(a1, v10);
          }
          else
          {
LABEL_10:
            v11 = 0;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v11 = 2;
    }
  }
  else
  {
    v11 = 4;
  }
  sub_180013348((__int64)v14);
  return v11;
}
