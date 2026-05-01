/*
 * XREFs of ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18017E7B4
 * Callers:
 *     ?OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z @ 0x1800E99B0 (-OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18017E360 (-OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18017E460 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x18017E5D0 (-GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z.c)
 *     ?GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z @ 0x18017E610 (-GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z.c)
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18017E670 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ValidateThread(CImmersiveShellCreationBehavior *this)
{
  if ( !*((_DWORD *)this + 16) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 16, GetCurrentThreadId(), 0);
  return GetCurrentThreadId() != *((_DWORD *)this + 16) ? 0x8001010E : 0;
}
