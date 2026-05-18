/*
 * XREFs of sub_18005DEF0 @ 0x18005DEF0
 * Callers:
 *     sub_18005DC48 @ 0x18005DC48 (sub_18005DC48.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800189B4 @ 0x1800189B4 (sub_1800189B4.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005DEF0(__int64 a1)
{
  __int128 *v2; // r9
  __int64 v4; // [rsp+20h] [rbp-79h] BYREF
  __int64 v5; // [rsp+28h] [rbp-71h]
  __int128 v6; // [rsp+30h] [rbp-69h] BYREF
  __int128 v7; // [rsp+40h] [rbp-59h]
  __int128 v8; // [rsp+50h] [rbp-49h]
  __int128 v9; // [rsp+60h] [rbp-39h]
  __int128 v10; // [rsp+70h] [rbp-29h] BYREF
  __int128 v11; // [rsp+80h] [rbp-19h]
  __int128 v12; // [rsp+90h] [rbp-9h]
  __int128 v13; // [rsp+A0h] [rbp+7h]
  __int128 v14[4]; // [rsp+B0h] [rbp+17h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_18005BDF4(a1, 1) )
    return 0;
  sub_18004330C(a1, &v4);
  if ( sub_180011DE0(&v4) )
  {
    sub_18003C72C(v4, v14);
    sub_1800189B4(v14, (__int64)&v6);
    v10 = v14[0];
    v11 = v14[1];
    v12 = v14[2];
    v13 = v14[3];
    sub_18005D514(a1, 1, 0, &v10);
    v10 = v6;
    v11 = v7;
    v12 = v8;
    v13 = v9;
    v2 = &v10;
  }
  else
  {
    v6 = xmmword_180106A40;
    v7 = xmmword_180106A50;
    v8 = xmmword_180106A60;
    v9 = xmmword_180106A70;
    sub_18005D514(a1, 1, 0, &v6);
    v6 = xmmword_180106A40;
    v7 = xmmword_180106A50;
    v8 = xmmword_180106A60;
    v9 = xmmword_180106A70;
    v2 = &v6;
  }
  sub_18005D514(a1, 0, 1, v2);
  *(_DWORD *)(a1 + 544) &= ~1u;
  if ( v5 )
    sub_180010530(v5);
  return 1;
}
