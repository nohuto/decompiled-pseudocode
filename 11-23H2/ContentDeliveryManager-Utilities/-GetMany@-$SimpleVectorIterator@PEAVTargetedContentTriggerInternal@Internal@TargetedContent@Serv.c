/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAI@Z @ 0x180091860
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C740 (--$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v11; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _DWORD *);
  v8 = a2;
  *v11 = 0;
  for ( i = 0; i < v8; *(_QWORD *)(v9 + 8 * v3) = 0LL )
    v3 = i++;
  v4 = *(_QWORD *)(a1 + 64);
  va_copy((va_list)v6, va1);
  v7[0] = a1;
  va_copy((va_list)&v6[1], va);
  v7[1] = (__int64)&v8;
  va_copy((va_list)&v7[2], va);
  va_copy((va_list)&v7[3], va1);
  v7[4] = (__int64)v6;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_cf00cbf1c1a7f44b0986c29904714c0c_,_lambda_5d4a431170cf9e765abe797b843b553b_>(
           (unsigned int *)(a1 + 80),
           v4,
           v7,
           (__int64)v6);
}
