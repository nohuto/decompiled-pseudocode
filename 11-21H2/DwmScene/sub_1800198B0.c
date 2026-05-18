/*
 * XREFs of sub_1800198B0 @ 0x1800198B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180017E94 @ 0x180017E94 (sub_180017E94.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_1800E3B1C @ 0x1800E3B1C (sub_1800E3B1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800198B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF

  sub_180017558(*(__int64 **)(a1 + 56), v17);
  v8 = (__int64 *)sub_180036948(*(_QWORD *)(a1 + 56), v18, 1LL);
  sub_180016ED0(*v8, &v16);
  sub_180010910((__int64)v18);
  if ( *((_QWORD *)&v16 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
  v18[1] = v16;
  sub_180018704((__int64)&v15);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v21 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v22 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  sub_1800E3B1C(v15, &v22, &v21, 1LL);
  v9 = v17[0];
  if ( *((_QWORD *)&v15 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
  v18[0] = v15;
  sub_18005D638(v9, v18, 1LL);
  sub_180010910((__int64)v18);
  v20 = 0LL;
  v10 = sub_180017E94(&v20, (__int64)v17);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v20;
    v20 = 0LL;
    *a4 = v13;
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v11 = 0;
  }
  else
  {
    sub_18000F364(
      retaddr,
      386LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v10);
    v12 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  sub_180010910((__int64)&v15);
  sub_180010910((__int64)&v16);
  sub_180010910((__int64)v17);
  return v11;
}
