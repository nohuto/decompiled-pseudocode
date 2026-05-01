/*
 * XREFs of ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x180516A00
 * Callers:
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1805159A0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x180516110 (std--_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT__ea_180516110.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180516E64 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x18051703C (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x180516864 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 */

bool __fastcall PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
        PPIWin32VtcLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v3; // bl
  int ViewThreadId; // eax
  int v5; // eax
  struct IApplicationView *v6; // rdx
  const char *v7; // r9
  bool result; // al
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PPIWin32VtcLayoutOperation *v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = this;
  v3 = 0;
  if ( !a2
    || !PPIWin32VtcLayoutOperation::_vtcSidebarView
    || PPIWin32VtcLayoutOperation::_vtcSidebarView == (struct IApplicationView *)a2 )
  {
    return 0;
  }
  try
  {
    ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(this, a2, (unsigned int *)&v11);
    if ( ViewThreadId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)ViewThreadId,
        v9);
    v5 = PPIWin32VtcLayoutOperation::_GetViewThreadId(
           retaddr,
           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))PPIWin32VtcLayoutOperation::_vtcSidebarView,
           &v12);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v5,
        v9);
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
           v6) )
    {
      v3 = v12 == (_DWORD)v11;
    }
    result = v3;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x331,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      v7);
    return 0;
  }
  return result;
}
