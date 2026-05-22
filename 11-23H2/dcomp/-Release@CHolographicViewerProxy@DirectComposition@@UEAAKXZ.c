/*
 * XREFs of ?Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ @ 0x1800E82E0
 * Callers:
 *     ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C (-CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEA.c)
 * Callees:
 *     ??_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z @ 0x1800E7BD0 (--_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::Release(
        DirectComposition::CHolographicViewerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    DirectComposition::CHolographicViewerProxy::`scalar deleting destructor'(this, 1);
  return v1;
}
