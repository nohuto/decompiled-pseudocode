/*
 * XREFs of _snwscanf_s @ 0x1403E6720
 * Callers:
 *     SiGetBootDeviceName @ 0x1406BAFD4 (SiGetBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A22790 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403EA014 (_swinput_s.c)
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
