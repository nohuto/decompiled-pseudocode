/*
 * XREFs of RawBeginOperation @ 0x14032204C
 * Callers:
 *     RawReadWriteDeviceControl @ 0x140791B44 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1407921F8 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1408823D4 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B85A4 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B88D4 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B8978 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140322090 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 208);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
  return result;
}
