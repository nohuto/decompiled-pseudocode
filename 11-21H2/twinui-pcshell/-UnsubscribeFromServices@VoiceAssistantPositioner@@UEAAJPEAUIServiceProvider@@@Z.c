/*
 * XREFs of ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A9580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::UnsubscribeFromServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) && *((_DWORD *)this + 38) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v3)(
           *v3,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
      return v5;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((unsigned int *)this + 38));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3);
  *((_DWORD *)this + 38) = 0;
  v6 = *((_QWORD *)this + 20);
  if ( v6 && *((_DWORD *)this + 42) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 42) = 0;
  SmartCookie::Unregister((VoiceAssistantPositioner *)((char *)this + 200));
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 24);
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
  {
    if ( *((_DWORD *)this + 46) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  *((_DWORD *)this + 46) = 0;
  return 0LL;
}
