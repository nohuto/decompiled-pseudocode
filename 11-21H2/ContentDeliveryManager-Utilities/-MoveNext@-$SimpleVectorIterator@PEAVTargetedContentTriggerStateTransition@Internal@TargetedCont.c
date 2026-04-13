/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18003B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        bool *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v7; // rbp
  unsigned __int32 v8; // edx
  unsigned int v9; // ecx
  bool v10; // zf
  signed __int32 v11; // eax

  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v5 < 0 )
  {
    RoOriginateError((unsigned int)v5, 0LL, a3, a4);
    return (unsigned int)v5;
  }
  v8 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v9 = *(_DWORD *)(a1 + 44);
    if ( v8 < v9 )
    {
      *(_DWORD *)(a1 + 40) = v8 + 1;
      v5 = 0;
      *a2 = v8 + 1 < v9;
      goto LABEL_10;
    }
  }
  else
  {
    while ( 1 )
    {
      *a2 = 0;
      if ( v8 >= *(_DWORD *)(a1 + 44) )
        break;
      v5 = 0;
      *a2 = v8 + 1 < *(_DWORD *)(a1 + 44);
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v8 + 1, v8);
      v10 = v8 == v11;
      v8 = v11;
      if ( v10 )
        goto LABEL_10;
      *a2 = 0;
    }
  }
  v5 = -2147483637;
  RoOriginateError(2147483659LL, 0LL, a3, a4);
LABEL_10:
  if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v7 + 88) )
  {
    *(_DWORD *)(a1 + 48) = -2147483636;
    if ( v5 < 0 )
    {
      RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
    }
    else
    {
      RoOriginateError(2147483660LL, 0LL, a3, a4);
      *a2 = 0;
    }
    return (unsigned int)-2147483636;
  }
  return (unsigned int)v5;
}
