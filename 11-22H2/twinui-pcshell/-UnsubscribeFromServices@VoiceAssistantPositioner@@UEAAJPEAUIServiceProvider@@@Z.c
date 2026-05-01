/*
 * XREFs of ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801438C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::UnsubscribeFromServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rsi
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 144);
  v4 = (_DWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 18) && *v4 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v3)(
           *v3,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, (unsigned int)*v4);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3);
  *v4 = 0;
  v7 = *((_QWORD *)this + 20);
  v8 = (_DWORD *)((char *)this + 168);
  if ( v7 && *v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  *v8 = 0;
  SmartCookie::Unregister((VoiceAssistantPositioner *)((char *)this + 200));
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 24);
  v9 = (__int64 *)((char *)this + 176);
  v10 = *((_QWORD *)this + 22);
  v11 = (_DWORD *)((char *)this + 184);
  if ( v10 )
  {
    if ( *v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v9);
  *v11 = 0;
  return 0LL;
}
