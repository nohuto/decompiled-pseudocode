/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C00889F4
 * Callers:
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // bp
  int v3; // r14d
  void *Pool2; // rax
  void *v5; // rsi
  PVOID v6; // rbx
  char *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( Src )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( dword_1C009FEB0 >= dword_1C009FEB4 )
    {
      if ( dword_1C009FEB4 > 0x23F )
        goto $Done_74;
      v3 = dword_1C009FEB4 + 10;
      Pool2 = (void *)ExAllocatePool2(64LL, 56LL * (dword_1C009FEB4 + 10), 1917089862LL);
      v5 = Pool2;
      if ( !Pool2 )
        goto $Done_74;
      v6 = Src;
      memmove(Pool2, Src, 56LL * dword_1C009FEB4);
      Src = v5;
      dword_1C009FEB4 = v3;
      ExFreePoolWithTag(v6, 0);
    }
    v7 = (char *)Src + 56 * dword_1C009FEB0;
    *(_QWORD *)v7 = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *((_QWORD *)v7 + 1) = *(_QWORD *)&WdfBindInfo->Version.Major;
    *((_DWORD *)v7 + 4) = WdfBindInfo->Version.Build;
    *(_OWORD *)(v7 + 20) = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)(v7 + 36) = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7[51] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = dword_1C009FEB0++;
$Done_74:
    KeReleaseSpinLock(&SpinLock, v2);
  }
}
