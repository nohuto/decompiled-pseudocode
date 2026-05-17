/*
 * XREFs of LdrpMapResourceFile @ 0x18002EA70
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18002E7F0 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18002E7B0 (RtlReleaseRelativeName.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r14
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdi
  void *v14; // rax
  _QWORD *v15; // rcx
  __int128 v17; // xmm0
  HANDLE Handle; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h] BYREF
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-51h] BYREF
  __int128 v22; // [rsp+70h] [rbp-49h] BYREF
  __int128 v23; // [rsp+80h] [rbp-39h] BYREF
  void *v24; // [rsp+90h] [rbp-29h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  FileHandle = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 )
        {
LABEL_29:
          v12 = -1073741701;
          goto LABEL_23;
        }
        v11 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v17 = *a2;
          v13 = 0LL;
          v24 = 0LL;
          ObjectAttributes.Length = 48;
          v22 = v17;
        }
        else
        {
          v12 = RtlpDosPathNameToRelativeNtPathName_U(2, *((_QWORD *)a2 + 1), (int)&v22, 0LL, (__int64)&v23);
          if ( v12 < 0 )
          {
LABEL_23:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( v19 )
              NtUnmapViewOfSection(-1LL);
            return (unsigned int)v12;
          }
          v13 = *((_QWORD *)&v22 + 1);
          if ( (_WORD)v23 )
          {
            v14 = v24;
            v22 = v23;
          }
          else
          {
            v14 = 0LL;
            v24 = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v14;
          if ( v13 )
            goto LABEL_10;
        }
        ObjectAttributes.RootDirectory = 0LL;
LABEL_10:
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
        if ( v13 )
        {
          RtlReleaseRelativeName((__int64)&v23);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v13);
        }
        if ( v12 < 0 )
          goto LABEL_23;
        v12 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v11, 0x8000000, FileHandle);
        if ( v12 < 0 )
          goto LABEL_23;
        v20 = 0LL;
        v12 = ZwMapViewOfSection(Handle, -1LL, &v19, 0LL, 0LL, &v20, &v21, 1, 0, v11);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
        if ( v12 < 0 )
          goto LABEL_23;
        if ( RtlImageNtHeader(v19) )
        {
          v15 = a6;
          *v9 = v19;
          if ( v15 )
            *v15 = v21;
          if ( a4 )
          {
            *a4 = FileHandle;
          }
          else if ( FileHandle )
          {
            NtClose(FileHandle);
          }
          return (unsigned int)v12;
        }
        goto LABEL_29;
      }
    }
  }
  return 3221225485LL;
}
