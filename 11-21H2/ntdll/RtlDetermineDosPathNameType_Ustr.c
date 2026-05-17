/*
 * XREFs of RtlDetermineDosPathNameType_Ustr @ 0x180047984
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180046BD0 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180047620 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18007B7C0 (RtlpDetermineDosPathNameType4.c)
 *     RtlpInitCurrentDir @ 0x18008044C (RtlpInitCurrentDir.c)
 *     RtlpComputeBackupIndex @ 0x1800879D0 (RtlpComputeBackupIndex.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7410 (RtlNtPathNameToDosPathName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDetermineDosPathNameType_Ustr(__int64 a1)
{
  _WORD *v1; // rdx
  __int64 result; // rax
  unsigned int v3; // r8d

  v1 = *(_WORD **)(a1 + 8);
  result = 2LL;
  if ( *(_WORD *)a1 < 2u )
    return 5LL;
  if ( *v1 == 92 || *v1 == 47 )
  {
    v3 = 4;
    if ( *(_WORD *)a1 < 4u || v1[1] != 92 && v1[1] != 47 )
      return v3;
    v3 = 6;
    if ( *(_WORD *)a1 < 6u || v1[2] != 46 && v1[2] != 63 )
      return 1LL;
    if ( *(_WORD *)a1 < 8u )
    {
      if ( *(_WORD *)a1 == 6 )
        return 7LL;
    }
    else if ( v1[3] == 92 || v1[3] == 47 )
    {
      return v3;
    }
    return 1LL;
  }
  if ( *(_WORD *)a1 < 4u || !*v1 || v1[1] != 58 )
    return 5LL;
  if ( *(_WORD *)a1 < 6u || v1[2] != 92 && v1[2] != 47 )
    return 3LL;
  return result;
}
