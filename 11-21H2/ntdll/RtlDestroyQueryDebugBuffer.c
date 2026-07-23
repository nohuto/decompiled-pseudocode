/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800022D0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E4340 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000230C (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
