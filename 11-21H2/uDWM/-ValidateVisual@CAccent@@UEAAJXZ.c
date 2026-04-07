/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180014E6C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180019AC0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004C7B0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180098D74 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v1; // edx
  int v3; // eax
  int updated; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  v1 = *((_DWORD *)this + 72);
  if ( (unsigned int)(v1 - 2) <= 1 )
    goto LABEL_4;
  if ( v1 == 4 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL) )
      goto LABEL_4;
  }
  else if ( v1 == 5 )
  {
LABEL_4:
    v3 = *((_DWORD *)this + 22);
    if ( v1 == 4 )
    {
      if ( (v3 & 0x1000) != 0 && *((_QWORD *)this + 44) )
      {
        updated = CAccent::_UpdateAcrylicBlurBehind(this);
        if ( updated < 0 )
        {
          v5 = 820;
LABEL_33:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v5);
          CAccent::_CleanupNonStaticsResources(this);
          return (unsigned int)updated;
        }
        v3 = *((_DWORD *)this + 22);
      }
      v6 = v3 & 0xFFFFCFFF;
      *((_DWORD *)this + 22) = v6;
      goto LABEL_27;
    }
    if ( (v3 & 0x10000) != 0 && v1 == 3 )
    {
      if ( *((_QWORD *)this + 43) )
        CAccent::_UpdateAccentBlurBehind(this);
    }
    else if ( v1 == 5 )
    {
      if ( *((_QWORD *)this + 47) )
      {
        if ( (v3 & 0x1000) != 0 )
        {
          updated = CAccent::UpdateAcrylicBackgroundBrush(this);
          if ( updated < 0 )
          {
            v5 = 833;
            goto LABEL_33;
          }
        }
      }
    }
    *((_DWORD *)this + 22) &= 0xFFFFCFFF;
LABEL_26:
    v6 = *((_DWORD *)this + 22);
    goto LABEL_27;
  }
  v6 = *((_DWORD *)this + 22);
  if ( (v6 & 0x1000) != 0 )
  {
    updated = CAccent::_UpdateResources(this);
    if ( updated < 0 )
    {
      v5 = 802;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 72) == 5 )
    {
      updated = CAccent::UpdateAcrylicBackgroundBrush(this);
      if ( updated < 0 )
      {
        v5 = 805;
        goto LABEL_33;
      }
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
    v6 = *((_DWORD *)this + 22);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    CAccent::_UpdateTransitionGradient(this);
    *((_DWORD *)this + 22) &= ~0x2000u;
    goto LABEL_26;
  }
LABEL_27:
  v7 = v6 & 0xFFFEBFFF;
  *((_DWORD *)this + 22) = v7;
  if ( (v7 & 0x8000) != 0 )
  {
    if ( (*((_DWORD *)this + 73) & 0x210) != 0 )
    {
      CVisualProxy::SetClip(*((CVisualProxy **)this + 2), *((struct CBaseGeometryProxy **)this + 53));
      v7 = *((_DWORD *)this + 22);
    }
    *((_DWORD *)this + 22) = v7 & 0xFFFF7FFF;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v5 = 849;
    goto LABEL_33;
  }
  return (unsigned int)updated;
}
