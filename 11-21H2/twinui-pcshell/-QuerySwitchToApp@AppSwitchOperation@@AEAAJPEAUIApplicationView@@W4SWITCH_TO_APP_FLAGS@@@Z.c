/*
 * XREFs of ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18050F6FC
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x18050F14C (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x18050FE80 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18050FFB0 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804B358C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF968 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615920 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppSwitchOperation::QuerySwitchToApp(__int64 a1, struct IApplicationView *a2, int a3)
{
  LANGID ThreadUILanguage; // ax
  unsigned int v6; // r12d
  unsigned int v7; // edi
  unsigned int v8; // r13d
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v10; // rdx
  __int64 v12; // rcx
  unsigned int (__fastcall *v13)(__int64, __int64); // rax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v14; // rdx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, GUID *, int *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, GUID *, int *); // rdi
  int v34; // eax
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v39; // eax
  __int64 v40; // rdx
  int v41[2]; // [rsp+30h] [rbp-50h] BYREF
  int v42[4]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v43[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v41[0] = a3;
  ThreadUILanguage = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
  {
    v6 = 1;
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 1;
    v8 = 1;
  }
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)v42);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v10 = 230LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v43);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 88LL);
  if ( (v42[0] & 2) != 0 )
  {
    if ( v13(v12, 2LL) )
    {
      *(_QWORD *)v42 = 0LL;
      v15 = *(_QWORD *)(a1 + 64);
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v15 + 112LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v42);
      v17 = v16(v15, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v42);
      ViewLayoutBehaviorFlags = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v17);
LABEL_17:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v42);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      *(_QWORD *)v41 = 0LL;
      v18 = *(_QWORD *)v42;
      v19 = *(__int64 (__fastcall **)(__int64, GUID *, int *))(**(_QWORD **)v42 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v41);
      v20 = v19(v18, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v41);
      ViewLayoutBehaviorFlags = v20;
      if ( v20 < 0 )
      {
        v21 = 246LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v41);
        goto LABEL_17;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v41,
              a2,
              2LL);
      ViewLayoutBehaviorFlags = v20;
      if ( v20 < 0 )
      {
        v21 = 248LL;
        goto LABEL_16;
      }
      goto LABEL_18;
    }
    if ( ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v43, v14) == 1 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 253LL;
        goto LABEL_6;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(
                *(_QWORD *)(a1 + 64),
                1LL) != 2 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
      v23 = *(_QWORD *)(a1 + 64);
      if ( v22 == 1 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL))(v23, 4LL);
        v25 = *(__int64 **)(a1 + 64);
        v26 = v24 == 1;
        v27 = *v25;
        if ( v26 )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v27 + 248))(
                                      v25,
                                      0LL,
                                      a2,
                                      2LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 267LL;
            goto LABEL_6;
          }
        }
        else
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, __int64, _QWORD))(v27 + 232))(
                                      v25,
                                      a2,
                                      v7,
                                      2LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 271LL;
            goto LABEL_6;
          }
        }
      }
      else
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL))(v23, 4LL) )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                              + 240LL))(
                                      *(_QWORD *)(a1 + 64),
                                      0LL,
                                      0LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 281LL;
            goto LABEL_6;
          }
        }
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    v8,
                                    2LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v10 = 283LL;
          goto LABEL_6;
        }
      }
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 290LL;
        goto LABEL_6;
      }
    }
  }
  else if ( v13(v12, 2LL) )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
    v29 = *(_QWORD *)(a1 + 64);
    if ( v28 == 2 )
    {
      *(_QWORD *)v42 = 0LL;
      v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v29 + 112LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v42);
      v31 = v30(v29, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v42);
      ViewLayoutBehaviorFlags = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v31);
        goto LABEL_17;
      }
      *(_QWORD *)v41 = 0LL;
      v32 = *(_QWORD *)v42;
      v33 = *(__int64 (__fastcall **)(__int64, GUID *, int *))(**(_QWORD **)v42 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v41);
      v20 = v33(v32, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v41);
      ViewLayoutBehaviorFlags = v20;
      if ( v20 < 0 )
      {
        v21 = 304LL;
        goto LABEL_16;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v41,
              a2,
              1LL);
      ViewLayoutBehaviorFlags = v20;
      if ( v20 < 0 )
      {
        v21 = 305LL;
        goto LABEL_16;
      }
LABEL_18:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v41);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v42);
      return 0LL;
    }
    v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v29 + 80LL))(*(_QWORD *)(a1 + 64), 4LL);
    v35 = *(__int64 **)(a1 + 64);
    v26 = v34 == 1;
    v36 = *v35;
    if ( !v26 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, __int64, _QWORD))(v36 + 232))(
                                  v35,
                                  a2,
                                  v6,
                                  1LL,
                                  0LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 315LL;
        goto LABEL_6;
      }
      *(_QWORD *)v41 = 0LL;
      v37 = *(_QWORD *)(a1 + 64);
      v38 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v37 + 112LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v41);
      v39 = v38(v37, 0LL, 2LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v41);
      ViewLayoutBehaviorFlags = v39;
      if ( v39 >= 0 )
      {
        *(_OWORD *)v42 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v41 + 104LL))(*(_QWORD *)v41, 0LL, v42);
        v39 = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
        ViewLayoutBehaviorFlags = v39;
        if ( v39 >= 0 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v41);
          return 0LL;
        }
        v40 = 325LL;
      }
      else
      {
        v40 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v39);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v41);
      return (unsigned int)ViewLayoutBehaviorFlags;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v36 + 248))(
                                v35,
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 310LL;
      goto LABEL_6;
    }
  }
  else if ( (v41[0] & 4) != 0
         || (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 168LL))(
              *(_QWORD *)(a1 + 64),
              0LL,
              v41) < 0 )
  {
    ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 335LL;
      goto LABEL_6;
    }
  }
  else
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 341LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
