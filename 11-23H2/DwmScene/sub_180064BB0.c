/*
 * XREFs of sub_180064BB0 @ 0x180064BB0
 * Callers:
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18006296C @ 0x18006296C (sub_18006296C.c)
 *     sub_180062B54 @ 0x180062B54 (sub_180062B54.c)
 *     sub_180063998 @ 0x180063998 (sub_180063998.c)
 *     sub_18007218C @ 0x18007218C (sub_18007218C.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 *     sub_1800739D0 @ 0x1800739D0 (sub_1800739D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180064BB0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // r13
  char v9; // si
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r15d
  int v14; // ecx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h]
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+48h] [rbp-8h]

  v4 = a4;
  v6 = sub_180034094(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 96LL))(*a3, 7LL) )
    v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801D5948, 0LL);
  else
    v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801D5988, 0LL);
  if ( v9 && (unsigned int)sub_180062B54(v6) )
    v9 = 0;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 152LL))(*v4);
  sub_18001246C(&v25, v10);
  sub_18006296C(v25, &v23);
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801D59C8, 0LL);
    v13 = v12;
    v14 = 2;
    if ( (unsigned int)v12 > 2 )
    {
      if ( v12 < 0 )
        v14 = 0;
      v13 = v14;
    }
    v15 = v23;
    if ( !v23 )
    {
      v7 = v24;
      goto LABEL_20;
    }
    if ( *(_DWORD *)(v23 + 144) == v13 )
    {
      v7 = v24;
    }
    else
    {
      v16 = sub_180011DA0(&v27, &v23);
      sub_1800739D0(v25, v16);
      v15 = 0LL;
      v23 = 0LL;
      v17 = v24;
      v24 = 0LL;
      if ( !v17 )
        goto LABEL_20;
      sub_180010530(v17);
    }
    if ( v15 )
    {
LABEL_25:
      *(float *)(v15 + 280) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801D59A8);
      v4 = a4;
      goto LABEL_27;
    }
LABEL_20:
    v18 = sub_180063998(&v27);
    v15 = *v18;
    v19 = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v23 = v15;
    v20 = v7;
    v7 = v19;
    v24 = v19;
    if ( v20 )
      sub_180010530(v20);
    if ( v28 )
      sub_180010530(v28);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *a3, v13);
    v21 = sub_180011DA0(&v27, &v23);
    sub_18007218C(v25, v21);
    goto LABEL_25;
  }
  v7 = v24;
  v15 = v23;
LABEL_27:
  if ( v15 )
    *(_BYTE *)(v15 + 136) = v9;
  LOBYTE(v11) = v8;
  result = sub_180073624(v25, v4, v11);
  if ( v7 )
    result = sub_180010530(v7);
  if ( v26 )
    return sub_180010530(v26);
  return result;
}
