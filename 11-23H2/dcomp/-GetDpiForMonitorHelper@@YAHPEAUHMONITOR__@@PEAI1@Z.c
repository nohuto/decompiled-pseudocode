/*
 * XREFs of ?GetDpiForMonitorHelper@@YAHPEAUHMONITOR__@@PEAI1@Z @ 0x180100268
 * Callers:
 *     ?get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18011BAF0 (-get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiForMonitorHelper(HMONITOR a1, unsigned int *a2, unsigned int *a3)
{
  if ( (unsigned int)GetDpiForMonitorInternal(a1, 2LL, a2, a3) )
    return 1LL;
  else
    return GetDpiForMonitorInternal(a1, 0LL, a2, a3);
}
