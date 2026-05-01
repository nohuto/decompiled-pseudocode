/*
 * XREFs of ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C274
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C644 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18001C314 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x18001CBC8 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x180238C02 (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncTabProxyWindows(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3)
{
  int v4; // edx
  unsigned __int64 v5; // rbx
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v6; // rax
  unsigned __int64 i; // rsi
  int v8; // edx
  __int64 v9; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v10; // rax
  __int64 v11; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v12; // rax
  int pExceptionObject; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 && (v8 = v4 - 1) != 0 )
    {
      if ( v8 != 1 )
      {
        pExceptionObject = -2147467263;
        throw (long *)&pExceptionObject;
      }
      v5 = 0LL;
    }
    else
    {
      v5 = a1[23];
      if ( a3 < v5 )
        v5 = a3;
    }
  }
  else
  {
    v5 = a1[23];
  }
  if ( a1[5] )
  {
    v6 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                               a1 + 3,
                                                                               *(_QWORD *)(a1[20]
                                                                                         + 8 * (a1[22] & (a1[21] - 1LL))));
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v6, 1);
  }
  for ( i = 1LL; i < v5; ++i )
  {
    v9 = std::deque<winrt::guid>::at(a1 + 19, i);
    v10 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                v9);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v10, 0);
  }
  while ( v5 < a1[23] )
  {
    v11 = std::deque<winrt::guid>::at(a1 + 19, v5);
    v12 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                v11);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v12, 1);
    ++v5;
  }
}
