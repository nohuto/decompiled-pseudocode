/*
 * XREFs of ?GetSparse_LightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B98
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetSparse_LightsWeak(__int64 a1)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = *(CSparseStorage::AllocatedStorage **)(a1 + 112);
  if ( (*((_DWORD *)v1 + 1) & 0x80000) != 0 )
    return *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v1, 13) + 4);
  else
    return 0LL;
}
