/*
 * XREFs of ??$IterateOnChunks@V_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_@@V_lambda_4ff9c8b0452bb8e10a23cfbb045e1d9b_@@@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_@@V_lambda_4ff9c8b0452bb8e10a23cfbb045e1d9b_@@@Z @ 0x180149F88
 * Callers:
 *     ?HasKey@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18014BCF0 (-HasKey@-$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-.c)
 * Callees:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18014B464 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$.c)
 *     ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18014BE00 (-HasKey@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@W.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::IterateOnChunks<_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_,_lambda_4ff9c8b0452bb8e10a23cfbb045e1d9b_>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // di
  __int64 result; // rax
  _QWORD *v6; // rsi

  v2 = 0;
  result = 0LL;
  while ( !v2 )
  {
    if ( !a1 || !*(_DWORD *)(a1 + 104) )
      return 0LL;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Force(a1);
    if ( (int)result < 0 )
      return result;
    v6 = *(_QWORD **)(a2 + 8);
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::HasKey(
               *(_QWORD *)(a1 + 80),
               **(_QWORD **)a2,
               *v6);
    if ( (int)result < 0 )
      return result;
    v2 = *(_BYTE *)*v6 != 0;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return result;
}
