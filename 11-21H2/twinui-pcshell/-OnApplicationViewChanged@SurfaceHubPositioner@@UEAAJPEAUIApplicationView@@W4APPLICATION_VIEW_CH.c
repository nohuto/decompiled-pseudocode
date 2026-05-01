/*
 * XREFs of ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180150F00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1804ED95C (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804EDC08 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804EDCE4 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EE358 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  SurfaceHubPositioner *v7; // rsi
  int IsViewManaged; // ebx
  __int64 v9; // rdx
  SurfaceHubPositioner *v10; // rsi
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(struct IApplicationView *, __int64); // rbx
  __int64 AddressOf; // rax
  int MonitorForLaunch; // eax
  struct IImmersiveMonitor **v15; // rax
  struct IUnknown *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IUnknown *v18; // [rsp+40h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(a1 + 448) )
    return 0LL;
  v5 = a3 - 7;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v7 = (SurfaceHubPositioner *)(a1 - 128);
        IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v18);
        if ( IsViewManaged < 0 )
        {
          v9 = 426LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)IsViewManaged);
          return (unsigned int)IsViewManaged;
        }
        if ( (_BYTE)v18 )
          SurfaceHubPositioner::_OnSizeConstraintsChanged(v7, a2);
      }
      return 0LL;
    }
  }
  v10 = (SurfaceHubPositioner *)(a1 - 128);
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v18);
  if ( IsViewManaged < 0 )
  {
    v9 = 405LL;
    goto LABEL_12;
  }
  if ( !(_BYTE)v18 )
    return 0LL;
  v16[0] = 0LL;
  v18 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v16);
  MonitorForLaunch = v12(a2, AddressOf);
  IsViewManaged = MonitorForLaunch;
  if ( MonitorForLaunch >= 0 )
  {
    v15 = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v18);
    MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(v10, a2, v15);
    IsViewManaged = MonitorForLaunch;
    if ( MonitorForLaunch >= 0 )
    {
      if ( !(unsigned int)SHIsSameObject(v16[0], v18) )
        SurfaceHubPositioner::_SetDefaultLayout(v10, a2, 0);
      (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      return 0LL;
    }
    v11 = 411LL;
  }
  else
  {
    v11 = 410LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)MonitorForLaunch);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
  return (unsigned int)IsViewManaged;
}
