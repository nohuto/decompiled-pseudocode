/*
 * XREFs of ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180009F8C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180009440 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A06C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000A2DC (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000A320 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A4B0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E4D54 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E4EB4 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CThumbnailVisual::_IsImmersiveIconic(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rdx

  v2 = 0;
  v3 = *((_QWORD *)this + 47);
  if ( v3 && CWindowData::IsImmersiveWindow(*(CWindowData **)(v3 + 24)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x800000) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)this + 48);
      if ( v5 )
        return *(_DWORD *)(v5 + 72) == 3;
    }
  }
  return v2;
}
