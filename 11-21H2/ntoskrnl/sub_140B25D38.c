/*
 * XREFs of sub_140B25D38 @ 0x140B25D38
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS sub_140B25D38()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  _DWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  v2[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v3 = L"\\Device\\VolumesSafeForWriteAccess";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  v2[0] = 4456514;
  ObjectAttributes.Attributes = 592;
  result = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    v1 = ObReferenceObjectByHandle(EventHandle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(EventHandle);
    if ( v1 < 0 )
    {
      return v1;
    }
    else
    {
      stru_140C48BC0.List.Flink = 0LL;
      stru_140C48BC0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1408650D0;
      stru_140C48BC0.Parameter = Object;
      ExQueueWorkItem(&stru_140C48BC0, DelayedWorkQueue);
      return 0;
    }
  }
  return result;
}
