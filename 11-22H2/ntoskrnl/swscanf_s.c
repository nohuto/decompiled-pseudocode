/*
 * XREFs of swscanf_s @ 0x1403DF630
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x14086E070 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C980 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1409626EC (PiDevCfgSplitDriverConfigurationId.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403E20A0 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return swinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
