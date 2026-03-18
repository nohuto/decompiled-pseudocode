/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0017494
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008770 (VidSchiProcessDpcCompletedPacket.c)
 *     VidMmReleaseDmaBuffer @ 0x1C002D2A0 (VidMmReleaseDmaBuffer.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041754 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095820 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C1FD8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00DFE98 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C0105CF8 (VidSchiDiscardQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1C01086D8 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)this + 2);
  }
  if ( a3 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 8);
    v7 = v6 == 0;
    if ( v6 > 0 )
    {
      v8 = v6 - 1;
      *((_DWORD *)a2 + 8) = v8;
      v7 = v8 == 0;
    }
  }
  if ( v7 )
    *((_BYTE *)a2 + 24) = 0;
}
