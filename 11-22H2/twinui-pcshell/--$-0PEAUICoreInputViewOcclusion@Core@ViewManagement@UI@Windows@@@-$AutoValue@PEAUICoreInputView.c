/*
 * XREFs of ??$?0PEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@?$AutoValue@PEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAJ@Z @ 0x1802DCA06
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@_N@Z @ 0x180524474 (-InsertAtInternal@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$Default.c)
 *     ?SetAt@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x18052AB30 (-SetAt@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPre.c)
 * Callees:
 *     ??$Construct@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAU23456@@Z @ 0x1802DCA3E (--$Construct@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@X.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::AutoValue<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
