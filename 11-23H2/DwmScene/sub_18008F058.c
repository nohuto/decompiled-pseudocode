/*
 * XREFs of sub_18008F058 @ 0x18008F058
 * Callers:
 *     sub_18008FDC8 @ 0x18008FDC8 (sub_18008FDC8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_18007CBD4 @ 0x18007CBD4 (sub_18007CBD4.c)
 *     sub_18008F51C @ 0x18008F51C (sub_18008F51C.c)
 */

__int64 __fastcall sub_18008F058(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = sub_180010B48(0x200uLL);
  v4 = sub_18001090C(v3);
  *a1 = v4;
  a1[2] = v4 + 0x2000;
  v5 = sub_18008F51C(v4, 512LL);
  v7 = 0LL;
  a1[1] = v5;
  return sub_18007CBD4(&v7);
}
