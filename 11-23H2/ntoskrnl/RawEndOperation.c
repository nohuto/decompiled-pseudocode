/*
 * XREFs of RawEndOperation @ 0x14032240C
 * Callers:
 *     RawCompletionRoutine @ 0x140322370 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x140791B44 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1407921F8 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1408823D4 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B85A4 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B88D4 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B8978 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
}
