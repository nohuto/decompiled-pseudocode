/*
 * XREFs of RawEndOperation @ 0x14032217C
 * Callers:
 *     RawCompletionRoutine @ 0x1403220E0 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x140791954 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x140792008 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140882194 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B83A4 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B8428 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B86D4 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B8778 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
}
