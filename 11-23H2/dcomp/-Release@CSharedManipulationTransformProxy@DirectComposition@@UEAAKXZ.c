/*
 * XREFs of ?Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ @ 0x18006A840
 * Callers:
 *     ??1CHwndTarget@DirectComposition@@IEAA@XZ @ 0x18006A3C8 (--1CHwndTarget@DirectComposition@@IEAA@XZ.c)
 *     ?CreateRemoteRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800F0240 (-CreateRemoteRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTarg.c)
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedManipulationTransformProxy::Release(
        DirectComposition::CSharedManipulationTransformProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    DirectComposition::CDevice::RemoveProxy(this);
  return v1;
}
