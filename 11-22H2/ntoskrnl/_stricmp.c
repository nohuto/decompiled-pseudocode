/*
 * XREFs of _stricmp @ 0x1403D90F0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1405048F0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140504A90 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABE194 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140AC449C (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140AEAD84 (HdlspBugCheckProcessing.c)
 *     CmpSetupConfigurationTree @ 0x140B3AAA4 (CmpSetupConfigurationTree.c)
 *     CmpSearchSectionByName @ 0x140B56A90 (CmpSearchSectionByName.c)
 *     CmpAppendSection @ 0x140B5E7E0 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D909C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
