/*
 * XREFs of sub_180004310 @ 0x180004310
 * Callers:
 *     sub_180004230 @ 0x180004230 (sub_180004230.c)
 * Callees:
 *     sub_180004410 @ 0x180004410 (sub_180004410.c)
 *     sub_180008B00 @ 0x180008B00 (sub_180008B00.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180004310(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&unk_180026378);
  if ( v4 )
  {
    *v4 = &off_180024EA0;
    sub_180004410(v4 + 1);
    v5 = qword_1800328E0;
    *v4 = off_1800205C8;
    v4[1] = off_180020618;
    *((_DWORD *)v4 + 15) = 1;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4[8] = 0LL;
    if ( v4 + 8 != a2 )
    {
      v4[8] = *a2;
      *a2 = 0LL;
    }
    *v4 = off_1800205F0;
    v4[1] = off_180020618;
    if ( *a1 )
      sub_180008B00();
    *a1 = v4;
  }
  return a1;
}
