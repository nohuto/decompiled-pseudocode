/*
 * XREFs of CmpInitializeRegistryProcess @ 0x14080D05C
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListEx @ 0x140222430 (ExInitializeLookasideListEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     CmSiProcessTupleInitialize @ 0x14036EAD4 (CmSiProcessTupleInitialize.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14037483C (CmSiSetProcessWorkingSetMaximum.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403748F4 (CmSiProcessTupleStartFromHandle.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14041AA20 (ZwSetInformationProcess.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     CmpCreateRegistryThread @ 0x14080CDB8 (CmpCreateRegistryThread.c)
 *     CmpCreateRegistryProcessToken @ 0x14080D218 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int MinimalProcess; // ebx
  int v2; // r9d
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE ProcessInformation[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  HANDLE ProcessHandle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v9; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v9 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    LOBYTE(v2) = BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink);
    MinimalProcess = PsCreateMinimalProcess(
                       (_DWORD)PsInitialSystemProcess,
                       (unsigned int)&CmRegistryProcessName,
                       0,
                       v2,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       (__int64)&ProcessHandle);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          MinimalProcess < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      MinimalProcess = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v3, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          CmSiSetProcessWorkingSetMaximum();
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          MinimalProcess = CmpCreateRegistryThread((__int64)&v9, v4, (__int64)CmpDummyThreadRoutine, 0LL);
          if ( MinimalProcess >= 0 )
          {
            MinimalProcess = ExInitializeLookasideListEx(
                               &CmpBounceBufferLookaside,
                               (PALLOCATE_FUNCTION_EX)CmpAllocatePoolLookaside,
                               (PFREE_FUNCTION_EX)CmSiFreeMemory,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( MinimalProcess >= 0 )
              MinimalProcess = 0;
          }
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v9 )
    ZwClose(v9);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)MinimalProcess;
}
