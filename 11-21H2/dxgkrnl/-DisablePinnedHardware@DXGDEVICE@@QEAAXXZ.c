/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01EFC88
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01EFC0C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01EFD14 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01EFD70 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  struct DXGALLOCATION *v2; // rbx
  _BYTE v3[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1673LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1673LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, (struct _KTHREAD **)this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  v2 = (struct DXGALLOCATION *)*((_QWORD *)this + 6);
  v5 = 2;
  while ( v2 )
  {
    DXGDEVICE::DisablePinnedAllocation(this, v2);
    v2 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
