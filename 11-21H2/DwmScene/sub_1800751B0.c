/*
 * XREFs of sub_1800751B0 @ 0x1800751B0
 * Callers:
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18006BF90 @ 0x18006BF90 (sub_18006BF90.c)
 *     sub_180080554 @ 0x180080554 (sub_180080554.c)
 *     sub_1800805BC @ 0x1800805BC (sub_1800805BC.c)
 *     sub_1800A2A80 @ 0x1800A2A80 (sub_1800A2A80.c)
 *     sub_1800A2C60 @ 0x1800A2C60 (sub_1800A2C60.c)
 *     sub_1800F5E18 @ 0x1800F5E18 (sub_1800F5E18.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800751B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // edi
  __int64 *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = sub_180036808(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(
          v6,
          &qword_1801F80B8,
          0LL)
    || !(unsigned __int8)sub_1800805BC(a3) )
  {
    return 0;
  }
  v7 = sub_180080554(a3);
  if ( v7 == 4 )
  {
    v8 = &qword_1801F9718;
  }
  else
  {
    if ( v7 != 5 )
      goto LABEL_8;
    v8 = &qword_1801F9778;
  }
  sub_1800F5E18(v6, v8);
LABEL_8:
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &qword_1801F82F8, 2LL);
  if ( v7 == 6 )
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &qword_1801F82F8,
      (unsigned int)((v9 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA658);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &qword_1801FA658, v10, 1LL);
  if ( v7 == 9 )
  {
    v12 = &qword_1801F8198;
  }
  else
  {
    if ( v7 != 11 )
    {
      if ( v7 == 13 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &qword_1801F8318, 0LL);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
          v6,
          &qword_1801F8318,
          (unsigned int)((v13 + 1) % 22),
          1LL);
      }
      goto LABEL_17;
    }
    v12 = &qword_1801F82B8;
  }
  sub_1800F5E18(v6, v12);
LABEL_17:
  v14 = a2[1];
  v18 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a2[1];
  }
  v15 = *a2;
  *((_QWORD *)&v18 + 1) = v14;
  *(_QWORD *)&v18 = v15;
  sub_180036540(a1, v19, v11, &v18);
  if ( v7 == 14 || v7 == 15 )
  {
    sub_18006BF90(v20, v19);
    sub_1800A2A80(v20[0]);
    sub_1800A2C60(v16);
    sub_180010910((__int64)v20);
  }
  sub_180010910((__int64)v19);
  return 1;
}
