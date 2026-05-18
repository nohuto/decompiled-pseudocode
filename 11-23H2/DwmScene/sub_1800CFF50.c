/*
 * XREFs of sub_1800CFF50 @ 0x1800CFF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180039260 @ 0x180039260 (sub_180039260.c)
 *     sub_180097908 @ 0x180097908 (sub_180097908.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall sub_1800CFF50(__int64 a1)
{
  __int64 *v3; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rbx
  char v6; // al
  __int64 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  void (__fastcall *v10)(__int64 *, __int64); // rdi
  __int64 (__fastcall *v11)(__int64 *, _QWORD, __int64); // rdi
  int v12; // ebx
  const char *v13; // rax
  _QWORD *v14; // r14
  __int64 *v15; // rcx
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, void *, _QWORD *); // rbx
  __int64 v18[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  _QWORD v23[4]; // [rsp+50h] [rbp-30h] BYREF

  if ( !sub_180039260((__int64 (__fastcall ****)(_QWORD, __int64))a1) )
  {
    sub_18001DB68(&stru_1801C8548, 3, "Failed to create CommandList object");
    return 0;
  }
  v3 = (__int64 *)(a1 + 144);
  if ( sub_1800CC258((_QWORD *)(a1 + 144)) )
  {
    sub_180011C50(a1 + 72, &v21);
    v4 = sub_18001246C(v18, &v21);
    sub_180097908(&v19, v4);
    sub_1800C589C(v19, v18);
    v5 = (__int64 *)v18[0];
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 304LL))(v18[0]);
    v7 = (__int64 *)(a1 + 144);
    v8 = (v6 & 1) == 0;
    v9 = *v5;
    if ( v8 )
    {
      v11 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v9 + 352);
      sub_18000E72C(v7);
      v12 = v11(v5, 0LL, a1 + 144);
      sub_1800C7750(v19, v12);
      if ( v12 < 0 )
      {
        sub_18001DB68(&stru_1801C8548, 3, "Failed to create DeferredContext with HRESULT error 0x%.8x", v12);
        sub_18000E72C(v18);
        if ( v20 )
          sub_180010530(v20);
        if ( v22 )
          sub_180010530(v22);
        return 0;
      }
      v13 = (const char *)sub_18002963C(a1, v23);
      if ( *((_QWORD *)v13 + 3) >= 0x10uLL )
        v13 = *(const char **)v13;
      sub_18001145C(*v3, v13);
      sub_180011B24((__int64)v23);
    }
    else
    {
      v10 = *(void (__fastcall **)(__int64 *, __int64))(v9 + 344);
      sub_18000E72C(v7);
      v10(v5, a1 + 144);
    }
    sub_18000E72C(v18);
    if ( v20 )
      sub_180010530(v20);
    if ( v22 )
      sub_180010530(v22);
  }
  v14 = (_QWORD *)(a1 + 152);
  if ( !sub_1800CC258(v14) )
    return 1;
  v16 = *v3;
  v17 = **(int (__fastcall ***)(__int64, void *, _QWORD *))*v3;
  sub_18000E72C(v15);
  return v17(v16, &unk_18019A2D0, v14) >= 0;
}
