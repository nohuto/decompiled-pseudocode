/*
 * XREFs of ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1804EB140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180075918 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::GetViewsForPositioner(
        __int64 a1,
        int a2,
        struct IApplicationView *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const struct _GUID *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int i; // esi
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, _QWORD, GUID *, ApplicationViewHelpers **); // rdi
  struct IImmersiveMonitor *v20; // r8
  __int64 *AddressOf; // rax
  void *v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v27; // [rsp+90h] [rbp+40h] BYREF
  ApplicationViewHelpers *v28; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v24 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v10 = v9(v8, &v24);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 24LL))(v24, &v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 381LL;
      goto LABEL_5;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
    v15 = CEnumerableObjectCollection::CreateInstance(v14, v13, &v23);
    v11 = v15;
    if ( v15 >= 0 )
    {
      for ( i = 0; i < v27; ++i )
      {
        v28 = 0LL;
        v18 = v24;
        v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v24 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
        if ( v19(v18, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v28) >= 0
          && (!a3 || ApplicationViewHelpers::IsViewOnMonitor(v28, a3, v20)) )
        {
          v25[0] = 0LL;
          AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(v25);
          if ( (int)ShellPositionerManager::GetPositionerPriorityForView(
                      (ShellPositionerManager *)(a1 - 88),
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v28,
                      (struct IShellPositionerPriority **)AddressOf) >= 0
            && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25[0] + 24LL))(v25[0]) == a2 )
          {
            (*(void (__fastcall **)(void *, ApplicationViewHelpers *))(*(_QWORD *)v23 + 40LL))(v23, v28);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v25);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
      }
      v15 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v23)(
              v23,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a4);
      v11 = v15;
      if ( v15 >= 0 )
        goto LABEL_20;
      v16 = 404LL;
    }
    else
    {
      v16 = 384LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
    goto LABEL_21;
  }
  v12 = 378LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return v11;
}
