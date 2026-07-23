/*
 * XREFs of CcDecrementOpenCount @ 0x14029CDB0
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x1402984D4 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPreProcess @ 0x14029BAF0 (CcWriteBehindPreProcess.c)
 *     CcFlushCachePostProcess @ 0x14029DFCC (CcFlushCachePostProcess.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1402F0CE0 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1402F1230 (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402F43E8 (CcNotifyOfMappedWriteComplete.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     CcMdlWriteComplete2 @ 0x14036BA2C (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x140538F40 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299B34 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  char v1; // dl
  __int64 *v2; // rax
  __int64 v3; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // r11
  char v8; // r9

  v1 = CcEnablePerVolumeLazyWriter;
  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 544);
  v2 = (__int64 *)(a1 + 600);
  v3 = *(unsigned int *)(a1 + 4);
  v4 = *(_BYTE **)(a1 + 536);
  if ( v1 )
    v5 = *v2;
  else
    v5 = 0LL;
  if ( !(_DWORD)v3 )
  {
    if ( v1 )
      v2 = (__int64 *)(*v2 + 986);
    else
      v2 = (__int64 *)(v4 + 1050);
    *(_BYTE *)v2 = 1;
    v6 = *(_DWORD *)(a1 + 152);
    LODWORD(v2) = *(_DWORD *)(a1 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !(_DWORD)v2 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( (_DWORD)v2 || (v6 & 0x20) != 0 )
        return (char)v2;
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v3) = v7 != 0;
      v8 = 0;
    }
    LOBYTE(v2) = CcScheduleLazyWriteScan(v4, v5, v3, v8);
  }
  return (char)v2;
}
