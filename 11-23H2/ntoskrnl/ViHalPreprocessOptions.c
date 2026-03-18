/*
 * XREFs of ViHalPreprocessOptions @ 0x140AC9324
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140AC41B0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC42C0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140AC435C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140AC43F0 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140AC4484 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140AC451C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC45BC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140AC4650 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140AC46DC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC475C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59E0 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6C00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72B0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140AC7EBC (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140AC8394 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140AC8544 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140AC87D0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140AC8904 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140AC8E74 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140AC9074 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140AC9188 (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140AC97BC (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140AC9C4C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A740 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x28 )
    {
      *a1 = 4;
      goto LABEL_9;
    }
    a2 = (const char *)ViHalDefaultActions;
    result = *((unsigned int *)ViHalDefaultActions + a3);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_9:
  VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
  VfUtilDbgPrint("**\n");
  VfUtilDbgPrint("** VF: ");
  if ( v7 )
    DbgPrintEx(0x65u, 0, v8, a5, a6);
  else
    DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
  VfUtilDbgPrint("\n");
  VfUtilDbgPrint("**\n");
  return VfUtilDbgPrint("*****************************************************************\n");
}
