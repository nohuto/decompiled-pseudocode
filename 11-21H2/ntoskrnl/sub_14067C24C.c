/*
 * XREFs of sub_14067C24C @ 0x14067C24C
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14041C2E0 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall sub_14067C24C(__int64 a1)
{
  HANDLE *v2; // rdi
  BOOLEAN v3; // r14
  HANDLE v4; // rsi
  __int64 v5; // rdx
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
  if ( *v2 && ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
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
