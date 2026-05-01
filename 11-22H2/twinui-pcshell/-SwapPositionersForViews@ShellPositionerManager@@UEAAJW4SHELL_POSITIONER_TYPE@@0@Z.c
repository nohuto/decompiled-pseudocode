/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1805A48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18001718C (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1805A3468 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
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
  int PositionerPriorityForView; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // eax
  struct IShellPositionerPriority *v28; // [rsp+40h] [rbp-20h] BYREF
  struct IApplicationView *v29; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v33; // [rsp+A0h] [rbp+40h] BYREF
  void *v34; // [rsp+B8h] [rbp+58h] BYREF

  v31 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  v8 = v7(v6, &v31);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    v12 = CEnumerableObjectCollection::CreateInstance(v11, v10, &v34);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 310LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_31:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
      goto LABEL_32;
    }
    v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 48LL))(v34, v31);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 311LL;
      goto LABEL_9;
    }
    v12 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v33);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 314LL;
      goto LABEL_9;
    }
    if ( v33 )
    {
      v14 = v33 - 1;
      for ( i = v33; i; --i )
      {
        v29 = 0LL;
        v16 = v34;
        v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v34 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
        v18 = v17(v16, v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v29);
        if ( v18 >= 0 )
        {
          v28 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
          PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                        (ShellPositionerManager *)(a1 - 88),
                                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29,
                                        &v28);
          v20 = PositionerPriorityForView;
          if ( PositionerPriorityForView >= 0 )
          {
            if ( (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v28 + 24LL))(v28) != a2 )
            {
              v21 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v34 + 56LL))(v34, v14);
              if ( v21 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x14A,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                  (const char *)(unsigned int)v21);
            }
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD, _QWORD))(*(_QWORD *)v28 + 56LL))(
              v28,
              a2,
              a3);
            ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)(a1 - 88), v29);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x143,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)PositionerPriorityForView);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
          if ( v20 >= 0 )
            goto LABEL_23;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13F,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v18);
        }
        v22 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v34 + 56LL))(v34, v14);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15A,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v22);
LABEL_23:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
        --v14;
      }
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    v23 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v34)(
            v34,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            &v30);
    v9 = v23;
    if ( v23 >= 0 )
    {
      v26 = ShellPositionerManager::PerformPositionerHandoff(a1 - 88, v30, 0LL, 0LL, 0LL, a2, a3);
      v9 = v26;
      if ( v26 >= 0 )
      {
        v9 = 0;
        goto LABEL_30;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36A,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v26);
      v24 = v9;
      v25 = 353LL;
    }
    else
    {
      v24 = (unsigned int)v23;
      v25 = 352LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v24);
LABEL_30:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  return v9;
}
