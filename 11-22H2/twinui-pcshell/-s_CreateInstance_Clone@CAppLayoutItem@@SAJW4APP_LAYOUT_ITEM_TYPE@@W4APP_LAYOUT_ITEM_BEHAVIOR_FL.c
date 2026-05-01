/*
 * XREFs of ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x18016C890
 * Callers:
 *     ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x18016C220 (-Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4@Z @ 0x18016CB78 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicati.c)
 *     ?Attach@?$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z @ 0x18016CDE8 (-Attach@-$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Clone(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // rdi
  _QWORD *v11; // rbx
  void *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi

  v8 = a8;
  v11 = 0LL;
  a8 = 0LL;
  *v8 = 0LL;
  v14 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    v15 = CAppLayoutItem::CAppLayoutItem(v14, a1, a2, a3, a4, a5, a6);
    Microsoft::WRL::ComPtr<CAppLayoutItem>::Attach(&a8, v15);
    v11 = a8;
  }
  if ( v11 )
    v16 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v11)(
            v11,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v8);
  else
    v16 = -2147024882;
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return v16;
}
