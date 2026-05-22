/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAJPEAPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x18014C378
 * Callers:
 *     ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740 (-TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject.c)
 *     ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@Composition@UI@5@@Z @ 0x18014C3C0 (-Lookup@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$Defaul.c)
 *     ?get_Value@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUICompositionAnimationBase@Composition@UI@5@@Z @ 0x18014D890 (-get_Value@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Localize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_180220AD0 + 40LL))(
           qword_180220AD0,
           *(unsigned int *)(a1 + 4),
           &GUID_1c2c2999_e818_48d3_a6dd_d78c82f8ace9,
           a2);
}
