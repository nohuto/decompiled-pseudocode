/*
 * XREFs of sub_1406E0480 @ 0x1406E0480
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_1406E0480(int a1, _BYTE *a2)
{
  int v4; // ecx
  int v6; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v7[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v8; // [rsp+98h] [rbp+28h] BYREF
  int v9; // [rsp+A0h] [rbp+30h] BYREF
  int v10; // [rsp+A8h] [rbp+38h] BYREF

  *a2 = 0;
  v8 = 0;
  v6 = 0;
  v7[0] = 0;
  v10 = 0;
  v9 = 0;
  v4 = sub_14077DA5C(
         qword_140D00AC0,
         a1,
         1,
         0,
         0LL,
         (__int64)&qword_140010B98,
         (__int64)&v10,
         (__int64)&v8,
         4,
         (__int64)&v9,
         0);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v4 = sub_14077DA5C(
         qword_140D00AC0,
         a1,
         1,
         0,
         0LL,
         (__int64)&qword_140010C28,
         (__int64)&v10,
         (__int64)&v6,
         4,
         (__int64)&v9,
         0);
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (v8 & 0x40000) != 0 )
    goto LABEL_13;
  if ( (v8 & 0x400) == 0 )
    goto LABEL_5;
  if ( v6 == 22 )
  {
LABEL_13:
    *a2 = 0;
    return (unsigned int)v4;
  }
  if ( v6 == 18 || v6 == 1 )
    goto LABEL_7;
LABEL_5:
  v4 = sub_14077DA5C(
         qword_140D00AC0,
         a1,
         1,
         0,
         0LL,
         (__int64)&qword_14000EC80,
         (__int64)&v10,
         (__int64)v7,
         4,
         (__int64)&v9,
         0);
  if ( v4 >= 0 && (v7[0] & 0x420) != 0 )
LABEL_7:
    *a2 = 1;
  return (unsigned int)v4;
}
