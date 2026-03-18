/*
 * XREFs of ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ @ 0x180104C10
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z @ 0x18008FD20 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::RecentlyComposed(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  struct CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  return (unsigned __int64)CurrentFrameId - *(_QWORD *)(v2 + 176) <= 0xF;
}
