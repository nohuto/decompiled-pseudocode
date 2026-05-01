/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804EC7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB4C0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::SwapPositionersForViews(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const struct _GUID *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 i; // r14
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v18; // eax
  __int64 *AddressOf; // rax
  int PositionerPriorityForView; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  struct IApplicationView *v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v34; // [rsp+A0h] [rbp+40h] BYREF
  void *v35; // [rsp+B8h] [rbp+58h] BYREF

  v32 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  v8 = v7(v6, &v32);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
    v12 = CEnumerableObjectCollection::CreateInstance(v11, v10, &v35);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 302LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_31:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
      goto LABEL_32;
    }
    v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v35 + 48LL))(v35, v32);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 303LL;
      goto LABEL_9;
    }
    v12 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, &v34);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 306LL;
      goto LABEL_9;
    }
    if ( v34 )
    {
      v14 = v34 - 1;
      for ( i = v34; i; --i )
      {
        v29 = 0LL;
        v16 = v35;
        v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v35 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
        v18 = v17(v16, v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v29);
        if ( v18 >= 0 )
        {
          v30 = 0LL;
          AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v30);
          PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                        (ShellPositionerManager *)(a1 - 88),
                                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29,
                                        (struct IShellPositionerPriority **)AddressOf);
          v21 = PositionerPriorityForView;
          if ( PositionerPriorityForView >= 0 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30) != a2 )
            {
              v22 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v14);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x142,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                  (const char *)(unsigned int)v22);
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v30 + 56LL))(v30, a2, a3);
            ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)(a1 - 88), v29);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x13B,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)PositionerPriorityForView);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          if ( v21 >= 0 )
            goto LABEL_23;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x137,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v18);
        }
        v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v14);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x152,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v23);
LABEL_23:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
        --v14;
      }
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    v24 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v35)(
            v35,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            &v31);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v27 = ShellPositionerManager::PerformPositionerHandoff(a1 - 88, v31, 0LL, 0LL, 0LL, a2, a3);
      v9 = v27;
      if ( v27 >= 0 )
      {
        v9 = 0;
        goto LABEL_30;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33E,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v27);
      v25 = v9;
      v26 = 345LL;
    }
    else
    {
      v25 = (unsigned int)v24;
      v26 = 344LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v25);
LABEL_30:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  return v9;
}
