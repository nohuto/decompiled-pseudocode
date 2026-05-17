/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800026D0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E3270 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000270C (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL);
  return 0LL;
}
