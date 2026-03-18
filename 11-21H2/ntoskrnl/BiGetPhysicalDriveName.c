/*
 * XREFs of BiGetPhysicalDriveName @ 0x140A1DCEC
 * Callers:
 *     BiGetDriveLayoutBlock @ 0x1408031CC (BiGetDriveLayoutBlock.c)
 *     BiCreatePartitionDevice @ 0x14080397C (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140A1DE3C (BiGetVolumeDiskExtentsInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetPhysicalDriveName(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS v3; // ebx
  int VolumeDiskExtentsInformation; // eax
  unsigned int *v5; // rdi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  P = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v3 >= 0 )
  {
    VolumeDiskExtentsInformation = BiGetVolumeDiskExtentsInformation(FileHandle);
    v5 = (unsigned int *)P;
    v3 = VolumeDiskExtentsInformation;
    if ( VolumeDiskExtentsInformation >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3EuLL, 0x4B444342u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          v3 = RtlStringCbPrintfW(PoolWithTag, 0x3EuLL, L"\\??\\PhysicalDrive%lu", v5[2]);
          if ( v3 < 0 )
            ExFreePoolWithTag(v7, 0x4B444342u);
          else
            *a2 = v7;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741637;
      }
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
