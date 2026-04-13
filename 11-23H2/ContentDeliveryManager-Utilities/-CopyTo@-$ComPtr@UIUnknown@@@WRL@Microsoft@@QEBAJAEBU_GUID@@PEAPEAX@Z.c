/*
 * XREFs of ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006F398
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18006F3D0 (-CreateInstance@-$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@.c)
 *     ?CreateInstance@?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18006F460 (-CreateInstance@-$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@.c)
 *     ?CreateInstance@?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800789B0 (-CreateInstance@-$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 *     ?CreateInstance@?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C1450 (-CreateInstance@-$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
}
