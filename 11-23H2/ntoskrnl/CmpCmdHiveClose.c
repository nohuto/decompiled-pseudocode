/*
 * XREFs of CmpCmdHiveClose @ 0x14068B0E4
 * Callers:
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140208890 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x140419B70 (CmpAdjustFileCFSafety.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B310 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041B5D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14041BC70 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  HANDLE *v2; // rsi
  BOOLEAN v3; // r14
  HANDLE v4; // rbx
  __int64 v5; // rcx
  unsigned int i; // ebx
  HANDLE v7; // rcx
  __int16 *p_ObjectInformation; // r8
  __int16 v10; // [rsp+30h] [rbp-50h] BYREF
  __int16 ObjectInformation; // [rsp+34h] [rbp-4Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-18h]

  v15 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  v2 = (HANDLE *)(a1 + 1544);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *v2;
  if ( *v2 )
  {
    if ( ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      if ( *(_BYTE *)(a1 + 141) )
      {
        *(_QWORD *)&v14 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        v5 = v14;
        if ( *(_QWORD *)(a1 + 4184) )
          v5 = *(_QWORD *)(a1 + 4184);
        *(_QWORD *)&v14 = v5;
      }
      *((_QWORD *)&FileInformation + 1) = MEMORY[0xFFFFF78000000014];
      ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    }
    if ( (*(_DWORD *)(a1 + 4112) & 0x10000) != 0 )
      CmpAdjustFileCFSafety(v4, 0);
  }
  for ( i = 0; i < 6; ++i )
  {
    v7 = *v2;
    if ( *v2 )
    {
      if ( i )
      {
        ObjectInformation = 0;
        p_ObjectInformation = &ObjectInformation;
      }
      else
      {
        v10 = 0;
        p_ObjectInformation = &v10;
      }
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, p_ObjectInformation, 2u);
      ZwClose(*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
