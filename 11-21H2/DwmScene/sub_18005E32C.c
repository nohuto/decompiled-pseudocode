/*
 * XREFs of sub_18005E32C @ 0x18005E32C
 * Callers:
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18005DBFC @ 0x18005DBFC (sub_18005DBFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 */

__int64 __fastcall sub_18005E32C(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edx
  char *v7; // rdi
  __int64 i; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD v12[2]; // [rsp+20h] [rbp-88h]
  char v13; // [rsp+28h] [rbp-80h] BYREF
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]
  int v16; // [rsp+80h] [rbp-28h]

  v4 = a1;
  v5 = sub_18004E9D8(a1, a2);
  v6 = 0;
  if ( (_DWORD)v4 == 23 )
  {
    v10 = a3 + ((unsigned int)(a3 + 1) >> 1);
    return v5 * v10;
  }
  v12[0] = 0;
  v12[1] = 1;
  v7 = &v13;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v7 = 1;
    v7 += 4;
  }
  v14 = 4;
  v15 = 1;
  v16 = 1;
  v9 = v12[v4];
  if ( v9 )
  {
    v10 = (v9 + a3 - 1) / v9;
    return v5 * v10;
  }
  return v6;
}
