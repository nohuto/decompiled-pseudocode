/*
 * XREFs of sub_18001AA68 @ 0x18001AA68
 * Callers:
 *     sub_18001B450 @ 0x18001B450 (sub_18001B450.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_180019178 @ 0x180019178 (sub_180019178.c)
 *     sub_1800191B0 @ 0x1800191B0 (sub_1800191B0.c)
 *     sub_18001AC10 @ 0x18001AC10 (sub_18001AC10.c)
 */

__int64 __fastcall sub_18001AA68(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  void *v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180026378);
  v11 = v6;
  if ( v6 )
  {
    v8 = sub_18001AC10(v6);
    v11 = 0LL;
    v9 = v8;
    v12 = v8;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(__int64, __int128 *, _QWORD *))v9)(v9, &xmmword_1800266B8, a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return (unsigned int)v7;
    }
    sub_180019178(&v12);
  }
  else
  {
    v7 = -2147024882;
  }
  sub_1800191B0(&v11);
  return (unsigned int)v7;
}
