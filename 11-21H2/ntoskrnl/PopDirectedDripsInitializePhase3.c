/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140B270C4
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B0348C (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140858740 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x140858820 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B272B0 (PopDirectedDripsDiagInitialize.c)
 */

__int64 PopDirectedDripsInitializePhase3()
{
  NTSTATUS v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  PopDirectedDripsDiagInitialize(3LL);
  PopDirectedDripsQueryEnabledMitigations((__int64)&PopDirectedDripsState);
  if ( (dword_140C24070 & 3) != 0 )
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
             &qword_140C24050,
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
