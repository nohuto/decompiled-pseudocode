/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DB310
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B41A0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021B5B0 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0387348 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // rdi

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v6 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
    if ( Current )
    {
      DXGADAPTER::ReleaseDdiSync(0LL);
      DXGADAPTER::ReleaseCoreSync(0LL, 1);
      DXGPROCESS::ReleaseDeviceLockForAllDevices((struct _KTHREAD **)Current, 0LL);
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DxgAdapterFromChild);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DpiGetDxgAdapterFromChild failed in DxgkCaptureReleaseSynchronization, returning 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
}
