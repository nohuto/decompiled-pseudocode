/*
 * XREFs of IoCheckQuerySetFileInformation @ 0x1407F9CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetFileInformation(
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  ULONG v4; // ecx

  if ( (unsigned int)FileInformationClass >= (FileMaximumInformation|FileDirectoryInformation) )
    return -1073741821;
  v3 = qword_140A39470;
  if ( !SetOperation )
    v3 = qword_140A394C0;
  v4 = *((char *)v3 + (int)FileInformationClass);
  if ( (_BYTE)v4 )
    return Length < v4 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
