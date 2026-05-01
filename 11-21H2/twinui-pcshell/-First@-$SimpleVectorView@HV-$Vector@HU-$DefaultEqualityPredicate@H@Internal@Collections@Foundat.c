/*
 * XREFs of ?First@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@H@345@@Z @ 0x18032E780
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_5a6f8de1252f14ad89c338f113c4f7cc_@@V_lambda_3d7b58ff6f06d62588ef32585ee0be74_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_5a6f8de1252f14ad89c338f113c4f7cc_@@AEBV_lambda_3d7b58ff6f06d62588ef32585ee0be74_@@@Z @ 0x180325AD8 (--$Do@V_lambda_5a6f8de1252f14ad89c338f113c4f7cc_@@V_lambda_3d7b58ff6f06d62588ef32585ee0be74_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<int,Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_5a6f8de1252f14ad89c338f113c4f7cc_,_lambda_3d7b58ff6f06d62588ef32585ee0be74_>(
           (unsigned int *)(a1 + 64),
           *(_QWORD *)(a1 + 56),
           (__int64)v3,
           &v4);
}
