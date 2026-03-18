/*
 * XREFs of VfReportIssueWithOptions @ 0x1405CFD00
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC34CC (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC37D0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC3878 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC3920 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x140AD6DDC (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140AD840C (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140AD8770 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140AD9A98 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140AD9C50 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1405A7770 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x140AD3584 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140AD36B4 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d
  int v12; // eax

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&VfOptionFlags, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
            DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
            if ( (_BYTE)Response != 66 )
            {
              switch ( (_BYTE)Response )
              {
                case 'I':
                  return;
                case 'R':
                  goto LABEL_17;
                case 'W':
                  goto LABEL_14;
              }
              if ( (_BYTE)Response != 98 )
                break;
            }
            v12 = VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
            __debugbreak();
            if ( v12 )
              VfErrorReleaseTriageInformation();
          }
          if ( (_BYTE)Response == 105 )
            return;
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_17:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
