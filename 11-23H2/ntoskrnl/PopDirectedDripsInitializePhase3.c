/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140B6C83C
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B51F08 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1407331A0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x1407B8100 (PsCreateSystemThread.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14085990C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140859A58 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B4EF98 (PopDirectedDripsDiagInitialize.c)
 */

__int64 PopDirectedDripsInitializePhase3()
{
  NTSTATUS v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  PopDirectedDripsDiagInitialize(3);
  PopDirectedDripsQueryEnabledMitigations((__int64)&PopDirectedDripsState);
  if ( (dword_140C3F110 & 3) != 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = PsCreateSystemThread(
           &ThreadHandle,
           0,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
           &PopDirectedDripsState);
    if ( v0 >= 0 )
    {
      v0 = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1FFFFFu,
             (POBJECT_TYPE)PsThreadType,
             0,
             0x67446F50u,
             &qword_140C3F0F0,
             0LL);
      ZwClose(ThreadHandle);
      if ( v0 >= 0 )
      {
        if ( (unsigned int)PopDirectedDripsDfxEnforcementPolicy >= 3 )
          PopDirectedDripsDfxEnforcementPolicy = 1;
        PopDirectedDripsState.HandleAttributes |= 1u;
        v0 = 0;
      }
    }
  }
  else
  {
    v0 = -1073741637;
  }
  PopDiagTraceDirectedDripsInitialization(v0);
  return (unsigned int)v0;
}
