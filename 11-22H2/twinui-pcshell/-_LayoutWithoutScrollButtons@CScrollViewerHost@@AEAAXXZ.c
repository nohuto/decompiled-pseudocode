/*
 * XREFs of ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x18057BE50
 * Callers:
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1802E4800 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x18057BB30 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1802E4776 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18056BF80 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::_LayoutWithoutScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64, __int64); // rbx
  __int64 IdealChildLocation; // rax
  __int64 v5; // r11
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
    &v6);
  v3 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL);
  IdealChildLocation = CScrollViewerHost::_GetIdealChildLocation(this, v7);
  v3(v5, IdealChildLocation);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
}
