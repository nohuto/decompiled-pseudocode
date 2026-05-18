/*
 * XREFs of sub_180015D28 @ 0x180015D28
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180017354 @ 0x180017354 (sub_180017354.c)
 *     sub_180017C50 @ 0x180017C50 (sub_180017C50.c)
 *     sub_18001B8BC @ 0x18001B8BC (sub_18001B8BC.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026DBC @ 0x180026DBC (sub_180026DBC.c)
 *     sub_180029FE4 @ 0x180029FE4 (sub_180029FE4.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180015D28(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int128 v18; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  char v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh]

  sub_18002A370(a1 + 24);
  v21 = 0LL;
  v22 = 0;
  if ( sub_180026618(a1) )
  {
    v14 = sub_180026DBC(v13, &v23);
    sub_180017C50(&v21, v14);
    sub_180010F54((__int64)&v23);
  }
  sub_180017354((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  sub_180011DA0(&v19, a2);
  sub_18001B8BC(a1 + 248, &v19);
  if ( v20 )
    sub_180010530(v20);
  v18 = 0LL;
  v15 = a2[1];
  if ( v15 )
  {
    *(_QWORD *)&v18 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v18 + 1) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
  }
  v16 = (_QWORD *)sub_180011D4C(a1 + 8, &v23);
  v19 = (*v16 + 24LL) & -(__int64)(*v16 != 0LL);
  v20 = v16[1];
  *v16 = 0LL;
  v16[1] = 0LL;
  sub_180029FE4(&v19, &v18);
  if ( v24 )
    sub_180010530(v24);
  sub_180010F54((__int64)&v21);
  return a2;
}
