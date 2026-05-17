/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x18010B4A8
 * Callers:
 *     RtlpGetCustomCultureData @ 0x18010AE04 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     RtlStringCchCatW @ 0x1800FB6E8 (RtlStringCchCatW.c)
 *     RtlpGetFileSize @ 0x18010AF98 (RtlpGetFileSize.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  WCHAR *v5; // rdx
  __int64 v6; // r8
  WCHAR v7; // ax
  WCHAR *v8; // rax
  __int64 v9; // rdx
  WCHAR *v10; // rax
  __int64 v11; // r8
  WCHAR *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rdx
  WCHAR v16; // r8
  WCHAR *v17; // rax
  int Section; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v21[3]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = SourceString;
  v6 = 256LL;
  do
  {
    if ( v6 == -2147483390 )
      break;
    v7 = *(WCHAR *)((char *)v5 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = v5 - 1;
  if ( v6 )
    v8 = v5;
  *v8 = 0;
  if ( !v6 || (int)RtlStringCchCatW(SourceString, 256LL, a1) < 0 )
    return 3221225473LL;
  v9 = 256LL;
  v10 = SourceString;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = (256 - v9) & -(__int64)(v9 != 0);
  if ( !v9 )
    return 3221225473LL;
  v12 = &SourceString[v11];
  v13 = 256 - v11;
  if ( 256 != v11 )
  {
    v14 = 2147483646LL;
    v15 = (char *)((char *)L".nlp" - (char *)v12);
    do
    {
      if ( !v14 )
        break;
      v16 = *(WCHAR *)((char *)v12 + (_QWORD)v15);
      if ( !v16 )
        break;
      *v12 = v16;
      --v14;
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v17 = v12 - 1;
  if ( v13 )
    v17 = v12;
  *v17 = 0;
  if ( !v13 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( Section >= 0 )
  {
    if ( (int)RtlpGetFileSize((__int64)FileHandle, v21) < 0 || HIDWORD(v21[0]) )
    {
      Section = -1073741823;
    }
    else
    {
      *a3 = LODWORD(v21[0]);
      Section = NtCreateSection();
      if ( Section >= 0 )
      {
        *a2 = 0LL;
        v21[2] = 0LL;
        Section = ZwMapViewOfSection();
        NtClose(v21[1]);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)Section;
}
