/*
 * XREFs of CmpCmdHiveClose @ 0x14068B0E4
 * Callers:
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140A1CCA0 (CmpDestroyHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140208890 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x1404197E0 (CmpAdjustFileCFSafety.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041AF80 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041B240 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14041B8E0 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  __int64 *v2; // rsi
  BOOLEAN v3; // r14
  void *v4; // rbx
  __int64 v5; // rcx
  unsigned int i; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v11 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v10 = 0LL;
  v2 = (__int64 *)(a1 + 1544);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = (void *)*v2;
  if ( *v2 )
  {
    if ( ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      if ( *(_BYTE *)(a1 + 141) )
      {
        *(_QWORD *)&v10 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        v5 = v10;
        if ( *(_QWORD *)(a1 + 4184) )
          v5 = *(_QWORD *)(a1 + 4184);
        *(_QWORD *)&v10 = v5;
      }
      *((_QWORD *)&FileInformation + 1) = MEMORY[0xFFFFF78000000014];
      ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    }
    if ( (*(_DWORD *)(a1 + 4112) & 0x10000) != 0 )
      CmpAdjustFileCFSafety(v4, 0);
  }
  for ( i = 0; i < 6; ++i )
  {
    if ( *v2 )
    {
      ZwSetInformationObject(*v2, 4LL);
      ZwClose((HANDLE)*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
