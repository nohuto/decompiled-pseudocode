/*
 * XREFs of ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFF14
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180016850 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFDB0 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_b150c4128798bf8cae8961d745166767_::operator() @ 0x1802114E8 (_lambda_b150c4128798bf8cae8961d745166767_--operator().c)
 *     ?InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x180211830 (-InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnk.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805A3520 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1805A3CA0 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::GetPositionerForMonitor(int a1, IUnknown *a2, const IID *a3, void **a4)
{
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rcx
  HRESULT Service; // eax
  HRESULT v13; // edi
  int v14; // [rsp+20h] [rbp-28h]
  void *v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a1;
  v15 = 0LL;
  if ( IUnknown_QueryService(
         a2,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &v15) < 0 )
  {
    Service = IUnknown_QueryService(a2, &c_positionersSIDs + v7, a3, a4);
    v13 = Service;
    if ( Service >= 0 )
      goto LABEL_3;
    v9 = -2147467262;
    if ( Service != -2147467262 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x552,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Service,
        v14);
      v9 = v13;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, const IID *, void **))(*(_QWORD *)v15 + 24LL))(
           v15,
           (unsigned int)v7,
           a3,
           a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
LABEL_3:
      v9 = 0;
      goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54A,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v14);
  }
LABEL_4:
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
