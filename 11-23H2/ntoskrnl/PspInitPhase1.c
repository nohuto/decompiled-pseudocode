/*
 * XREFs of PspInitPhase1 @ 0x140B4D1F4
 * Callers:
 *     PsInitSystem @ 0x140B4DE90 (PsInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     strcpy_s @ 0x1403DFA70 (strcpy_s.c)
 *     KeBugCheck @ 0x14041EDC0 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x14054C8FC (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x14076B780 (ObInsertObject.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B4D294 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B4D2EC (PspInitializeSecExtensionHost.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B4D344 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B4D39C (PspInitializeMMCSSCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B4D3FC (PspInitializeHwTraceCallouts.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B4D45C (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B4D4BC (PspInitializeCpuPartitionsPhase1.c)
 *     PspInitializeNetRateControl @ 0x140B4D58C (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  bool result; // al
  NTSTATUS v1; // eax
  HANDLE v2; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle) < 0
    || (int)PspInitializeCpuPartitionsPhase1() < 0 )
  {
    KeBugCheck(0x60u);
  }
  result = 0;
  if ( (unsigned __int8)PspInitializeNetRateControl() )
  {
    if ( (int)PspInitializeBackgroundActivityModeratorCallouts() >= 0
      && (int)PspInitializeDesktopActivityModeratorCallouts() >= 0
      && (int)PspInitializeMMCSSCallouts() >= 0
      && (int)PspInitializeHwTraceCallouts() >= 0
      && (int)PspInitializeOctagonExtensionHost() >= 0
      && (int)PspInitializeSecExtensionHost() >= 0 )
    {
      if ( !VslVsmEnabled )
        return 1;
      v2 = 0LL;
      if ( (int)PsCreateMinimalProcess(
                  (__int64)PsInitialSystemProcess,
                  0LL,
                  0LL,
                  BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                  0LL,
                  0,
                  0,
                  0LL,
                  0LL,
                  0LL,
                  &v2) >= 0 )
      {
        Object = 0LL;
        v1 = ObReferenceObjectByHandle(v2, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PsSecureSystemProcess = (ULONG_PTR)Object;
        if ( v1 >= 0 )
        {
          strcpy_s((char *)Object + 1448, 0xFuLL, "Secure System");
          if ( (int)VslRegisterSecureSystemProcess() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
