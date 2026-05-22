/*
 * XREFs of ??1CHolographicViewerProxy@DirectComposition@@UEAA@XZ @ 0x1800E7B84
 * Callers:
 *     ??_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z @ 0x1800E7BD0 (--_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CHolographicViewerProxy::~CHolographicViewerProxy(
        DirectComposition::CHolographicViewerProxy *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &DirectComposition::CHolographicViewerProxy::`vftable';
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 3);
}
