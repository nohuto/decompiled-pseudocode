/*
 * XREFs of _snwscanf_s @ 0x1403DEE00
 * Callers:
 *     SiGetBootDeviceName @ 0x1407BFB04 (SiGetBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A60594 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403E2700 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
