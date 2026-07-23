/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x1409C0380
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
  int v3; // eax
  NTSTATUS result; // eax

  if ( InfoClass > FileIdExtdDirectoryInformation )
  {
    if ( InfoClass != FileIdExtdBothDirectoryInformation
      && InfoClass != FileStatInformation
      && InfoClass != FileStatLxInformation
      && (unsigned int)(InfoClass - 78) >= 2 )
    {
      goto LABEL_13;
    }
LABEL_16:
    v3 = *((_DWORD *)InfoBuffer + 14);
    goto LABEL_17;
  }
  switch ( InfoClass )
  {
    case FileIdExtdDirectoryInformation:
      goto LABEL_16;
    case FileFullDirectoryInformation:
    case FileBothDirectoryInformation:
      goto LABEL_7;
    case FileAttributeTagInformation:
      v3 = *(_DWORD *)InfoBuffer;
      goto LABEL_17;
  }
  if ( (unsigned int)(InfoClass - 37) <= 1 )
  {
LABEL_7:
    v3 = *((_DWORD *)InfoBuffer + 14);
LABEL_17:
    *IsPartialPlaceholder = (v3 & 0x440000) != 0;
    return 0;
  }
LABEL_13:
  result = -1073741637;
  if ( InfoClass >= (FileRenameInformationExBypassAccessCheck|FileModeInformation) )
    return -1073741821;
  return result;
}
