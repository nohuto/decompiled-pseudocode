/*
 * XREFs of SmpCreateWorkingSetSwapPagingFile @ 0x14000A930
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     SmpParseCommandLine @ 0x140005150 (SmpParseCommandLine.c)
 *     SmpUpdatePagingFileSizes @ 0x140007C20 (SmpUpdatePagingFileSizes.c)
 *     SmpParseSwapOrPageFileArguments @ 0x14000A5C0 (SmpParseSwapOrPageFileArguments.c)
 *     SmpTrimPagingFileExtents @ 0x14000A7D0 (SmpTrimPagingFileExtents.c)
 *     SmpCheckHybridPriority @ 0x14000AD48 (SmpCheckHybridPriority.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpGetVolumeDescriptorForPath @ 0x140017130 (SmpGetVolumeDescriptorForPath.c)
 */

__int64 __fastcall SmpCreateWorkingSetSwapPagingFile(__int64 *a1)
{
  int VolumeDescriptorForPath; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  ULONG v9; // ebx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  union _LARGE_INTEGER v12; // [rsp+38h] [rbp-C8h] BYREF
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v14; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER v16; // [rsp+50h] [rbp-B0h] BYREF
  void *FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  ULONG v20; // [rsp+74h] [rbp-8Ch] BYREF
  union _LARGE_INTEGER MaxiumSize; // [rsp+78h] [rbp-88h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v24; // [rsp+98h] [rbp-68h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+10h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v31[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch] BYREF
  wchar_t pszDest[264]; // [rsp+340h] [rbp+240h] BYREF

  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SwapfileControl";
  *(_DWORD *)&v24.Length = 1179664;
  v24.Buffer = L"SwapFile";
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !SmpClientSku )
  {
    VolumeDescriptorForPath = -1073741637;
    goto LABEL_38;
  }
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 4
    && KeyValueInformation[1] == 4
    && !KeyValueInformation[2] )
  {
LABEL_7:
    VolumeDescriptorForPath = -1073741710;
    goto LABEL_38;
  }
  if ( NtQueryValueKey(SmpMmKey, &v24, KeyValuePartialInformation, v31, 0x210u, &v20) < 0 || v32 > 0x204 )
  {
    if ( !SmpMaxSwapFileSize )
      goto LABEL_7;
    if ( !SmpOsVolumeDescriptor )
    {
      VolumeDescriptorForPath = -1073741275;
      goto LABEL_38;
    }
    VolumeDescriptorForPath = RtlStringCbPrintfW(
                                pszDest,
                                0x208uLL,
                                L"\\??\\%c:\\%s",
                                *(unsigned __int16 *)(SmpOsVolumeDescriptor + 28),
                                L"swapfile.sys");
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_38;
    RtlInitUnicodeString(&FileName, pszDest);
    v3 = SmpOsVolumeDescriptor;
    v4 = SmpMaxSwapFileSize;
    v5 = (-(__int64)((*(_DWORD *)(SmpOsVolumeDescriptor + 16) & 0x20) != 0) & 0xFFFFFFFFF1000000uLL) + 0x10000000;
    v12.QuadPart = v5;
    v6 = v5;
    v7 = v5;
    if ( SmpMaxSwapFileSize == -1 )
    {
      v4 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
      v8 = v4;
    }
    else
    {
      v8 = SmpMaxSwapFileSize;
      if ( v5 >= SmpMaxSwapFileSize )
      {
        v5 = SmpMaxSwapFileSize;
        v12.QuadPart = SmpMaxSwapFileSize;
        v6 = SmpMaxSwapFileSize;
        v7 = SmpMaxSwapFileSize;
      }
    }
    if ( v8 >= *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL )
    {
      v4 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
      v8 = v4;
      v6 = v7;
    }
    if ( v8 <= v6 )
      v4 = v5;
    v16.QuadPart = v4;
  }
  else
  {
    LOWORD(v25) = v32;
    WORD1(v25) = v32;
    *((_QWORD *)&v25 + 1) = &v33;
    VolumeDescriptorForPath = SmpParseCommandLine(&v25, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_38;
    FileName = DestinationString;
    VolumeDescriptorForPath = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v14);
    RtlFreeUnicodeString(&UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_38;
    if ( !Value || !v14 )
      goto LABEL_7;
    v12.QuadPart = (unsigned __int64)Value << 20;
    v16.QuadPart = (unsigned __int64)v14 << 20;
    VolumeDescriptorForPath = SmpGetVolumeDescriptorForPath(&FileName, &v15);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_38;
    v3 = v15;
  }
  SmpUpdatePagingFileSizes((__int64 *)&v12, (unsigned __int64 *)&v16.QuadPart);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &FileName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
  {
    SmpTrimPagingFileExtents(FileHandle, (__int64)&FileName);
    NtClose(FileHandle);
  }
  v9 = 0x80000000;
  if ( (*(_BYTE *)(v3 + 16) & 8) != 0
    && (int)SmpCheckHybridPriority(*(unsigned int *)(v3 + 20), &v11, &v15) >= 0
    && (_DWORD)v15
    && (v11 & 0xFFFFFFF0) == 0 )
  {
    v9 = (v11 | 0xFFFFFFE0) << 26;
  }
  InitialSize = v12;
  MaxiumSize = v16;
  VolumeDescriptorForPath = NtCreatePagingFile(&FileName, &InitialSize, &MaxiumSize, v9);
  if ( VolumeDescriptorForPath >= 0 )
  {
    SmpWsSwapPagefileCreated = 1;
    *a1 = v3;
  }
LABEL_38:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VolumeDescriptorForPath;
}
