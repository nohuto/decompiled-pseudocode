/*
 * XREFs of ??$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C790
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAI@Z @ 0x1800918B0 (-GetMany@-$SimpleVectorIterator@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Serv.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_6da5d50197c687db247b6d706d272348_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6da5d50197c687db247b6d706d272348_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C254 (--$AtomicUpdate@V_lambda_6da5d50197c687db247b6d706d272348_@@V_lambda_5d4a431170cf9e765abe797b843.c)
 *     ??R_lambda_5d4a431170cf9e765abe797b843b553b_@@QEBA@XZ @ 0x180090674 (--R_lambda_5d4a431170cf9e765abe797b843b553b_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_cf00cbf1c1a7f44b0986c29904714c0c_,_lambda_5d4a431170cf9e765abe797b843b553b_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v15 = v8;
    v14[3] = v9;
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6da5d50197c687db247b6d706d272348_,_lambda_5d4a431170cf9e765abe797b843b553b_>(
            (volatile signed __int32 *)(v8 + 72),
            (__int64)v14,
            v10);
    v4 = v11;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_5d4a431170cf9e765abe797b843b553b_::operator()(a4, v12);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
