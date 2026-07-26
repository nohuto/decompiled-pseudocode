/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C0137888
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C0136FE4 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0137374 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0030258 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C0137810 (CmRegUtilOpenExistingUcKey.c)
 */

int __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  HANDLE *v3; // r9
  ACCESS_MASK v4; // r10d
  void *v5; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v5, &DestinationString, v4, v3);
  return result;
}
