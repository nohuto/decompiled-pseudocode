/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8
 * Callers:
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C0002340 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00039E0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003D20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003EC0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtUnBindCompositionSurface @ 0x1C0004260 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0004600 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1C0004AD0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0004DC0 (NtQueryCompositionSurfaceBinding.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00050A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C00052D0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB90 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0021AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0077640 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0077840 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0077950 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008124C (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  char *v2; // rcx

  v2 = (char *)this + 8;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v2 + 1) )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
