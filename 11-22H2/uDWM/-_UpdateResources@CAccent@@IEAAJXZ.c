/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000528C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000344C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001C100 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180005348 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800053C8 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180006228 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18004742C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // esi
  const struct ACCENT_POLICY *v3; // rdx
  struct CVisual *v5; // r9
  unsigned int v6; // eax

  updated = 0;
  if ( !CAccent::_AnyTransparentBackground((CAccent *)this) )
  {
    if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(this + 36)) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v3, this + 41, 0LL);
      if ( updated < 0 )
      {
        v6 = 649;
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 320) )
    {
      v5 = this[41];
      *((_DWORD *)this + 94) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 38),
                  this + 42,
                  v5);
      if ( updated < 0 )
      {
        v6 = 660;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v6, 0LL);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v6 = 662;
      goto LABEL_11;
    }
  }
  return (unsigned int)updated;
}
