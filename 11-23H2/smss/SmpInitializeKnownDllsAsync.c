/*
 * XREFs of SmpInitializeKnownDllsAsync @ 0x140011A9C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitializeKnownDllsAsync()
{
  NTSTATUS v0; // ebx
  __int64 v1; // rax
  void *v2; // rcx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v5; // [rsp+38h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+10h] BYREF
  __int64 v8; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  v8 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v5 = L"\\KnownDlls\\SmKnownDllsInitialized";
  v4 = 4456514;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v0 < 0 )
    goto LABEL_4;
  v0 = TpAllocWork(&v8, &SmpInitializeKnownDllsWorker, EventHandle, &SmpCallbackEnviron);
  if ( v0 < 0 )
  {
    v1 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    *(_QWORD *)&SmpGlobalLog[2 * v1 + 4] = 0LL;
    SmpGlobalLog[2 * v1 + 2] = 4191;
    SmpGlobalLog[2 * v1 + 3] = v0;
LABEL_4:
    v2 = EventHandle;
    goto LABEL_5;
  }
  TpPostWork(v8);
  TpReleaseWork(v8);
  v2 = 0LL;
  EventHandle = 0LL;
LABEL_5:
  if ( v2 )
  {
    NtSetEvent(v2, 0LL);
    NtClose(EventHandle);
  }
  return (unsigned int)v0;
}
