/*
 * XREFs of VfPoolInitPhase1 @ 0x140ADA138
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140B532E4 (ViInitSystemPhase1.c)
 * Callees:
 *     InitializeSListHead @ 0x140221420 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1407B83E0 (PsCreateSystemThread.c)
 */

NTSTATUS VfPoolInitPhase1()
{
  NTSTATUS result; // eax
  char *v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( (VfRuleClasses & 0x400000) == 0 || (result = MmVerifierData, (MmVerifierData & 1) != 0) )
  {
    v1 = (char *)&unk_140CF80A8;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
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
                 ViPoolDelayFreeTrimThreadRoutine,
                 v1 - 40);
      if ( result >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *(_QWORD *)v1 = Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 40));
        result = _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 64;
    }
    while ( (__int64)v1 < (__int64)byte_140CF8128 );
  }
  return result;
}
