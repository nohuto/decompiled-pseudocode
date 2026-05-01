/*
 * XREFs of ?IsEmpty@CScrollViewerHost@@UEAA_NXZ @ 0x1804C0A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF590 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CScrollViewerHost::IsEmpty(CScrollViewerHost *this)
{
  char v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
              &v3) < 0 )
    v1 = 1;
  else
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 408LL))(v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v3);
  return v1;
}
