/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x18007C158
 * Callers:
 *     RtlpCreateNewDirectoryReference @ 0x18007BF90 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800DCA20 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
