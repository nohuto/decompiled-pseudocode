/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18040B050
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_ec8706d7f9eda6c8a229b2667d0f0964_@@V_lambda_66952acfea2684a2bd94b74db4115431_@@@?$InvalidationChecker@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_ec8706d7f9eda6c8a229b2667d0f0964_@@AEBV_lambda_66952acfea2684a2bd94b74db4115431_@@@Z @ 0x1803F3B5C (--$Do@V_lambda_ec8706d7f9eda6c8a229b2667d0f0964_@@V_lambda_66952acfea2684a2bd94b74db4115431_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  HSTRING **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v3[0] = (_QWORD *)a1;
  v4 = (HSTRING **)&v5;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_ec8706d7f9eda6c8a229b2667d0f0964_,_lambda_66952acfea2684a2bd94b74db4115431_>(
           (unsigned int *)(a1 + 80),
           *(_QWORD *)(a1 + 64),
           v3,
           &v4);
}
