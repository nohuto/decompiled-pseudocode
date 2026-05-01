/*
 * XREFs of sub_180004B70 @ 0x180004B70
 * Callers:
 *     sub_180003FF0 @ 0x180003FF0 (sub_180003FF0.c)
 *     sub_1800049B0 @ 0x1800049B0 (sub_1800049B0.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180004CC0 @ 0x180004CC0 (sub_180004CC0.c)
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004B70(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ebp
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_180026378);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = qword_1800328E0;
  *((_DWORD *)v4 + 3) = 1;
  *v4 = off_1800206C8;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v5[2] = 0LL;
  *v5 = off_1800206A8;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v7 = *a2;
  v10 = v5;
  v8 = sub_180004CC0(v5, v7);
  if ( v8 < 0 )
  {
    sub_18000A570(&v10);
    return (unsigned int)v8;
  }
  else
  {
    sub_180008980((char *)v5 + 12);
    *a1 = v5;
    sub_180004C40(v5);
    return 0LL;
  }
}
