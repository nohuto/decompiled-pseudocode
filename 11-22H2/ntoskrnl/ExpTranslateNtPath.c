/*
 * XREFs of ExpTranslateNtPath @ 0x1409FE50C
 * Callers:
 *     NtTranslateFilePath @ 0x14083FEC0 (NtTranslateFilePath.c)
 *     ExpConvertArcName @ 0x1409FBB48 (ExpConvertArcName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage @ 0x140412120 (Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage.c)
 *     ZwDeviceIoControlFile @ 0x14041A780 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenFile @ 0x14041AD00 (ZwOpenFile.c)
 *     memset @ 0x140435400 (memset.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     ExpTranslateSymbolicLink @ 0x140840638 (ExpTranslateSymbolicLink.c)
 *     ExpCreateOutputARC @ 0x1409FBF50 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x1409FC048 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC218 (ExpCreateOutputSIGNATURE.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

int __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // esi
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // r14
  int result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v17; // ebx
  ULONG OutputBufferLength; // esi
  _DWORD *i; // rax
  NTSTATUS v20; // r15d
  _DWORD *v21; // rbx
  GUID *v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v26; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 OutputBuffer[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v32; // [rsp+1A0h] [rbp+A0h] BYREF
  int v33; // [rsp+1A8h] [rbp+A8h]

  v33 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v26 = 0LL;
  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, 0x8CuLL);
  v32 = 0;
  v8 = (const WCHAR *)(a1 + 12);
  v9 = 1;
  v28 = 0LL;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  v13 = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
    if ( v17 >= 0 )
    {
      if ( LODWORD(OutputBuffer[0]) )
      {
        if ( LODWORD(OutputBuffer[0]) != 1 )
        {
          v17 = -1073741804;
          goto LABEL_24;
        }
      }
      else
      {
        OutputBufferLength = 2352;
        for ( i = (_DWORD *)ExAllocatePool2(64LL, 2352LL, 1920364101LL);
              ;
              i = (_DWORD *)ExAllocatePool2(64LL, OutputBufferLength, 1920364101LL) )
        {
          v21 = i;
          if ( !i )
          {
            ZwClose(FileHandle);
            return -1073741670;
          }
          v20 = ZwDeviceIoControlFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x70050u,
                  0LL,
                  0,
                  i,
                  OutputBufferLength);
          if ( v20 >= 0 )
            break;
          ExFreePoolWithTag(v21, 0);
          if ( v20 != -1073741789 )
          {
            v17 = v20;
            goto LABEL_24;
          }
          OutputBufferLength *= 2;
        }
        v32 = v21[2];
        ExFreePoolWithTag(v21, 0);
        v5 = v33;
      }
      ZwClose(FileHandle);
      if ( LODWORD(OutputBuffer[0]) == 1 )
      {
        v22 = (GUID *)&OutputBuffer[6];
      }
      else
      {
        v22 = (GUID *)&v32;
        v9 = 0;
      }
      if ( v5 != 4 )
        return ExpCreateOutputSIGNATURE(
                 (__int64)a3,
                 a4,
                 v22,
                 (unsigned int *)&OutputBuffer[3],
                 &OutputBuffer[1],
                 &OutputBuffer[2],
                 v13,
                 v9);
      if ( (unsigned int)Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage() )
      {
        if ( v9 )
        {
          v28 = (unsigned __int64)v22;
          if ( (int)BcdEnumerateDisks(v23, (__int64)&v28) >= 0 )
          {
            v24 = OutputBuffer[3];
            if ( BYTE12(v28) )
              v24 = DWORD2(v28);
            LODWORD(OutputBuffer[3]) = v24;
          }
        }
      }
      return ExpCreateOutputEFI(a3, a4, v22, (int *)&OutputBuffer[3], &OutputBuffer[1], &OutputBuffer[2], v13, v9);
    }
LABEL_24:
    ZwClose(FileHandle);
    return v17;
  }
  result = ExpTranslateSymbolicLink(v8, &v26);
  if ( result >= 0 )
  {
    Buffer = v26.Buffer;
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    *(_DWORD *)&v26.Length = *(_DWORD *)&DestinationString.Length;
    v26.Buffer = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(a3, a4, (__int64)&v26, v13);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
