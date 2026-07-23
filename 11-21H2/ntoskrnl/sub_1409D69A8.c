/*
 * XREFs of sub_1409D69A8 @ 0x1409D69A8
 * Callers:
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_1409D6C58 @ 0x1409D6C58 (sub_1409D6C58.c)
 *     sub_1409D6F7C @ 0x1409D6F7C (sub_1409D6F7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D69A8(_OWORD *a1, const WCHAR *a2, int *a3, __int64 a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int v11; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21; // [rsp+130h] [rbp+30h]
  PVOID Object; // [rsp+190h] [rbp+90h] BYREF
  int v23; // [rsp+198h] [rbp+98h] BYREF

  v23 = 0;
  a5 = 0;
  v21 = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(FileHandle, 0, sizeof(FileHandle));
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    a3 = &a5;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  v11 = sub_1409D6F7C(SecurityDescriptor);
  if ( v11 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      v11 = IoCreateFile(
              FileHandle,
              0x140003u,
              &ObjectAttributes,
              &IoStatusBlock,
              0LL,
              0x2000u,
              0,
              0,
              0x800Au,
              0LL,
              0,
              CreateFileTypeNone,
              0LL,
              *a3 != 0 ? 264 : 266);
      if ( v11 < 0 )
        break;
      Object = 0LL;
      v11 = ObReferenceObjectByHandle(FileHandle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      FileHandle[1] = Object;
      if ( v11 < 0 )
        break;
      v8 = !*a3 || (IoStatusBlock.Information & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      v11 = ZwSetSecurityObject(FileHandle[0], 4u, SecurityDescriptor);
      if ( v11 < 0 )
        break;
      if ( *a3 )
        goto LABEL_23;
      v11 = sub_1409D5B38((__int64)FileHandle, &v23);
      if ( v11 < 0 )
        break;
      if ( v23 )
      {
LABEL_23:
        v13 = *(_OWORD *)&FileHandle[2];
        *a1 = *(_OWORD *)FileHandle;
        v14 = *(_OWORD *)&FileHandle[4];
        a1[1] = v13;
        v15 = *(_OWORD *)&FileHandle[6];
        a1[2] = v14;
        a1[3] = v15;
        memset(FileHandle, 0, sizeof(FileHandle));
        v11 = 0;
        goto LABEL_22;
      }
      if ( v9 )
      {
        v11 = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
      {
        sub_1409D6C58(FileHandle);
        v8 = 0;
      }
      sub_1409D57BC((__int64)FileHandle);
      memset(FileHandle, 0, sizeof(FileHandle));
    }
    if ( v8 )
      sub_1409D6C58(FileHandle);
  }
LABEL_22:
  sub_1409D57BC((__int64)FileHandle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)v11;
}
