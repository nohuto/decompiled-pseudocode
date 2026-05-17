/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180008820 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     EtwpCreateFile @ 0x18005DF5C (EtwpCreateFile.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180078210 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800783C0 (RtlDosPathNameToNtPathName_U.c)
 *     RtlGetImageFileMachines @ 0x180083670 (RtlGetImageFileMachines.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800AF2A0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D6D90 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800ECC7C (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a2);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)v9, 0, a3, 0LL, a4, a5);
  return result;
}
