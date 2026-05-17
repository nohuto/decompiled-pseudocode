/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800783C0
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800F10C8 (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(0, a1, a2, a3, a4) >= 0;
}
