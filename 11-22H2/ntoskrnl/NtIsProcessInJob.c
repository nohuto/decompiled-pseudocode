/*
 * XREFs of NtIsProcessInJob @ 0x14069EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PspIsProcessInJob @ 0x14069EECC (PspIsProcessInJob.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  NTSTATUS IsProcessInJob; // esi
  void *v11; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    Object = p_Lock;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x624A7350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    p_Lock = Object;
  }
  if ( !JobHandle )
  {
    v9 = (PVOID)p_Lock[162];
    p_Lock = Object;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v9);
    if ( JobHandle )
      ObfDereferenceObject(v11);
    goto LABEL_8;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v9 = Object;
  IsProcessInJob = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
