/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x14041C2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(File1MappedAsAnImage);
}
