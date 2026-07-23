/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140299C88
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcNotifyOfMappedWrite @ 0x1402984D4 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402FC810 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPagesInternal @ 0x1402FCD80 (CcChargeDirtyPagesInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403CFD40 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D47F0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCoalescingCallBackHelper @ 0x140535A20 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x140537878 (CcRescheduleLazyWriteScan.c)
 *     CcDeferWrite @ 0x1405379D0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1405394A4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140299CC8 (CcScheduleLazyWriteScanVolume.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140536FEC (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  __int64 v5; // r10
  char v7; // cl
  __int64 v8; // rdx
  _BYTE *v9; // rdi

  result = a3;
  v5 = a2;
  if ( CcEnablePerVolumeLazyWriter )
  {
    LOBYTE(a3) = a4;
    LOBYTE(a2) = result;
    return CcScheduleLazyWriteScanVolume(v5, a2, a3);
  }
  else
  {
    v7 = a1[1292];
    if ( !v7 || (_BYTE)a3 )
    {
      if ( a4 )
        v8 = 8LL;
      else
        v8 = v7 != 0 ? 16 : 4;
      if ( (_BYTE)a3 )
      {
        result = CcNotifyWriteBehindInternal(a1, v8);
        v9 = a1 + 1049;
      }
      else
      {
        v9 = a1 + 1049;
        if ( !a1[1049] )
        {
          if ( !a1[1048] )
            KeBugCheckEx(0x34u, 0x363uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a1 + 984), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v9 = 1;
    }
  }
  return result;
}
