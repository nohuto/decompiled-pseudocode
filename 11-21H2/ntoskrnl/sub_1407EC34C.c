/*
 * XREFs of sub_1407EC34C @ 0x1407EC34C
 * Callers:
 *     sub_14075E908 @ 0x14075E908 (sub_14075E908.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14041BC60 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 */

__int64 __fastcall sub_1407EC34C(PCWSTR SourceString, char a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  int v8; // eax
  const WCHAR *v9; // rdx
  HANDLE SectionHandle; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING v12; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+2Fh] BYREF
  PVOID BaseAddress; // [rsp+108h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ViewSize = 0LL;
  FileHandle = 0LL;
  *(_OWORD *)a3 = 0LL;
  SectionHandle = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  BaseAddress = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v5 < 0 )
    {
      if ( (dword_140D3CA24 & 0x20) == 0 )
      {
        v8 = dword_140D3CA24 | 0x20;
        v9 = L"DATABASE SECTION FAILED";
        goto LABEL_17;
      }
    }
    else
    {
      v5 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewShare,
             0,
             2u);
      if ( v5 < 0 )
      {
        if ( (dword_140D3CA24 & 0x40) == 0 )
        {
          v8 = dword_140D3CA24 | 0x40;
          v9 = L"DATABASE MAPPING FAILED";
          goto LABEL_17;
        }
      }
      else
      {
        v7 = sub_1407ECFCC(BaseAddress, (unsigned int)ViewSize);
        if ( v7 )
        {
          *(_QWORD *)a3 = v7;
          *(_QWORD *)(a3 + 24) = FileHandle;
          *(_QWORD *)(a3 + 16) = SectionHandle;
          *(_QWORD *)(a3 + 8) = BaseAddress;
          BaseAddress = 0LL;
          SectionHandle = 0LL;
          FileHandle = 0LL;
          goto LABEL_4;
        }
        v5 = -1073741823;
        if ( (dword_140D3CA24 & 0x80u) == 0 )
        {
          v8 = dword_140D3CA24 | 0x80;
          v9 = L"INIT DATABASE FAILED";
          goto LABEL_17;
        }
      }
    }
  }
  else if ( !byte_140C4E508 && !a2 && (dword_140D3CA24 & 0x10) == 0 )
  {
    v8 = dword_140D3CA24 | 0x10;
    v9 = L"DATABASE OPEN FAILED";
LABEL_17:
    dword_140D3CA24 = v8;
    v12 = 0LL;
    RtlInitUnicodeString(&v12, v9);
    sub_140947068(&v12, 0LL, 3221226349LL, 0LL, 0);
  }
LABEL_4:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
