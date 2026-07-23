/*
 * XREFs of _strnicmp @ 0x1403D99E0
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140A227AC (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B57018 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140B571D4 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140B5B7A0 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140B72390 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1403D997C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
