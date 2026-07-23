/*
 * XREFs of ExAcquireSpinLockShared @ 0x140366580
 * Callers:
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     sub_1402166FC @ 0x1402166FC (sub_1402166FC.c)
 *     sub_14022CB60 @ 0x14022CB60 (sub_14022CB60.c)
 *     sub_14023BE50 @ 0x14023BE50 (sub_14023BE50.c)
 *     sub_14023CD70 @ 0x14023CD70 (sub_14023CD70.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140247FBC @ 0x140247FBC (sub_140247FBC.c)
 *     sub_140250D70 @ 0x140250D70 (sub_140250D70.c)
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_140279474 @ 0x140279474 (sub_140279474.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140287070 @ 0x140287070 (sub_140287070.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EB59C @ 0x1402EB59C (sub_1402EB59C.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F5F14 @ 0x1402F5F14 (sub_1402F5F14.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334364 @ 0x140334364 (sub_140334364.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 *     sub_140363BC0 @ 0x140363BC0 (sub_140363BC0.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 *     sub_140365DD0 @ 0x140365DD0 (sub_140365DD0.c)
 *     sub_140365EB4 @ 0x140365EB4 (sub_140365EB4.c)
 *     sub_1403661D0 @ 0x1403661D0 (sub_1403661D0.c)
 *     sub_140367008 @ 0x140367008 (sub_140367008.c)
 *     sub_140374EA8 @ 0x140374EA8 (sub_140374EA8.c)
 *     sub_1403936D8 @ 0x1403936D8 (sub_1403936D8.c)
 *     sub_140395AE0 @ 0x140395AE0 (sub_140395AE0.c)
 *     sub_1403A4868 @ 0x1403A4868 (sub_1403A4868.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     sub_1403DE3A4 @ 0x1403DE3A4 (sub_1403DE3A4.c)
 *     sub_14045D4C6 @ 0x14045D4C6 (sub_14045D4C6.c)
 *     sub_140533E60 @ 0x140533E60 (sub_140533E60.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 *     sub_140599D58 @ 0x140599D58 (sub_140599D58.c)
 *     sub_14059F4C4 @ 0x14059F4C4 (sub_14059F4C4.c)
 *     sub_1405A7258 @ 0x1405A7258 (sub_1405A7258.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405B04A4 @ 0x1405B04A4 (sub_1405B04A4.c)
 *     sub_1405B11A0 @ 0x1405B11A0 (sub_1405B11A0.c)
 *     sub_1405B63F0 @ 0x1405B63F0 (sub_1405B63F0.c)
 *     sub_1405C33AC @ 0x1405C33AC (sub_1405C33AC.c)
 *     sub_1405D4F54 @ 0x1405D4F54 (sub_1405D4F54.c)
 *     sub_1405D504C @ 0x1405D504C (sub_1405D504C.c)
 *     sub_1405D5124 @ 0x1405D5124 (sub_1405D5124.c)
 *     sub_1405D5234 @ 0x1405D5234 (sub_1405D5234.c)
 *     sub_1405D5E24 @ 0x1405D5E24 (sub_1405D5E24.c)
 *     sub_1405D6478 @ 0x1405D6478 (sub_1405D6478.c)
 *     sub_1405E0B58 @ 0x1405E0B58 (sub_1405E0B58.c)
 *     sub_1405E0FA0 @ 0x1405E0FA0 (sub_1405E0FA0.c)
 *     sub_1405F58AC @ 0x1405F58AC (sub_1405F58AC.c)
 *     sub_1406022B8 @ 0x1406022B8 (sub_1406022B8.c)
 *     sub_14063BC14 @ 0x14063BC14 (sub_14063BC14.c)
 *     sub_14063D44C @ 0x14063D44C (sub_14063D44C.c)
 *     sub_140A6C8B4 @ 0x140A6C8B4 (sub_140A6C8B4.c)
 * Callees:
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // rcx
  signed __int32 v5; // ett
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461B20(SpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v4 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v7 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v7 + 24) - 1;
          *(_DWORD *)(v7 + 24) = v10;
          if ( !v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140366A20(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
