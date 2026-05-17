/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x18007BAE8
 * Callers:
 *     RtlpCreateNewDirectoryReference @ 0x18007B920 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800DD070 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        __m128i *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 **a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
