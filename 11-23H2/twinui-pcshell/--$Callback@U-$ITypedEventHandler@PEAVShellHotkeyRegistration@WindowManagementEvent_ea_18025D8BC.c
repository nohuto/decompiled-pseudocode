/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@V_lambda_a7e8f136509c081bfb58615afc7c7065_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_a7e8f136509c081bfb58615afc7c7065_@@@Z @ 0x18025D8BC
 * Callers:
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FDE10 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@V_lambda_a7e8f136509c081bfb58615afc7c7065_@@$0?0PEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@PEAUIShellHotkeyRegistration@2345@@Internal@Foundation@Windows@@UShellHotkeyEventArgs@WindowManagementEvents@Shell@24@@Foundation@Windows@@EAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_a7e8f136509c081bfb58615afc7c7065_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@V_lambda_a7e8f136509c081bfb58615afc7c7065_@@$0?0PEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@PEAUIShellHotkeyRegistration@2345@@Internal@Foundation@Windows@@UShellHotkeyEventArgs@WindowManagementEvents@Shell@24@@Foundation@Windows@@EAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_a7e8f136509c081bfb58615afc7c7065_@@@Z @ 0x18025DD44 (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVShellHotkeyRegistration@W_ea_18025DD44.c)
 */

volatile int **__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>,_lambda_a7e8f136509c081bfb58615afc7c7065_>(
        volatile int **a1)
{
  volatile int **v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile int **)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *>,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>,_lambda_a7e8f136509c081bfb58615afc7c7065_,-1,Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>,_lambda_a7e8f136509c081bfb58615afc7c7065_>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
      v4,
      v3);
  }
  return a1;
}
