/*
 * XREFs of _lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator() @ 0x1802F4074
 * Callers:
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800288EC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     wil::details::lambda_call__lambda_3a9e679f41fabe06be00bfd1589ed9cc___::_lambda_call__lambda_3a9e679f41fabe06be00bfd1589ed9cc___ @ 0x1802F3B78 (wil--details--lambda_call__lambda_3a9e679f41fabe06be00bfd1589ed9cc___--_lambda_call__lambda_3a9e.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(HWND **a1)
{
  RemovePropW(**a1, L"TryPositionView");
  RemovePropW(**a1, L"TryPositionView.Left");
  RemovePropW(**a1, L"TryPositionView.Top");
  RemovePropW(**a1, L"TryPositionView.Right");
  RemovePropW(**a1, L"TryPositionView.Bottom");
  return RemovePropW(**a1, L"TryPositionView.Flags");
}
