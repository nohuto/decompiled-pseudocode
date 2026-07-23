/*
 * XREFs of sub_140262D00 @ 0x140262D00
 * Callers:
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 *     sub_1409D7D54 @ 0x1409D7D54 (sub_1409D7D54.c)
 * Callees:
 *     sub_140262DBC @ 0x140262DBC (sub_140262DBC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140262D00(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rax
  unsigned int *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-11h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-9h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v10[5]; // [rsp+50h] [rbp+17h] BYREF
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  v10[1] = 4096LL;
  v10[2] = 0x2000LL;
  v10[3] = 0x4000LL;
  v10[0] = 2048LL;
  v10[4] = 0x8000LL;
  v11 = -1;
  v12 = 0;
  v6[0] = -1;
  v6[1] = 100000000;
  v7[0] = -1;
  v7[1] = 0;
  v8[0] = -1;
  v8[1] = 0;
  if ( a2 )
  {
    v4 = (unsigned int *)v10;
    if ( a2 > 0x800 )
    {
      do
        v4 += 2;
      while ( *v4 < a2 );
    }
    *v4 = -1;
    v9[0] = v10;
    v2 = v6;
  }
  else
  {
    v9[0] = v7;
    v2 = v8;
  }
  v9[1] = v2;
  v5 = 983104LL;
  return sub_140262DBC(a1, v9, &v5);
}
