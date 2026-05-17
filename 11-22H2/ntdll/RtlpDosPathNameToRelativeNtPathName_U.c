/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800083B0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     EtwpCreateFile @ 0x180060DEC (EtwpCreateFile.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180077BA0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180077D50 (RtlDosPathNameToNtPathName_U.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800AD1D0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D7430 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EB94C (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
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
