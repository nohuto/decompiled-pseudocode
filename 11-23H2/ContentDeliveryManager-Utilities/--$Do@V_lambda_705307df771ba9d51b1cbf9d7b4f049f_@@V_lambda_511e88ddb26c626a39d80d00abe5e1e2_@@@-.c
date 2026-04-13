/*
 * XREFs of ??$Do@V_lambda_705307df771ba9d51b1cbf9d7b4f049f_@@V_lambda_511e88ddb26c626a39d80d00abe5e1e2_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_705307df771ba9d51b1cbf9d7b4f049f_@@AEBV_lambda_511e88ddb26c626a39d80d00abe5e1e2_@@@Z @ 0x180085CD4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800898A0 (-MoveNext@-$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedCont.c)
 * Callees:
 *     ??R_lambda_afe82f95bd395c8d703223e35ad8c849_@@QEBAJIPEAI@Z @ 0x18002E2B4 (--R_lambda_afe82f95bd395c8d703223e35ad8c849_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>,XWinRT::IntVersionTag>::Do<_lambda_705307df771ba9d51b1cbf9d7b4f049f_,_lambda_511e88ddb26c626a39d80d00abe5e1e2_>(
        int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  int v4; // ebx
  __int64 v8; // rax
  _BYTE ***v9; // r12
  bool v10; // zf
  volatile signed __int32 *v11; // r14
  unsigned __int32 v12; // edi
  unsigned int v13; // edx
  signed __int32 v14; // eax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-40h] BYREF
  signed __int32 v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 >= 0 )
  {
    v8 = a3[1];
    v9 = (_BYTE ***)a3[2];
    v16 = *a3;
    v10 = *(_BYTE *)(v16 + 56) == 0;
    v11 = (volatile signed __int32 *)(v16 + 40);
    v12 = *(_DWORD *)(v16 + 40);
    v17[0] = v8;
    v13 = v12;
    v17[1] = &v16;
    if ( v10 )
    {
      while ( 1 )
      {
        v4 = _lambda_afe82f95bd395c8d703223e35ad8c849_::operator()((__int64)v17, v13, &v18);
        if ( v4 < 0 )
          break;
        v14 = _InterlockedCompareExchange(v11, v18, v12);
        v10 = v12 == v14;
        v12 = v14;
        if ( v10 )
          break;
        v13 = v14;
        ***v9 = 0;
      }
    }
    else
    {
      v4 = _lambda_afe82f95bd395c8d703223e35ad8c849_::operator()((__int64)v17, v12, (_DWORD *)(v16 + 40));
    }
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v4 < 0 )
      {
        RoTransformError((unsigned int)v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
