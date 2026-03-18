/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C016FAB0
 * Callers:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C016FBA0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0065CBC (--1AUTO_TGO@@MEAA@XZ.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  struct D3DKMT_GETPATHSMODALITY *v2; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C024B4A8;
  FreePathsModality(this[6]);
  v2 = this[7];
  if ( v2 )
    ObfDereferenceObject(v2);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
