/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180014E6C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180047880 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180047BA8 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180047C2C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // edi
  const struct ACCENT_POLICY *v3; // rcx
  const struct ACCENT_POLICY *v4; // rcx
  struct CVisual *v6; // r9
  unsigned int v7; // eax

  updated = 0;
  v3 = (const struct ACCENT_POLICY *)(this + 36);
  if ( (unsigned int)(*(_DWORD *)v3 - 2) > 3
    || !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL) )
  {
    if ( CAccent::s_IsPolicyActive(v3) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v4, this + 41, 0LL);
      if ( updated < 0 )
      {
        v7 = 756;
        goto LABEL_12;
      }
    }
    if ( *((_BYTE *)this + 320) )
    {
      v6 = this[41];
      *((_DWORD *)this + 100) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 38),
                  this + 42,
                  v6);
      if ( updated < 0 )
      {
        v7 = 767;
LABEL_12:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v7);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v7 = 769;
      goto LABEL_12;
    }
  }
  return (unsigned int)updated;
}
