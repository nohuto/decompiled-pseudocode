/*
 * XREFs of ?CurrentSnappingMode@SnapLayoutProvider@@QEBA?AW4WINDOW_SNAPPING_MODE@@XZ @ 0x1805ACCF8
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapLayoutProvider::CurrentSnappingMode(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 24);
  if ( !v4 )
    return 1LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 1LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 2LL;
  if ( v6 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1ED,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      a4);
  return 3LL;
}
