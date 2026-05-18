/*
 * XREFs of sub_18002C0C0 @ 0x18002C0C0
 * Callers:
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AD28 @ 0x18002AD28 (sub_18002AD28.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002B0C4 @ 0x18002B0C4 (sub_18002B0C4.c)
 *     sub_18002B730 @ 0x18002B730 (sub_18002B730.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 *     sub_1800A1424 @ 0x1800A1424 (sub_1800A1424.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18002C0C0(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE v9[136]; // [rsp+38h] [rbp-D0h] BYREF
  void *v10[3]; // [rsp+C0h] [rbp-48h] BYREF
  void *v11[20]; // [rsp+D8h] [rbp-30h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[51] < a1[60] )
  {
    sub_18002B7C0((__int64)v9);
    v4 = sub_1800A1424(a1[55], a1[51], v9);
    if ( v4 )
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((v4 - 1) & 0xFFFFFFFD) == 0 )
        {
          sub_18002AE4C(v10, (__int64)v10);
          return a2;
        }
      }
      else
      {
        memset(v11, 0, 0x98uLL);
        v6 = sub_18002B7C0((__int64)v11);
        v8 = a2[1];
        if ( v8 == a2[2] )
        {
          sub_18002AD28(a2, v8, v6);
        }
        else
        {
          sub_18002B0C4(v7, v8, v6);
          a2[1] += 152LL;
        }
        sub_18002AE4C(&v11[17], (__int64)&v11[17]);
      }
    }
    else if ( a2[1] == a2[2] )
    {
      sub_18002AC04(a2, a2[1], (__int64)v9);
    }
    else
    {
      sub_18002B730(a2[1], (__int64)v9);
      a2[1] += 152LL;
    }
    ++a1[51];
    sub_18002AE4C(v10, (__int64)v10);
  }
  return a2;
}
