/*
 * XREFs of ?IsVisible@FallbackFlyoutView@@UEAA_NXZ @ 0x1806C4420
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1806C23AC (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 */

bool __fastcall FallbackFlyoutView::IsVisible(FallbackFlyoutView *this, const unsigned __int16 *a2)
{
  __int64 WindowByPropertyName; // rax
  char v3; // bl
  HWND v4; // rdi
  const char *v5; // r9
  int v7; // [rsp+20h] [rbp-28h] BYREF
  int *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFallback", a2);
  v3 = 0;
  v4 = (HWND)WindowByPropertyName;
  if ( WindowByPropertyName )
  {
    v11 = 0;
    v8 = &v11;
    v7 = 18;
    v9 = 4;
    if ( !(unsigned int)GetWindowCompositionAttribute(WindowByPropertyName, &v7) )
    {
      wil::details::in1diag3::Log_GetLastError(
        retaddr,
        (void *)0x2D,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
        v5);
      v11 = 0;
    }
    if ( IsWindowVisible(v4) && !v11 )
      v3 = 1;
    LOBYTE(WindowByPropertyName) = v3;
  }
  return WindowByPropertyName;
}
