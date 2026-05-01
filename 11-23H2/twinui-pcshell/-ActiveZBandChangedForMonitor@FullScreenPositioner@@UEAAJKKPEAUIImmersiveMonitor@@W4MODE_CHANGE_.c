/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800DE770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800DF470 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  char v7; // si
  HWND ForegroundWindow; // r15
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, HWND, struct IUnknown **); // rbx
  struct IUnknown *v11; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // ebx
  struct IUnknown *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v20; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 184) )
    return 0LL;
  if ( !a4 )
    return 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 80) + 96LL))(*(_QWORD *)(a1 + 80), a4, &v20) < 0 )
    return 0LL;
  if ( !v20 )
    return 0LL;
  v7 = 1;
  if ( a3 != 1 )
    return 0LL;
  v17 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(void (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v9 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
    v10(v9, ForegroundWindow, &v17);
  }
  v18 = 0LL;
  v11 = v17;
  if ( !v17 )
    goto LABEL_12;
  QueryInterface = v17->lpVtbl[11].QueryInterface;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v11, &v18) < 0
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18) != 3 )
  {
    v11 = v17;
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  v11 = v17;
LABEL_13:
  if ( a5 == 2 )
  {
    if ( v7 )
    {
LABEL_17:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      return 0LL;
    }
    v13 = (unsigned int)SHIsSameObject(v11, *(struct IUnknown **)(a1 + 88)) == 0;
  }
  else
  {
    v13 = v7 == 0;
  }
  if ( !v13 )
    goto LABEL_17;
  v14 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 136));
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_17;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B1,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v14,
    (int)v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  return v15;
}
