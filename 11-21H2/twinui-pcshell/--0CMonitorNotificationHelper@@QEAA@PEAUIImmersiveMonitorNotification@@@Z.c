/*
 * XREFs of ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x18015BF24
 * Callers:
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18015BE84 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x18015BF94 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CMonitorNotificationHelper *__fastcall CMonitorNotificationHelper::CMonitorNotificationHelper(
        CMonitorNotificationHelper *this,
        struct IImmersiveMonitorNotification *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>();
  *(_QWORD *)this = &CMonitorNotificationHelper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitorNotification *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return this;
}
