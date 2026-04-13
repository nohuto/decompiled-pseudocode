/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180088CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_ec79be1ad81cfeb5e74948479b60de7d_@@V_lambda_aa423b14c2d7471534b0fc04a4f8eaf7_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_ec79be1ad81cfeb5e74948479b60de7d_@@AEBV_lambda_aa423b14c2d7471534b0fc04a4f8eaf7_@@@Z @ 0x180086468 (--$Do@V_lambda_ec79be1ad81cfeb5e74948479b60de7d_@@V_lambda_aa423b14c2d7471534b0fc04a4f8eaf7_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        ...)
{
  __int64 v1; // rdx
  _QWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v4[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+68h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+18h]
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va1; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va2; // [rsp+78h] [rbp+28h]
  va_list va3; // [rsp+80h] [rbp+30h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v9 = va_arg(va3, _BYTE *);
  *v7 = 0;
  v4[0] = (_QWORD *)a1;
  *v9 = 0;
  v1 = *(_QWORD *)(a1 + 72);
  va_copy((va_list)v3, va1);
  va_copy((va_list)&v3[1], va2);
  va_copy((va_list)&v4[1], va);
  va_copy((va_list)&v4[2], va1);
  va_copy((va_list)&v4[3], va2);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_ec79be1ad81cfeb5e74948479b60de7d_,_lambda_aa423b14c2d7471534b0fc04a4f8eaf7_>(
           (unsigned int *)(a1 + 80),
           v1,
           v4,
           (__int64)v3);
}
