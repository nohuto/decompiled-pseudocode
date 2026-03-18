/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x1402BFB1C
 * Callers:
 *     PoGetIdleTimes @ 0x140252620 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A470 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x1403918C0 (PpmParkRegisterParking.c)
 *     PpmCheckResetProcessors @ 0x14039325C (PpmCheckResetProcessors.c)
 *     PpmHeteroHgsBackupInit @ 0x1403AC3B4 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x140586300 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586670 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405868D0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140597A1C (PpmCapturePerformanceDistribution.c)
 *     PpmUpdateIdleStates @ 0x14081FDA0 (PpmUpdateIdleStates.c)
 *     EtwpKernelTraceRundown @ 0x1408200C8 (EtwpKernelTraceRundown.c)
 *     PpmIdleRegisterDefaultStates @ 0x140822178 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateProcessorPolicy @ 0x14082C7B0 (PpmUpdateProcessorPolicy.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14082CD3C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140864C90 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x140982AC4 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x140996530 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14099D2F4 (PpmPostProcessMediaBuffering.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x1402BFC50 (PopQueueTargetDpc.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp+17h] BYREF
  __int128 v19; // [rsp+A0h] [rbp+27h]
  __int128 v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+C0h] [rbp+47h]
  int v22; // [rsp+C8h] [rbp+4Fh]

  Object = 393217LL;
  v21 = 0LL;
  v22 = 0;
  v17 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v15 = v7;
  v7[0] = a1;
  v11 = a2;
  p_Object = &Object;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v9 = 0;
  v19 = 0LL;
  v10 = 0;
  v20 = 0LL;
  v8 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc((ULONG_PTR)BugCheckParameter2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
