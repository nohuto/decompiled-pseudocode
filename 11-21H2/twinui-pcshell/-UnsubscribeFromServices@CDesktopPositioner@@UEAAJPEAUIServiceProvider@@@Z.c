/*
 * XREFs of ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18015AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015AF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::UnsubscribeFromServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::GetImpl'::`2'::impl,
    a2);
  SmartCookie::Unregister((CDesktopPositioner *)((char *)this + 336));
  if ( *((_DWORD *)this + 80) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 104LL))(*((_QWORD *)this + 29));
    *((_DWORD *)this + 80) = 0;
  }
  if ( *((_DWORD *)this + 81) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 80LL))(*((_QWORD *)this + 30));
    *((_DWORD *)this + 81) = 0;
  }
  if ( !*((_DWORD *)this + 83) )
    goto LABEL_9;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
         *((_QWORD *)this + 25),
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 208LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    return v4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 83));
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 209LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 83) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
LABEL_9:
  v5 = *((_QWORD *)this + 34);
  if ( !v5 )
  {
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
    return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
