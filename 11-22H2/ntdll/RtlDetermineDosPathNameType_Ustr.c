/*
 * XREFs of RtlDetermineDosPathNameType_Ustr @ 0x18001D110
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800198C0 (LdrpPreprocessDllName.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CE00 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077860 (RtlpDetermineDosPathNameType4.c)
 *     RtlpInitCurrentDir @ 0x18007B8B4 (RtlpInitCurrentDir.c)
 *     RtlpComputeBackupIndex @ 0x180084018 (RtlpComputeBackupIndex.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7460 (RtlNtPathNameToDosPathName.c)
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
