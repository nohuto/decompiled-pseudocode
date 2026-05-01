/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180074420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800759D4 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  void (__fastcall *v10)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IUnknown *v12; // rbx
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v18; // rax
  struct IUnknown *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v22; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 208) )
    return 0LL;
  if ( !a4 )
    return 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88), a4, &v22) < 0 )
    return 0LL;
  if ( !v22 )
    return 0LL;
  v7 = 1;
  if ( a3 != 1 )
    return 0LL;
  v19 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v9 = *(_QWORD *)(a1 + 72);
    v10 = *(void (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v9 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v19);
    v10(v9, ForegroundWindow, AddressOf);
  }
  v20 = 0LL;
  v12 = v19;
  if ( !v19 )
    goto LABEL_9;
  QueryInterface = v19->lpVtbl[11].QueryInterface;
  v18 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v20);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v12, v18) < 0
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) != 3 )
  {
    v12 = v19;
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v12 = v19;
LABEL_10:
  if ( a5 == 2 )
  {
    if ( v7 )
    {
LABEL_14:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
      return 0LL;
    }
    v13 = (unsigned int)SHIsSameObject(v12, *(struct IUnknown **)(a1 + 96)) == 0;
  }
  else
  {
    v13 = v7 == 0;
  }
  if ( !v13 )
    goto LABEL_14;
  v14 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144));
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_14;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F0,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v14,
    (int)v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  return v15;
}
