/*
 * XREFs of ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180104BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180004FE0 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::PreventOverlay(CGlobalCompositionSurfaceInfo *this, char a2)
{
  struct CComposition *v4; // rax

  if ( a2 && !*((_BYTE *)this + 279) && *((_BYTE *)this + 283) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
  if ( a2 != *((_BYTE *)this + 279) )
  {
    v4 = g_pComposition;
    *((_BYTE *)this + 279) = a2;
    *((_BYTE *)v4 + 1275) = 1;
  }
}
