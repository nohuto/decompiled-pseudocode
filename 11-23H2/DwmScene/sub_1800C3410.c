/*
 * XREFs of sub_1800C3410 @ 0x1800C3410
 * Callers:
 *     sub_1800C5470 @ 0x1800C5470 (sub_1800C5470.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180017C50 @ 0x180017C50 (sub_180017C50.c)
 *     sub_18001B8BC @ 0x18001B8BC (sub_18001B8BC.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026DBC @ 0x180026DBC (sub_180026DBC.c)
 *     sub_180029FE4 @ 0x180029FE4 (sub_180029FE4.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_1800C3D9C @ 0x1800C3D9C (sub_1800C3D9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800C3410(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  char v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]

  sub_18002A370(a1 + 24);
  v19 = 0LL;
  v20 = 0;
  if ( sub_180026618(a1) )
  {
    v10 = sub_180026DBC(v9, (__int64)v18);
    sub_180017C50((__int64)&v19, v10);
    sub_180010F54((__int64)v18);
  }
  sub_1800C3D9C(a2, a3, a4, a5, 0);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v11 = a2[1];
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v16 = *a2;
  v17 = a2[1];
  sub_18001B8BC((_QWORD *)(a1 + 248), &v16);
  if ( v17 )
    sub_180010530(v17);
  v15 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    *(_QWORD *)&v15 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v15 + 1) = v12;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
  }
  v13 = (_QWORD *)sub_180011D4C(a1 + 8, &v21);
  v18[0] = (*v13 + 24LL) & -(__int64)(*v13 != 0LL);
  v18[1] = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  sub_180029FE4((__int64)v18, (__int64)&v15);
  if ( v22 )
    sub_180010530(v22);
  sub_180010F54((__int64)&v19);
  return a2;
}
