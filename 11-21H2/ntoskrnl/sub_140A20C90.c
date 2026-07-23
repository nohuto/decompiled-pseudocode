/*
 * XREFs of sub_140A20C90 @ 0x140A20C90
 * Callers:
 *     sub_140A1EE84 @ 0x140A1EE84 (sub_140A1EE84.c)
 *     sub_140A1F420 @ 0x140A1F420 (sub_140A1F420.c)
 *     sub_140A1FFC0 @ 0x140A1FFC0 (sub_140A1FFC0.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A20C90(PFILE_PATH InputFilePath, ULONG OutputType, _FILE_PATH **a3)
{
  _FILE_PATH *v5; // rdi
  int v7; // ebx
  NTSTATUS v8; // eax
  _FILE_PATH *PoolWithTag; // rax
  unsigned int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG OutputFilePathLength; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)v11 = 0LL;
  v5 = 0LL;
  v7 = sub_140813BA8(0x16u, (__int64)v11);
  if ( v7 >= 0 )
  {
    OutputFilePathLength = 0;
    v8 = ZwTranslateFilePath(InputFilePath, OutputType, 0LL, &OutputFilePathLength);
    v7 = v8;
    if ( v8 == -1073741789 )
    {
      PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, OutputFilePathLength, 0x4B444342u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
        v7 = ZwTranslateFilePath(InputFilePath, OutputType, PoolWithTag, &OutputFilePathLength);
      else
        v7 = -1073741670;
    }
    else if ( v8 >= 0 )
    {
      v7 = -1073741811;
    }
    sub_140813B50(v11);
    if ( v7 < 0 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0x4B444342u);
    }
    else
    {
      *a3 = v5;
    }
  }
  return (unsigned int)v7;
}
