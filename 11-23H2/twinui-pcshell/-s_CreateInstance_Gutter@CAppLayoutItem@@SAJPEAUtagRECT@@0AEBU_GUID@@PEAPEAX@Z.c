/*
 * XREFs of ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x18079838C
 * Callers:
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x180796CE0 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x18016CC60 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 *     ?Attach@?$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z @ 0x18016CDE8 (-Attach@-$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Gutter(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rbx
  void *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  v8 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CAppLayoutItem::CAppLayoutItem((__int64)v8, 2, a1, a2);
    Microsoft::WRL::ComPtr<CAppLayoutItem>::Attach(&v12, v9);
    v6 = v12;
  }
  if ( v6 )
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v6)(v6, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a4);
  else
    v10 = -2147024882;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
