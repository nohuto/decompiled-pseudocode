/*
 * XREFs of StorpWheaAddErrorSource @ 0x1C00A9490
 * Callers:
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_1C00921B4 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
