/*
 * XREFs of MiOpenHotPatchFile @ 0x140A3A600
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatch @ 0x140A38210 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A385A8 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     RtlFindHotPatchBase @ 0x140A7674C (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x140A7677C (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rdx
  int SystemSection; // ebx
  __int64 v11; // r9
  int v12; // r14d
  int v13; // ebx
  int v14; // esi
  int v15; // eax
  int SessionId; // ecx
  __int64 *v17; // rax
  ULONG64 v18; // rsi
  unsigned __int16 Machine; // ax
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  int v23; // [rsp+40h] [rbp-138h]
  int v24; // [rsp+48h] [rbp-130h]
  PVOID Object; // [rsp+78h] [rbp-100h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-F8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+90h] [rbp-E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-E0h] BYREF
  HANDLE *v30; // [rsp+C8h] [rbp-B0h]
  PVOID *v31; // [rsp+D0h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-A0h] BYREF
  PVOID BaseOfImage[10]; // [rsp+F0h] [rbp-88h] BYREF

  v30 = a4;
  v31 = a5;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
  OutHeaders = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemSection = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = 1;
    if ( a2 )
    {
      v13 = 2;
      v14 = 285212672;
      v15 = 0;
      SessionId = -1;
    }
    else
    {
      v13 = 16;
      v14 = 0x1000000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v15 = 1;
    }
    LOBYTE(v9) = a3;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v9,
                      (int)&ObjectAttributes,
                      v11,
                      v13,
                      v14,
                      0,
                      (__int64)FileHandle,
                      v23,
                      v24,
                      SessionId,
                      v15,
                      a3);
    if ( SystemSection >= 0 )
    {
      v17 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v17, 1, (__int64)BaseOfImage);
      if ( SystemSection >= 0 )
      {
        v18 = (unsigned __int64)LODWORD(BaseOfImage[2]) << 12;
        SystemSection = RtlImageNtHeaderEx(0, BaseOfImage[0], v18, &OutHeaders);
        if ( SystemSection >= 0 )
        {
          if ( &OutHeaders->OptionalHeader < (_IMAGE_OPTIONAL_HEADER64 *)OutHeaders
            || &OutHeaders->OptionalHeader > (_IMAGE_OPTIONAL_HEADER64 *)((char *)BaseOfImage[0] + v18) )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v18 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_28;
            }
            Machine = OutHeaders->FileHeader.Machine;
            if ( Machine != 0x8664 && Machine != 332 && Machine != 0xAA64 )
              v12 = 0;
            if ( !v12 )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            HotPatchInformation = RtlFindHotPatchInformation(BaseOfImage[0]);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_28;
              }
              *a7 = *(_DWORD *)(HotPatchBase + 12);
              a7[1] = *(_DWORD *)(HotPatchBase + 8);
            }
            *v30 = FileHandle;
            FileHandle = 0LL;
            *v31 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = *(_OWORD *)BaseOfImage;
              a6[1] = *(_OWORD *)&BaseOfImage[2];
              a6[2] = *(_OWORD *)&BaseOfImage[4];
              a6[3] = *(_OWORD *)&BaseOfImage[6];
              a6[4] = *(_OWORD *)&BaseOfImage[8];
              BaseOfImage[0] = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_28:
  if ( BaseOfImage[0] )
    MiUnmapImageInSystemSpace((__int64)BaseOfImage);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
