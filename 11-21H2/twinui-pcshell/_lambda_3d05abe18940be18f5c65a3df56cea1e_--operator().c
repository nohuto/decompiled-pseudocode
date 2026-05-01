/*
 * XREFs of _lambda_3d05abe18940be18f5c65a3df56cea1e_::operator() @ 0x180514BD0
 * Callers:
 *     _lambda_3d05abe18940be18f5c65a3df56cea1e_::_lambda_invoker_cdecl_ @ 0x180514620 (_lambda_3d05abe18940be18f5c65a3df56cea1e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8 (-IsOperableWindow@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_3d05abe18940be18f5c65a3df56cea1e_::operator()(__int64 a1, HWND a2, HWND **a3)
{
  HWND *v5; // rax

  if ( !IsWindowVisible(a2) || IsOperableWindow(a2) )
    return 1LL;
  if ( GetPropA(a2, "CALL_MONITOR") )
  {
    v5 = *a3;
LABEL_7:
    *v5 = a2;
    return !**a3 || !*a3[1];
  }
  if ( GetPropA(a2, "SHARING_TOOLBAR") )
  {
    v5 = a3[1];
    goto LABEL_7;
  }
  return !**a3 || !*a3[1];
}
