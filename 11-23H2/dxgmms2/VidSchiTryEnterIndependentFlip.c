/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C003C7E4
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x1C0006020 (VidSchiUpdatePresentParameters.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00091C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010C40 (VidSchiCompleteFlipEntry.c)
 *     VidSchConfirmToken @ 0x1C003E830 (VidSchConfirmToken.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041754 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C00354FC (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C003A850 (VidSchiFlushPendingTokenList.c)
 */

void __fastcall VidSchiTryEnterIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // r11d

  if ( VidSchiCheckPlaneIndependentFlipCondition(a2, a3, a4) )
    VidSchiFlushPendingTokenList(a1, a2, a3, v7);
}
