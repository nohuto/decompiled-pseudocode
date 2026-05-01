/*
 * XREFs of ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1803B5034
 * Callers:
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1803BA0F8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1803B6158 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 */

__int64 __fastcall CAppViewManager::UnensureApplication(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3)
{
  int GlomForWindow; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct IImmersiveApplicationInternal *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v12; // [rsp+68h] [rbp+20h] BYREF

  v10[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v10);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, v10, &v12);
  v7 = GlomForWindow;
  if ( GlomForWindow >= 0 )
  {
    GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)this + 15) + 96LL))(
                      *((_QWORD *)this + 15),
                      a2,
                      v10[0],
                      a3,
                      0LL);
    v7 = GlomForWindow;
    if ( GlomForWindow >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *))(**((_QWORD **)this + 15) + 176LL))(
        *((_QWORD *)this + 15),
        a3);
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 1032LL;
  }
  else
  {
    v8 = 1023LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)GlomForWindow);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v10);
  return v7;
}
