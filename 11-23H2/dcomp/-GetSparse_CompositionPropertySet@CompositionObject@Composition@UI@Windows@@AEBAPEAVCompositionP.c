/*
 * XREFs of ?GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionPropertySet@234@XZ @ 0x180109704
 * Callers:
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120 (-Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

struct Windows::UI::Composition::CompositionPropertySet *__fastcall Windows::UI::Composition::CompositionObject::GetSparse_CompositionPropertySet(
        Windows::UI::Composition::CompositionObject *this)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 14);
  if ( (*((_DWORD *)v1 + 1) & 0x10000000) != 0 )
    return *(struct Windows::UI::Composition::CompositionPropertySet **)((char *)CSparseStorage::AllocatedStorage::FindSlot(
                                                                                   v1,
                                                                                   4)
                                                                       + 4);
  else
    return 0LL;
}
