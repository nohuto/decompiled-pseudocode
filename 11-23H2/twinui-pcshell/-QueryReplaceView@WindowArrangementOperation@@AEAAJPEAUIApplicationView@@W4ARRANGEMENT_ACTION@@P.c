/*
 * XREFs of ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805C8F5C
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805C8D48 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18056FD5C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180792220 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementOperation::QueryReplaceView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, bool, GUID *, __int64 *); // rbx
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+40h] BYREF

  v18[0] = 0LL;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(__int64 (__fastcall **)(__int64, bool, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v18);
  ViewLayoutBehaviorFlags = v9(v8, a3 != 3, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v18);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags >= 0 )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v21);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 258LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    v13 = v18[0];
    v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18[0] + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    v15 = v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v20);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              v20,
              a2,
              v21);
      v11 = v15;
      if ( v15 >= 0 )
      {
        CAppLayoutOperation::_AddAnimationData(a1 + 24, v20, 1LL);
        *a4 |= 4u;
        v11 = 0;
        goto LABEL_12;
      }
      v16 = 262LL;
    }
    else
    {
      v16 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)v15);
LABEL_12:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    goto LABEL_13;
  }
  v12 = 254LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)ViewLayoutBehaviorFlags);
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v18);
  return v11;
}
