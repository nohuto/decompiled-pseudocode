/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C0143A64
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C014300C (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002E928 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C0143750 (CmRegUtilUcValueGetDword.c)
 */

int __fastcall CmRegUtilWstrValueGetDword(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  __int64 v3; // r8
  _DWORD *v4; // r9
  void *v5; // r10
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v5, &DestinationString, v3, v4);
  return result;
}
