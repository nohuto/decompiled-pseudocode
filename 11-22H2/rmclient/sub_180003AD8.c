/*
 * XREFs of sub_180003AD8 @ 0x180003AD8
 * Callers:
 *     sub_180003A40 @ 0x180003A40 (sub_180003A40.c)
 * Callees:
 *     ??0UMSFreeThreadProxy@details@Concurrency@@QEAA@PEAUIThreadProxyFactory@12@PEAXI@Z @ 0x180003B68 (--0UMSFreeThreadProxy@details@Concurrency@@QEAA@PEAUIThreadProxyFactory@12@PEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_1800191B0 @ 0x1800191B0 (sub_1800191B0.c)
 */

__int64 __fastcall sub_180003AD8(__int64 *a1)
{
  Concurrency::details::UMSFreeThreadProxy *v2; // rax
  struct Concurrency::details::IThreadProxyFactory *v3; // rdx
  void *v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rbx
  Concurrency::details::UMSFreeThreadProxy *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (Concurrency::details::UMSFreeThreadProxy *)operator new(0x88uLL, (const struct std::nothrow_t *)&unk_180026378);
  v9 = v2;
  if ( v2 )
  {
    v6 = Concurrency::details::UMSFreeThreadProxy::UMSFreeThreadProxy(v2, v3, v4, v5);
    v7 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
  else
  {
    sub_1800191B0(&v9);
    return 2147942414LL;
  }
}
