/*
 * XREFs of IoGetBootDiskInformationLite @ 0x14082D040
 * Callers:
 *     <none>
 * Callees:
 *     NaptrDnsRecordConvert_3 @ 0x140B0BC60 (NaptrDnsRecordConvert_3.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)dword_140C4E560 >= 2 )
    return -1073741431;
  else
    return NaptrDnsRecordConvert_3(BootDiskInformation);
}
