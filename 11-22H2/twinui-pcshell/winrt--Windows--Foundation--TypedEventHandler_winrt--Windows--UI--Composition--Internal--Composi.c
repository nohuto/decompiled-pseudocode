/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_eb02d5272acc639a9001bc530d909dad___ @ 0x1805544C0
 * Callers:
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_eb02d5272acc639a9001bc530d909dad___(
        _QWORD *a1,
        __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x28uLL);
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[1] = *(_QWORD *)a2;
  v6[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *((_BYTE *)v6 + 24) = *(_BYTE *)(a2 + 16);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 8) = 1;
  *v6 = off_1807C70F0;
  *a1 = v6;
  v4 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  return a1;
}
