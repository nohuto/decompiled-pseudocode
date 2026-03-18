/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B7564
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C039A610 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C039A7D8 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0004F9C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(DXGADAPTER *this, char a2)
{
  if ( *((struct _KTHREAD **)this + 18) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 8962LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsStopResetLockExclusiveOwner()", 8962LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 8963LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 8963LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    WdLogSingleEntry1(1LL, 8965LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsBddFallbackDriver()", 8965LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 366) )
    {
      WdLogSingleEntry1(1LL, 8977LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayOnlyAdapter()", 8977LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 365), 0LL);
    *((_DWORD *)this + 50) = 3;
  }
}
