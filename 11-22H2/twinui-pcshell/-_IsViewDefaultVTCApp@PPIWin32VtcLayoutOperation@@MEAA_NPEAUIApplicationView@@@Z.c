/*
 * XREFs of ?_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PPIWin32VtcLayoutOperation::_IsViewDefaultVTCApp(
        PPIWin32VtcLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  return PPISideBarHelpers::IsSideBarView(a2);
}
