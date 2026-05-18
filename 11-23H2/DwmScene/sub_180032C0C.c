/*
 * XREFs of sub_180032C0C @ 0x180032C0C
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002F8F8 @ 0x18002F8F8 (sub_18002F8F8.c)
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180032C0C(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  _BYTE v17[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+18h] BYREF

  v21 = a2;
  v20 = 0;
  sub_18002A0C4(a1 + 8, (__int64)v17);
  v12 = 0LL;
  if ( v20 )
  {
    v3 = sub_18002F8F8((__int64 *)(a1 + 1080), (__int64)v18, &v20);
    v4 = sub_18001246C(&v15, (_QWORD *)(*(_QWORD *)v3 + 40LL));
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)&v12 = v5;
    v6 = v4[1];
    v4[1] = 0LL;
    *((_QWORD *)&v12 + 1) = v6;
    if ( v16 )
      sub_180010530(v16);
  }
  v21 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 1096) = v21 + 1;
  sub_180030500(&v13, &v21, &v12);
  v7 = *(_QWORD *)sub_18002F8F8((__int64 *)(a1 + 1080), (__int64)v19, (int *)&v21);
  v8 = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v8 = v14;
  }
  *(_QWORD *)(v7 + 40) = v13;
  v9 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v8;
  if ( v9 )
    sub_180010530(v9);
  v10 = v21;
  if ( v8 )
    sub_180010530(v8);
  if ( *((_QWORD *)&v12 + 1) )
    sub_180010530(*((__int64 *)&v12 + 1));
  sub_180010F54((__int64)v17);
  return v10;
}
