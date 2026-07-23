/*
 * XREFs of BcdEnumerateDisks @ 0x140680EC0
 * Callers:
 *     ExpTranslateNtPath @ 0x1409FE6EC (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ExpDiskEnumCallback @ 0x140412AE0 (ExpDiskEnumCallback.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041DA70 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x140807A34 (BiIsValidDiskDevice.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BcdEnumerateDisks(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  ULONG v4; // esi
  __int64 i; // rdx
  wchar_t **Pool2; // rdi
  wchar_t *v8; // r14
  wchar_t **v9; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Context; // [rsp+C0h] [rbp+40h] BYREF
  int v13; // [rsp+C4h] [rbp+44h]
  unsigned int v14; // [rsp+D0h] [rbp+50h]
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  v13 = HIDWORD(a1);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Context = 0;
  v14 = 0;
  DirectoryHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v4 = 4096;
    for ( i = 4096LL; ; i = v4 )
    {
      Pool2 = (wchar_t **)ExAllocatePool2(258LL, i, 1262764866LL);
      if ( !Pool2 )
      {
        v3 = -1073741801;
        goto LABEL_7;
      }
      Context = 0;
      v3 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v4, 0, 1u, &Context, 0LL);
      if ( v3 != 261 )
        break;
      ExFreePoolWithTag(Pool2, 0x4B444342u);
      v4 += 4096;
    }
    ZwClose(DirectoryHandle);
    DirectoryHandle = 0LL;
    if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147483622 )
    {
      v8 = (wchar_t *)ExAllocatePool2(258LL, 88LL, 1262764866LL);
      if ( v8 )
      {
        v3 = 0;
        if ( *(_WORD *)Pool2 )
        {
          v9 = Pool2 + 1;
          do
          {
            if ( (unsigned __int8)BiIsValidDiskDevice(*v9, v9[2]) )
            {
              swprintf_s(v8, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v9, 0LL);
              if ( ExpDiskEnumCallback(v8, v14, a2) )
                break;
            }
            v9 += 4;
          }
          while ( *((_WORD *)v9 - 4) );
        }
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
      else
      {
        v3 = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
LABEL_7:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v3;
}
