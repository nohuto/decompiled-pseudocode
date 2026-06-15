/*
 * XREFs of _Init_thread_footer @ 0x140028758
 * Callers:
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000D0E0 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x14001796C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x14006F390 (-GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
