/*
 * XREFs of _stricmp @ 0x1403D9750
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1405047E0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140504980 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABD194 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140AC34CC (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140AE9D84 (HdlspBugCheckProcessing.c)
 *     CmpSetupConfigurationTree @ 0x140B373AC (CmpSetupConfigurationTree.c)
 *     CmpSearchSectionByName @ 0x140B57130 (CmpSearchSectionByName.c)
 *     CmpAppendSection @ 0x140B5B7A0 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D96FC (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
