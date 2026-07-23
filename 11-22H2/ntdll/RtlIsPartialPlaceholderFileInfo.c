/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x18010C070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileInfo(
        PVOID InfoBuffer,
        FILE_INFORMATION_CLASS InfoClass,
        PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax

  switch ( InfoClass )
  {
    case FileFullDirectoryInformation:
    case FileBothDirectoryInformation:
      goto LABEL_13;
    case FileAttributeTagInformation:
LABEL_14:
      *IsPartialPlaceholder = (*(_DWORD *)InfoBuffer & 0x440000) != 0;
      return 0;
    case FileIdBothDirectoryInformation:
    case FileIdFullDirectoryInformation:
    case FileIdExtdDirectoryInformation:
    case FileIdExtdBothDirectoryInformation:
    case FileStatInformation:
    case FileStatLxInformation:
LABEL_13:
      InfoBuffer = (char *)InfoBuffer + 56;
      goto LABEL_14;
  }
  result = -1073741637;
  if ( InfoClass >= FileMaximumInformation )
    return -1073741821;
  return result;
}
