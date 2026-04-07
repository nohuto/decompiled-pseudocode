/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001C100
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000528C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18004742C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800A1AC8 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A2090 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CVisualProxy **this)
{
  unsigned int v2; // eax
  int updated; // esi
  unsigned int v5; // eax

  if ( CAccent::_AnyTransparentBackground((CAccent *)this) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 72) - 3) <= 1 && ((_DWORD)this[11] & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateAcrylicBlurBehind((CAccent *)this);
      if ( updated < 0 )
      {
        v5 = 707;
        goto LABEL_18;
      }
    }
  }
  else
  {
    if ( ((_DWORD)this[11] & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateResources(this);
      if ( updated < 0 )
      {
        v5 = 695;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v5, 0LL);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    if ( ((_DWORD)this[11] & 0x2000) != 0 )
      CAccent::_UpdateTransitionGradient((CAccent *)this);
  }
  v2 = (_DWORD)this[11] & 0xFFFF8FFF;
  *((_DWORD *)this + 22) = v2;
  if ( (v2 & 0x8000) != 0 )
  {
    if ( (*((_DWORD *)this + 73) & 0x210) != 0 )
      CVisualProxy::SetClip(this[2], this[48]);
    *((_DWORD *)this + 22) &= ~0x8000u;
  }
  updated = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( updated < 0 )
  {
    v5 = 721;
    goto LABEL_18;
  }
  return (unsigned int)updated;
}
