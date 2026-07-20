/*
 * XREFs of SmpRecordCreatedPageFiles @ 0x14000A310
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpBuildFilesStringFromList @ 0x14000A224 (SmpBuildFilesStringFromList.c)
 */

__int64 __fastcall SmpRecordCreatedPageFiles(char a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  SIZE_T v6; // rax
  unsigned int v7; // ebx
  struct _UNICODE_STRING Data; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF

  *(_DWORD *)&v10.Length = 2359330;
  v10.Buffer = L"ExistingPageFiles";
  *(_DWORD *)&ValueName.Length = 1703960;
  ValueName.Buffer = L"TempPageFile";
  v4 = 0;
  result = SmpBuildFilesStringFromList((const UNICODE_STRING *)&SmpPagingFileDescriptorList, &Data);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)a2 != Data.Length
        || (v6 = RtlCompareMemory(*(const void **)(a2 + 8), Data.Buffer, Data.Length), Data.Length != v6) )
      {
        v4 = 1;
      }
    }
    if ( a1 )
    {
      v11 = 1;
      NtSetValueKey(SmpMmKey, &ValueName, 0, 4u, &v11, 4u);
    }
    else
    {
      NtDeleteValueKey(SmpMmKey, &ValueName);
    }
    v7 = NtSetValueKey(SmpMmKey, &v10, 0, 7u, Data.Buffer, Data.Length);
    if ( v4 )
      NtFlushKey(SmpMmKey);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Data.Buffer);
    return v7;
  }
  return result;
}
