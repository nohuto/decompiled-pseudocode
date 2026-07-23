/*
 * XREFs of sub_1409EA068 @ 0x1409EA068
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056C938 @ 0x14056C938 (sub_14056C938.c)
 */

void __fastcall sub_1409EA068(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  char v11; // [rsp+5Ch] [rbp-24h]
  __int64 *v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  if ( (_BYTE)a2 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    sub_14042A5E0(&v8, a2);
    v6 = *(_QWORD *)((char *)&v8 + 4);
    v3 = sub_14056C938();
    v14 = 0;
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1096);
    v12 = &v6;
    v7 = v3;
    v13 = 12;
    sub_1402AB170((__int64)&v12, v5, v4, 1u, 0xF5Au, 0x401802u);
  }
}
