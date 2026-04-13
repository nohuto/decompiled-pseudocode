/*
 * XREFs of ??$Do@V_lambda_37736126293d7fec7e3c6430a772bb3c_@@V_lambda_51d59ff21c0333a3f7757bcfab6dc0fe_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_37736126293d7fec7e3c6430a772bb3c_@@AEBV_lambda_51d59ff21c0333a3f7757bcfab6dc0fe_@@@Z @ 0x180085BDC
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800898F0 (-MoveNext@-$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal_ea_1800898F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_37736126293d7fec7e3c6430a772bb3c_,_lambda_51d59ff21c0333a3f7757bcfab6dc0fe_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v9; // r8
  _BYTE ***v10; // r11
  bool **v11; // r10
  unsigned __int32 v12; // r9d
  bool v13; // zf
  signed __int32 v14; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v9 = *a3;
    v10 = (_BYTE ***)a3[2];
    v11 = (bool **)a3[1];
    v12 = *(_DWORD *)(v9 + 72);
    while ( 1 )
    {
      **v11 = 0;
      if ( v12 >= *(_DWORD *)(v9 + 76) )
        break;
      v4 = 0;
      **v11 = v12 + 1 < *(_DWORD *)(v9 + 76);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 72), v12 + 1, v12);
      v13 = v12 == v14;
      v12 = v14;
      if ( v13 )
        goto LABEL_8;
      ***v10 = 0;
    }
    v4 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
LABEL_8:
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
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
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
