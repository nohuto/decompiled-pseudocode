/*
 * XREFs of NtCreateIoCompletion @ 0x1406B26D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140220E30 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  ULONG v4; // ebx
  HANDLE *v5; // rdi
  char PreviousMode; // si
  NTSTATUS Object; // ecx
  ULONG v8; // edx
  PRKQUEUE v9; // rbx
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue; // [rsp+60h] [rbp-28h]

  v4 = Count;
  v5 = IoCompletionHandle;
  v11 = 0LL;
  Queue = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    IoCompletionHandle = (PHANDLE)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      IoCompletionHandle = v5;
    *IoCompletionHandle = *IoCompletionHandle;
  }
  LOBYTE(Count) = PreviousMode;
  LOBYTE(IoCompletionHandle) = PreviousMode;
  Object = ObCreateObjectEx((_DWORD)IoCompletionHandle, (_DWORD)IoCompletionObjectType, (_DWORD)ObjectAttributes, Count);
  if ( Object >= 0 )
  {
    v8 = v4;
    v9 = Queue;
    KeInitializeQueue(Queue, v8);
    *(_QWORD *)&v9[1].Header.Lock = 0LL;
    LOBYTE(v9[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    if ( Object >= 0 )
      *v5 = (HANDLE)v11;
  }
  return Object;
}
