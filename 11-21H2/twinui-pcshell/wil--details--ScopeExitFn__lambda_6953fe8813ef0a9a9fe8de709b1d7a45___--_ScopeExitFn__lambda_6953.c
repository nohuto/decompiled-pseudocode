/*
 * XREFs of wil::details::ScopeExitFn__lambda_6953fe8813ef0a9a9fe8de709b1d7a45___::_ScopeExitFn__lambda_6953fe8813ef0a9a9fe8de709b1d7a45___ @ 0x18049BC0C
 * Callers:
 *     _CAppThumbnailWindow::Initialize_::_1_::dtor$1 @ 0x18049D113 (_CAppThumbnailWindow--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_6953fe8813ef0a9a9fe8de709b1d7a45___::_ScopeExitFn__lambda_6953fe8813ef0a9a9fe8de709b1d7a45___(
        _BYTE *a1)
{
  BOOL result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return DestroyWindow(*(HWND *)(*(_QWORD *)a1 + 160LL));
  }
  return result;
}
