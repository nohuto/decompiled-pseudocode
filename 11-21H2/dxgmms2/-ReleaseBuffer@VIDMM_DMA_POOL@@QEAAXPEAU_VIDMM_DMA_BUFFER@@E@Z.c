/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420
 * Callers:
 *     VidMmReleaseDmaBuffer @ 0x1C002D460 (VidMmReleaseDmaBuffer.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7F70 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00D4CC4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  bool v7; // zf
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax

  v4 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)this + 2);
  }
  if ( v4 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v9 = *((_DWORD *)a2 + 8);
    v7 = v9 == 0;
    if ( v9 > 0 )
    {
      v10 = v9 - 1;
      *((_DWORD *)a2 + 8) = v10;
      v7 = v10 == 0;
    }
  }
  if ( v7 )
    *((_BYTE *)a2 + 24) = 0;
}
