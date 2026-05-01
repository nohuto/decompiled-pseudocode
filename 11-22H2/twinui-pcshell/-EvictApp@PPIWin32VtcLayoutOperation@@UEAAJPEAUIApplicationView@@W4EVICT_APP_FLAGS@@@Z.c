/*
 * XREFs of ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805CD6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1805CCE64 (--$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805CEB40 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1805CF564 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180792220 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::EvictApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPIWin32VtcLayoutOperation *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r13d
  int EvictAppFromLayout; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  LANGID ThreadUILanguage; // ax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int WindowForView; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v6 = (PPIWin32VtcLayoutOperation *)(a1 - 176);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  v10 = EvictAppFromLayout;
  if ( EvictAppFromLayout < 0 )
  {
    v11 = 89LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)EvictAppFromLayout);
    goto LABEL_18;
  }
  LOBYTE(WindowForView) = 0;
  EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(v6, a2, (bool *)&WindowForView);
  v10 = EvictAppFromLayout;
  if ( EvictAppFromLayout < 0 )
  {
    v11 = 93LL;
    goto LABEL_16;
  }
  CAppLayoutOperation::_AddAnimationData(a1 - 152, a2, 8 * (a3 & 1u) + 2);
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 2) == 0
    && (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, _QWORD))(*(_QWORD *)v6 + 88LL))(
         v6,
         1LL,
         0LL) )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
    if ( (int)PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(v6, 0LL, &v17, 0LL, v7) >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v17);
      CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  }
  if ( (_BYTE)WindowForView )
  {
    EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)v6 + 192LL))(
                           v6,
                           2LL);
    v10 = EvictAppFromLayout;
    if ( EvictAppFromLayout < 0 )
    {
      v11 = 114LL;
      goto LABEL_16;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)v6 + 168LL))(
         v6,
         a2) )
  {
    ThreadUILanguage = GetThreadUILanguage();
    v13 = IsBiDiLocale(ThreadUILanguage);
    PPIWin32VtcLayoutOperation::_sideBarLocation = v13 == 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
                      (struct IApplicationView *)(v13 == 0));
    TabletModeTelemetry::PPIWin32Vtc_SideBarEvicted<unsigned int>(&WindowForView);
    EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)v6 + 200LL))(v6);
    v10 = EvictAppFromLayout;
    if ( EvictAppFromLayout < 0 )
    {
      v11 = 126LL;
      goto LABEL_16;
    }
  }
  v10 = 0;
LABEL_18:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
