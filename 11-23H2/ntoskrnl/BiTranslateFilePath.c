/*
 * XREFs of BiTranslateFilePath @ 0x1408062A8
 * Callers:
 *     BiGetDeviceFromEfiPath @ 0x140806124 (BiGetDeviceFromEfiPath.c)
 *     BiCreateBootEntry @ 0x140A5DCDC (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x140A5E27C (BiCreateMergedBootEntry.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14041EB70 (ZwTranslateFilePath.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiTranslateFilePath(PFILE_PATH InputFilePath, ULONG OutputType, _FILE_PATH **a3)
{
  _FILE_PATH *v5; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  _FILE_PATH *Pool2; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG OutputFilePathLength; // [rsp+68h] [rbp+20h] BYREF

  v11[0] = 0LL;
  v5 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v11);
  if ( v7 >= 0 )
  {
    OutputFilePathLength = 0;
    v8 = ZwTranslateFilePath(InputFilePath, OutputType, 0LL, &OutputFilePathLength);
    v7 = v8;
    if ( v8 == -1073741789 )
    {
      Pool2 = (_FILE_PATH *)ExAllocatePool2(258LL, OutputFilePathLength, 1262764866LL);
      v5 = Pool2;
      if ( Pool2 )
        v7 = ZwTranslateFilePath(InputFilePath, OutputType, Pool2, &OutputFilePathLength);
      else
        v7 = -1073741670;
    }
    else if ( v8 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v11);
    if ( v7 >= 0 )
    {
      *a3 = v5;
    }
    else if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x4B444342u);
    }
  }
  return (unsigned int)v7;
}
