/*
 * XREFs of ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x1802D2AD6
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804010E8 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180406D30 (-SetAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@.c)
 *     ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@0@Z @ 0x18061EA10 (-Initialize@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@I.c)
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18061EC50 (-Insert@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Found.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
        HSTRING *newString,
        HSTRING *a2,
        HRESULT *a3)
{
  HRESULT v5; // eax

  v5 = WindowsDuplicateString(*a2, newString);
  *a3 = v5;
  if ( v5 < 0 )
    *newString = 0LL;
  return newString;
}
