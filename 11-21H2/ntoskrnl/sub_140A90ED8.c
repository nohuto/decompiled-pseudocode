/*
 * XREFs of sub_140A90ED8 @ 0x140A90ED8
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140B27E30 @ 0x140B27E30 (sub_140B27E30.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS sub_140A90ED8()
{
  PVOID *v0; // rsi
  __int64 v1; // rdi
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  v0 = (PVOID *)&unk_140C1AE20;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v1 = 0LL;
  do
  {
    KeInitializeEvent((PRKEVENT)((char *)&unk_140C1AE20 + 48 * v1 + 16), SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = PsCreateSystemThread(
               &ThreadHandle,
               0,
               &ObjectAttributes,
               0LL,
               0LL,
               HandleInformation,
               (char *)&unk_140C1AE20 + 48 * v1);
    if ( result < 0 )
      break;
    Object = 0LL;
    ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v3 = ThreadHandle;
    *v0 = Object;
    result = ZwClose(v3);
    v1 = (unsigned int)(v1 + 1);
    v0 += 6;
  }
  while ( (unsigned int)v1 < 8 );
  _InterlockedExchange(&dword_140C1ADD8, v1);
  return result;
}
