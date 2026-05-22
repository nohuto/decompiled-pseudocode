/*
 * XREFs of ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68
 * Callers:
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90 (-AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434 (-UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetSparse_ExcludedLightsWeak(__int64 a1)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = *(CSparseStorage::AllocatedStorage **)(a1 + 112);
  if ( (*((_DWORD *)v1 + 1) & 0x20000) != 0 )
    return *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v1, 15) + 4);
  else
    return 0LL;
}
