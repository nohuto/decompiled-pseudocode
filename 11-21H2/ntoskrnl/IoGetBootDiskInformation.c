/*
 * XREFs of IoGetBootDiskInformation @ 0x140936410
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformation(PBOOTDISK_INFORMATION BootDiskInformation, ULONG Size)
{
  if ( (unsigned int)dword_140C4E560 < 2 )
    return sub_140B4F04C(BootDiskInformation, Size);
  else
    return -1073741431;
}
