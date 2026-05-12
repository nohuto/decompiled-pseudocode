/*
 * XREFs of StorpWheaAddErrorSource @ 0x1C008ED88
 * Callers:
 *     DllInitialize @ 0x1C0056DE0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_1C0079144 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
