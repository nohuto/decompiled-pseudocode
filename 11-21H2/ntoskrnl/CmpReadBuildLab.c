/*
 * XREFs of CmpReadBuildLab @ 0x140911D28
 * Callers:
 *     CmpRecordShutdownStopTime @ 0x140911EA8 (CmpRecordShutdownStopTime.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall CmpReadBuildLab(_QWORD *a1, ULONG *a2)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v5; // ebx
  struct _LOOKASIDE_LIST_EX *v6; // r9
  struct _LOOKASIDE_LIST_EX *v7; // r9
  PVOID v8; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+30h] BYREF
  ULONG v14; // [rsp+B8h] [rbp+38h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v14 = 0;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  TransientPoolWithTag = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BuildLabEx");
    v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v5 == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        ResultLength,
                                                        0x30384D43u,
                                                        v6);
      if ( !TransientPoolWithTag )
      {
LABEL_4:
        v5 = -1073741670;
        goto LABEL_8;
      }
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             TransientPoolWithTag,
             ResultLength,
             &v14);
      if ( v5 >= 0 )
      {
        v8 = CmpAllocateTransientPoolWithTag(
               PagedPool,
               TransientPoolWithTag->Privilege[0].Luid.LowPart,
               0x30384D43u,
               v7);
        *a1 = v8;
        if ( !v8 )
          goto LABEL_4;
        memmove(v8, &TransientPoolWithTag->Privilege[0].Luid.HighPart, TransientPoolWithTag->Privilege[0].Luid.LowPart);
        *a2 = TransientPoolWithTag->Privilege[0].Luid.LowPart;
      }
    }
  }
LABEL_8:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( TransientPoolWithTag )
    CmSiFreeMemory(TransientPoolWithTag);
  return (unsigned int)v5;
}
