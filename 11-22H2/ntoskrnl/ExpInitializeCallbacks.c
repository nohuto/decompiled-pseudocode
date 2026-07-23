/*
 * XREFs of ExpInitializeCallbacks @ 0x140B6C95C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B4D6E4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435400 (memset.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     NtCreateDirectoryObject @ 0x1407F1B70 (NtCreateDirectoryObject.c)
 *     ObCreateObjectType @ 0x140821750 (ObCreateObjectType.c)
 */

char ExpInitializeCallbacks()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 *v2; // rdi
  PCALLBACK_OBJECT *v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v7[16]; // [rsp+60h] [rbp-39h] BYREF
  HANDLE DirectoryHandle; // [rsp+100h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  ExpCallbackListLock = 0LL;
  qword_140C2D6F8 = (__int64)&ExpCallbackListHead;
  ExpCallbackListHead = (__int64)&ExpCallbackListHead;
  RtlInitUnicodeString(&DestinationString, L"Callback");
  memset(v7, 0, 0x78uLL);
  BYTE2(v7[0]) |= 4u;
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  v7[9] = ExpDeleteCallback;
  HIDWORD(v7[4]) = 512;
  *(_OWORD *)((char *)&v7[1] + 4) = ExpCallbackMapping;
  HIDWORD(v7[3]) = 2031617;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&ExCallbackObjectType) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(DirectoryHandle);
      ExpCallbackEvent.Header.WaitListHead.Blink = &ExpCallbackEvent.Header.WaitListHead;
      v0 = 0;
      ExpCallbackEvent.Header.WaitListHead.Flink = &ExpCallbackEvent.Header.WaitListHead;
      LOWORD(ExpCallbackEvent.Header.Lock) = 0;
      ExpCallbackEvent.Header.Size = 6;
      ExpCallbackEvent.Header.SignalState = 0;
      if ( !ExpInitializeCallback[0] )
        return 1;
      v1 = 0LL;
      v2 = ExpInitializeCallback;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)ExpInitializeCallback[v1 + 1]);
        v3 = (PCALLBACK_OBJECT *)*v2;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ExCreateCallback(v3, &ObjectAttributes, 1u, 1u) < 0 )
          break;
        v1 = 2LL * (unsigned int)++v0;
        v2 = &ExpInitializeCallback[v1];
        if ( !ExpInitializeCallback[v1] )
          return 1;
      }
    }
  }
  return 0;
}
