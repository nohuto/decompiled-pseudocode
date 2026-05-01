/*
 * XREFs of sub_1800037A0 @ 0x1800037A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003834 @ 0x180003834 (sub_180003834.c)
 *     sub_180004F38 @ 0x180004F38 (sub_180004F38.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void *__fastcall sub_1800037A0(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  result = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_180026378);
  if ( result )
  {
    result = (void *)sub_180003834(result, a1, a2);
    v6 = result;
    if ( result )
    {
      v8 = 0LL;
      v9 = result;
      v7[0] = &v8;
      v7[1] = &v9;
      sub_180004F38(v5, v7);
      return (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
