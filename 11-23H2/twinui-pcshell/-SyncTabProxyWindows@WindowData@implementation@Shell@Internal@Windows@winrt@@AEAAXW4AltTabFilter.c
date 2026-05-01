/*
 * XREFs of ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180034764
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18003369C (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x180034A40 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1802E7F9A (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncTabProxyWindows(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3)
{
  int v5; // edx
  int v6; // edx
  unsigned __int64 v7; // rbx
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v8; // rax
  unsigned __int64 i; // rsi
  char IsEnabled; // al
  __int64 v11; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v12; // rax
  __int64 v13; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v14; // rax
  int pExceptionObject; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl);
    v7 = a1[23];
    if ( !IsEnabled )
      goto LABEL_7;
    goto LABEL_5;
  }
  v5 = a2 - 1;
  if ( !v5 || (v6 = v5 - 1) == 0 )
  {
    v7 = a1[23];
LABEL_5:
    if ( a3 < v7 )
      v7 = a3;
    goto LABEL_7;
  }
  if ( v6 != 1 )
  {
    pExceptionObject = -2147467263;
    throw (long *)&pExceptionObject;
  }
  v7 = 0LL;
LABEL_7:
  if ( a1[5] )
  {
    v8 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                               a1 + 3,
                                                                               *(_QWORD *)(a1[20]
                                                                                         + 8 * (a1[22] & (a1[21] - 1LL))));
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v8, 1);
  }
  for ( i = 1LL; i < v7; ++i )
  {
    v11 = std::deque<winrt::guid>::at(a1 + 19, i);
    v12 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                v11);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v12, 0);
  }
  while ( v7 < a1[23] )
  {
    v13 = std::deque<winrt::guid>::at(a1 + 19, v7);
    v14 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                v13);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v14, 1);
    ++v7;
  }
}
