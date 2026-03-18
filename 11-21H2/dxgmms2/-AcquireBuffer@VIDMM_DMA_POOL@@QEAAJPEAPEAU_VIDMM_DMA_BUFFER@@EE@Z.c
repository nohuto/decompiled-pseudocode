/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0098370
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C00134C0 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7F70 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C0098548 (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0098658 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER **a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  char v5; // r15
  unsigned int v8; // ebp
  struct _VIDMM_DMA_BUFFER **v9; // rsi
  struct _VIDMM_DMA_BUFFER *v10; // rbx
  struct _VIDMM_DMA_BUFFER *v11; // rcx
  struct _VIDMM_DMA_BUFFER **v12; // rax
  struct _VIDMM_DMA_BUFFER ***v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  signed __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 v31; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v8 = 0;
  v9 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 96);
  *a2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( *((_BYTE *)*v9 + 24) )
          break;
        if ( *((_BYTE *)v10 + 25) != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v10;
          ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
          v11 = *(struct _VIDMM_DMA_BUFFER **)v10;
          if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v10 + 8LL) != v10
            || (v12 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v10 + 1), *v12 != v10)
            || (*v12 = v11,
                *((_QWORD *)v11 + 1) = v12,
                v13 = (struct _VIDMM_DMA_BUFFER ***)*((_QWORD *)this + 13),
                *v13 != v9) )
          {
            __fastfail(3u);
          }
          v14 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *(_QWORD *)v10 = v9;
          *((_QWORD *)v10 + 1) = v13;
          *v13 = (struct _VIDMM_DMA_BUFFER **)v10;
          *((_QWORD *)this + 13) = v10;
          ExReleaseResourceLite(v14);
          v15 = *((_QWORD *)this + 7);
          if ( v15 != *((_QWORD *)v10 + 5)
            || *((_DWORD *)this + 18) != *((_DWORD *)v10 + 12)
            || *((_DWORD *)this + 21) != *((_DWORD *)v10 + 13) )
          {
            WdLogSingleEntry5(0LL, 270LL, 22LL, v10, v15, *((unsigned int *)this + 18));
          }
          if ( (*((_BYTE *)this + 32) & 1) != 0 )
            *((_QWORD *)v10 + 21) = 0LL;
          *((_OWORD *)v10 + 1) = 0LL;
          v16 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
          *((_BYTE *)v10 + 24) = 1;
          *((_DWORD *)v10 + 7) |= 1u;
          *((_QWORD *)v10 + 20) = v16;
          *a2 = v10;
          return v8;
        }
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *v9);
      }
      if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                            this,
                            *((_DWORD *)this + 10),
                            *((_DWORD *)this + 16),
                            *((_DWORD *)this + 19)) )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = *((unsigned int *)this + 23);
      }
      if ( (int)VIDMM_DMA_POOL::AddDmaBufferToPool(
                  this,
                  *((_QWORD *)this + 5),
                  *((_DWORD *)this + 16),
                  *((_DWORD *)this + 19)) < 0 )
      {
        if ( v5 )
          return 3223191810LL;
        v30 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, v4 == 0, &v30);
        if ( v30 )
        {
LABEL_32:
          WdLogSingleEntry1(4LL, v10);
          return (unsigned int)-1073741130;
        }
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = v10;
    }
    if ( v5 )
      return 3223191810LL;
    v31 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, v4 == 0, &v31);
    if ( v31 )
      goto LABEL_32;
  }
}
