/*
 * XREFs of SiBootEntryGetNtFilePath @ 0x140A5F924
 * Callers:
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14041E120 (ZwTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SiBootEntryGetNtFilePath(__int64 a1, _FILE_PATH **a2)
{
  __int64 v2; // rax
  _FILE_PATH *v3; // rdi
  NTSTATUS v5; // ebx
  _FILE_PATH *v6; // rsi
  _FILE_PATH *Pool2; // rax
  ULONG OutputFilePathLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 20);
  v3 = 0LL;
  if ( (_DWORD)v2 )
  {
    OutputFilePathLength = 0;
    v6 = (_FILE_PATH *)(a1 + v2);
    v5 = ZwTranslateFilePath((PFILE_PATH)(a1 + v2), 3u, 0LL, &OutputFilePathLength);
    if ( v5 == -1073741789 )
    {
      Pool2 = (_FILE_PATH *)ExAllocatePool2(256LL, OutputFilePathLength, 1263556947LL);
      v3 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v5 = ZwTranslateFilePath(v6, 3u, Pool2, &OutputFilePathLength);
    }
    if ( v5 < 0 )
    {
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
    else
    {
      *a2 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v5;
}
