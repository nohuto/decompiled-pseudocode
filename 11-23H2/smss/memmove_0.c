/*
 * XREFs of memmove_0 @ 0x140014B43
 * Callers:
 *     BasepGetFileNameInformation @ 0x1400125E0 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x1400126FC (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140012818 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x140012C8C (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 *     BaseFindFirstDevice @ 0x140014250 (BaseFindFirstDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
