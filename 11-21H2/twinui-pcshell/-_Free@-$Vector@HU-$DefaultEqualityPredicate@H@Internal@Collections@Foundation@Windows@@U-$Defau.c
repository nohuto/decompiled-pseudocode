/*
 * XREFs of ?_Free@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@CAXPEAHI@Z @ 0x18033C1D8
 * Callers:
 *     ?Clear@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18032DB20 (-Clear@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$Defau.c)
 *     ?_EraseAll@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAHPEAI@Z @ 0x18033BE30 (-_EraseAll@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$D.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::_Free(
        void *a1)
{
  if ( a1 )
    free(a1);
}
