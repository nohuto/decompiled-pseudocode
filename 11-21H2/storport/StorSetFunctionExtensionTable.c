/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C0044608
 * Callers:
 *     RaCreateDriver @ 0x1C008DE38 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0079810 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0079810 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0079820 = StorExtFreePool;
  *((_QWORD *)&xmmword_1C0079820 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0079830 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0079830 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C0079840 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C0079840 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C0079850 = (__int64)StorExtGetOriginalMdl;
  return result;
}
