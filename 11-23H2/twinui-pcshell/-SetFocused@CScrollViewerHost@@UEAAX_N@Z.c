/*
 * XREFs of ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x18057B970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18056BF80 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1805757A0 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::SetFocused(CScrollViewerHost *this, char a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
                &v3) >= 0 )
      (*(void (__fastcall **)(CScrollViewerHost *, __int64))(*(_QWORD *)this + 288LL))(this, v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v3);
  }
}
