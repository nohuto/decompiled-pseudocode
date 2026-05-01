/*
 * XREFs of ??0?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800F5040
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B508 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     _lambda_413f3f880149f4cff04c110e647cdbfa_::_lambda_413f3f880149f4cff04c110e647cdbfa_ @ 0x1801E7F1C (_lambda_413f3f880149f4cff04c110e647cdbfa_--_lambda_413f3f880149f4cff04c110e647cdbfa_.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473530 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
