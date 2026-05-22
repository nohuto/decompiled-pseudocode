/*
 * XREFs of ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801A4144
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A3050 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1801A3A34 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A511C (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801A6128 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6620 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801A6C84 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1801A7130 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x1801A7308 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct tagPOINT __fastcall ControllerProcessor::GetCursorPosition(ControllerProcessor *this, struct tagPOINT *a2)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( IsEdition(8778LL) )
  {
    GetCursorPos(a2);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 939) + 88LL))(
           *((_QWORD *)this + 939),
           *((unsigned int *)this + 710),
           1LL);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x565,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        (int)a2);
  }
  return (struct tagPOINT)a2;
}
