/*
 * XREFs of ??$copy_to@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAU?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1804BB1A0
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1A70 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?SetNonShownViews@ViewEventArgsForWindowingSettings@@UEAAJPEAU?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1804C9E90 (-SetNonShownViews@ViewEventArgsForWindowingSettings@@UEAAJPEAU-$IVectorView@PEAUIViewWrapper@Vie.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CFCC0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::copy_to<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
