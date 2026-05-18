/*
 * XREFs of sub_18005D638 @ 0x18005D638
 * Callers:
 *     sub_1800198B0 @ 0x1800198B0 (sub_1800198B0.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 * Callees:
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18005E27C @ 0x18005E27C (sub_18005E27C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E448 @ 0x18005E448 (sub_18005E448.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 */

__int64 __fastcall sub_18005D638(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  int v16; // r8d
  int v17; // r9d
  char v18; // r10
  char v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v23; // [rsp+50h] [rbp-18h] BYREF

  sub_18002BCC0(a1, 1, 0);
  sub_18002BCC0(v5, v4 + 2, v4);
  sub_18002BCC0(v7, v6 + 4, v6);
  sub_18005E448(*a2);
  v8 = sub_18005E30C(*a2);
  v9 = sub_18005E27C(*a2, v8);
  v12 = sub_18005E3D8(*a2, v10, v11, v9);
  v14 = sub_18005E468(*a2, v13, v12);
  sub_18005D70C(a1, v14, v16, v17, v15, v18, v19, 0LL, 0, 0LL);
  v20 = a2[1];
  v23 = 0LL;
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a2[1];
  }
  v21 = *a2;
  *((_QWORD *)&v23 + 1) = v20;
  *(_QWORD *)&v23 = v21;
  return sub_18005D1D8(a1, &v23);
}
