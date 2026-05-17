/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x1800448E4
 * Callers:
 *     EtwpCreateFile @ 0x180008BCC (EtwpCreateFile.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800676C0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18007E1E0 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18007EDC0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800D73B0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D73E0 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EC19C (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
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
