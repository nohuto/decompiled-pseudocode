/*
 * XREFs of ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C1490
 * Callers:
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1802360A0 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804C1170 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x180236016 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF590 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
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
