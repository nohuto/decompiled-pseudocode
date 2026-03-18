/*
 * XREFs of ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C004C418
 * Callers:
 *     DxgkSetGammaRamp @ 0x1C02EAB70 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::SetDeviceGammaRamp(DXGDEVICE *this, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v4; // rsi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  ReferenceCounted *v9; // rcx

  v4 = a2;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 613LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          2,
          -1,
          L"IsDeviceLockExclusiveOwner()",
          613LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v9 = (ReferenceCounted *)*((_QWORD *)this + v4 + 191);
  if ( v9 )
    ReferenceCounted::Release(v9);
  *((_QWORD *)this + v4 + 191) = a3;
}
