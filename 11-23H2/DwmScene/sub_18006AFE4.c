/*
 * XREFs of sub_18006AFE4 @ 0x18006AFE4
 * Callers:
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180062B7C @ 0x180062B7C (sub_180062B7C.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180074694 @ 0x180074694 (sub_180074694.c)
 *     sub_180074700 @ 0x180074700 (sub_180074700.c)
 *     sub_180092D40 @ 0x180092D40 (sub_180092D40.c)
 *     sub_180093000 @ 0x180093000 (sub_180093000.c)
 *     sub_1800DBF50 @ 0x1800DBF50 (sub_1800DBF50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18006AFE4(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // edi
  void *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  void *v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  v6 = sub_180034094(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801D4048, 0LL)
    || !(unsigned __int8)sub_180074700(a3) )
  {
    return 0;
  }
  v7 = sub_180074694(a3);
  if ( v7 == 4 )
  {
    v8 = &unk_1801D56A8;
  }
  else
  {
    if ( v7 != 5 )
      goto LABEL_8;
    v8 = &unk_1801D5708;
  }
  sub_1800DBF50(v6, v8);
LABEL_8:
  v9 = sub_180062B7C(v6);
  if ( v7 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_1801D4288,
      (unsigned int)((v9 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801D65E8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_1801D65E8, v10, 1LL);
  if ( v7 == 9 )
  {
    v11 = &unk_1801D4128;
  }
  else
  {
    if ( v7 != 11 )
    {
      if ( v7 == 13 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801D42A8, 0LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
          v6,
          &unk_1801D42A8,
          (unsigned int)((v12 + 1) % 22),
          1LL);
      }
      goto LABEL_17;
    }
    v11 = &unk_1801D4248;
  }
  sub_1800DBF50(v6, v11);
LABEL_17:
  v13 = sub_18001246C(&v19, a2);
  sub_180033EB4(a1, &v17, v14, v13);
  if ( v7 == 14 || v7 == 15 )
  {
    sub_1800631C0(&v19, &v17);
    sub_180092D40(v19);
    sub_180093000(v15);
    if ( v20 )
      sub_180010530(v20);
  }
  if ( v18 )
    sub_180010530(v18);
  return 1;
}
