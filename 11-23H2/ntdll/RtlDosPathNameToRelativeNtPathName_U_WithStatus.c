/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001BB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  unsigned __int64 v4; // rax
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v6[1] = DosFileName;
  v6[0] = 0LL;
  if ( !DosFileName )
    return RtlpDosPathNameToRelativeNtPathName(
             2,
             (unsigned int)v6,
             0,
             (_DWORD)NtFileName,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  v4 = -1LL;
  do
    ++v4;
  while ( DosFileName[v4] );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v6[0]) = 2 * v4;
    WORD1(v6[0]) = 2 * v4 + 2;
    return RtlpDosPathNameToRelativeNtPathName(
             2,
             (unsigned int)v6,
             0,
             (_DWORD)NtFileName,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  }
  return -1073741562;
}
