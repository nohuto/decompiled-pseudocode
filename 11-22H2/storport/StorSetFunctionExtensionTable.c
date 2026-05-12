/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C0047A88
 * Callers:
 *     RaCreateDriver @ 0x1C00A8514 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0092830 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0092830 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0092840 = StorExtFreePool;
  *((_QWORD *)&xmmword_1C0092840 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0092850 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0092850 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C0092860 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C0092860 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C0092870 = (__int64)StorExtGetOriginalMdl;
  return result;
}
