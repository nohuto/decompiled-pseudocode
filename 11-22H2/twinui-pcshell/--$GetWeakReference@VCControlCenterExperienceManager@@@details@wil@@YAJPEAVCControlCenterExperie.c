/*
 * XREFs of ??$GetWeakReference@VCControlCenterExperienceManager@@@details@wil@@YAJPEAVCControlCenterExperienceManager@@PEAPEAUIWeakReference@@@Z @ 0x180137040
 * Callers:
 *     ??$com_weak_query@AEBQEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEBQEAVCControlCenterExperienceManager@@@Z @ 0x180136D84 (--$com_weak_query@AEBQEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180136FEC (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DC50C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILi_ea_1800DC50C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::GetWeakReference<CControlCenterExperienceManager>(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>>(
         a1,
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  return (unsigned int)v3;
}
