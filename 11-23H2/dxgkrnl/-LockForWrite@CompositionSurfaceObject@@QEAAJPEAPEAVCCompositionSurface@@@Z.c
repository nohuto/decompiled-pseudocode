/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000F0A8
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000E650 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000ED80 (NtBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A94C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007ADA0 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C007B8A0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C007B9B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C007BB50 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C007BCC0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C007BFA0 (NtSetCompositionSurfaceStatistics.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00885AC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(
        CompositionSurfaceObject *this,
        struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
    v4 = 0;
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
