/*
 * XREFs of __crtGetLocaleInfoEx_Stub @ 0x18000D2E8
 * Callers:
 *     _Getdateorder @ 0x180021488 (_Getdateorder.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall _crtGetLocaleInfoEx_Stub(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  return GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
