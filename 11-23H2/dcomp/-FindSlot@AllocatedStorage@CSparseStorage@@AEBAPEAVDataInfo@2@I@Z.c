/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C (-CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?TrackReference@Visual@Composition@UI@Windows@@UEAAXI@Z @ 0x18002E4C0 (-TrackReference@Visual@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?GetSparse_Opacity@Visual@Composition@UI@Windows@@AEBAMXZ @ 0x1800520B0 (-GetSparse_Opacity@Visual@Composition@UI@Windows@@AEBAMXZ.c)
 *     ?put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z @ 0x1800747A0 (-put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z.c)
 *     ?get_Scale@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180077130 (-get_Scale@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z.c)
 *     ?GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector2@Numerics@Foundation@4@XZ @ 0x180088FA0 (-GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector2@Numerics@Foundat.c)
 *     ?GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA?AU_GUID@@XZ @ 0x18008B348 (-GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA-AU_GUID@@XZ.c)
 *     ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68 (-GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionL.c)
 *     ?GetSparse_LightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B98 (-GetSparse_LightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionLight@Com.c)
 *     ?GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector3@Numerics@Foundation@4@XZ @ 0x1800B5C20 (-GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector3@Numerics@Found.c)
 *     ?GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionPropertySet@234@XZ @ 0x180109704 (-GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionP.c)
 *     ?get_RasterizationScaleOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18010CEB0 (-get_RasterizationScaleOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 *     ?get_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18010D3B0 (-get_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundatio.c)
 * Callees:
 *     <none>
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::AllocatedStorage::FindSlot(
        CSparseStorage::AllocatedStorage *this,
        int a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // r9d

  v2 = (unsigned int *)((char *)this + 12);
  v3 = *((_DWORD *)this + 3);
  if ( (HIBYTE(v3) & 0x7F) != a2 )
  {
    do
    {
      v2 = (unsigned int *)((char *)v2 + (v3 & 0xFFFFFF) + 4);
      v3 = *v2;
    }
    while ( (HIBYTE(*v2) & 0x7F) != a2 );
  }
  return (struct CSparseStorage::DataInfo *)v2;
}
