/*
 * XREFs of _lambda_ee220ff7548bede1c40267f3ce601e5d_::operator() @ 0x1805CD460
 * Callers:
 *     _lambda_ee220ff7548bede1c40267f3ce601e5d_::_lambda_invoker_cdecl_ @ 0x1805CCB10 (_lambda_ee220ff7548bede1c40267f3ce601e5d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18056FECC (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_ee220ff7548bede1c40267f3ce601e5d_::operator()(
        __int64 a1,
        TabletModePositionerHelpers *a2,
        TabletModePositionerHelpers ***a3)
{
  HWND v5; // rdx
  unsigned int v6; // ebx

  v6 = 0;
  if ( !IsWindowVisible((HWND)a2) || TabletModePositionerHelpers::IsOperableWindow(a2, v5) )
    return 1LL;
  if ( GetPropA((HWND)a2, "CALL_MONITOR") )
  {
    **a3 = a2;
  }
  else if ( GetPropA((HWND)a2, "SHARING_TOOLBAR") )
  {
    *a3[1] = a2;
  }
  if ( !**a3 )
    return 1LL;
  LOBYTE(v6) = *a3[1] == 0LL;
  return v6;
}
