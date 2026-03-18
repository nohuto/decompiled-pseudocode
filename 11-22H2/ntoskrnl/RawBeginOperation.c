/*
 * XREFs of RawBeginOperation @ 0x140321BDC
 * Callers:
 *     RawReadWriteDeviceControl @ 0x140791E64 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x140792518 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140882664 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B8454 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B84D8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B8784 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B8828 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20 (ExAcquireRundownProtectionCacheAwareEx.c)
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
