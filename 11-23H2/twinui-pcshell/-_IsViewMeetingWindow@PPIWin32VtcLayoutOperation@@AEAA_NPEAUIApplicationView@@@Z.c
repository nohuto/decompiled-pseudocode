/*
 * XREFs of ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0D0
 * Callers:
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1805CDFF0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1805CE7E0 (std--_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT__ea_1805CE7E0.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1805CF564 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CF740 (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x1805CEF34 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 */

bool __fastcall PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
        PPIWin32VtcLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 v4; // rax
  HWND v5; // rsi
  bool v6; // bl
  DWORD WindowThreadProcessId; // esi
  PPIWin32VtcLayoutOperation *v9; // rcx
  int ViewThreadId; // eax
  struct IApplicationView *v11; // rdx
  const char *v12; // r9
  bool result; // al
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)this + 216LL))(this);
  v5 = (HWND)v4;
  v6 = 0;
  if ( !a2 )
    return 0;
  if ( !v4 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *)))(*(_QWORD *)this + 168LL))(
         this,
         a2) )
  {
    return 0;
  }
  try
  {
    WindowThreadProcessId = GetWindowThreadProcessId(v5, 0LL);
    ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(v9, a2, &v16);
    if ( ViewThreadId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)ViewThreadId,
        v14);
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
           v11) )
    {
      v6 = WindowThreadProcessId == v16;
    }
    result = v6;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x34E,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      v12);
    return 0;
  }
  return result;
}
