/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x18004FAA4
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x18004F9CC (LdrpGetNtPathFromDosPath.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800804B8 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800DC8F0 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        _QWORD *a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
