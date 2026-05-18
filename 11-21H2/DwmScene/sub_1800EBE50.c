/*
 * XREFs of sub_1800EBE50 @ 0x1800EBE50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800EB334 @ 0x1800EB334 (sub_1800EB334.c)
 *     sub_1800EB468 @ 0x1800EB468 (sub_1800EB468.c)
 *     sub_1800EB668 @ 0x1800EB668 (sub_1800EB668.c)
 *     sub_1800EBB74 @ 0x1800EBB74 (sub_1800EBB74.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800EBE50(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // r9d
  const char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v13; // eax
  char *String[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h]
  char *v16; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h]
  __int128 v18; // [rsp+68h] [rbp-98h]
  __int128 v19; // [rsp+78h] [rbp-88h]
  _BYTE v20[352]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 15LL;
  LOBYTE(String[0]) = 0;
  v6 = *(_DWORD *)(a1 + 96);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_1800EBB74(&v16, (__int64 **)(a1 + 112));
      v7 = sub_1800EB334((__int64)v16);
      sub_1800EB468(a1, a2, v7, v8, a3);
      *(_OWORD *)String = v18;
      v15 = v19;
      *(_QWORD *)&v19 = 0LL;
      *((_QWORD *)&v19 + 1) = 15LL;
      LOBYTE(v18) = 0;
      if ( v16 )
        sub_180010884(v16, (*((_QWORD *)&v17 + 1) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFE0uLL);
    }
  }
  else
  {
    sub_1800EB668((__int64)&v16, *(_QWORD *)(a1 + 104), (__int64)v20);
    sub_1800EB468(a1, a2, (__int64)v20, (unsigned int)v16, a3);
    *(_OWORD *)String = v17;
    v15 = v18;
  }
  v9 = (const char *)String;
  v10 = String[0];
  if ( *((_QWORD *)&v15 + 1) >= 0x10uLL )
    v9 = String[0];
  v11 = *(_QWORD *)(a1 + 144);
  if ( v11 )
  {
    v12 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v11 + 40LL);
    if ( v9 )
      v13 = strnlen(v9, 0x7FFFFFFFuLL);
    else
      v13 = 0;
    v12(v11, &unk_180127F58, v13, v9);
    v10 = String[0];
  }
  if ( *((_QWORD *)&v15 + 1) >= 0x10uLL )
    sub_180010884(v10, *((_QWORD *)&v15 + 1) + 1LL);
}
