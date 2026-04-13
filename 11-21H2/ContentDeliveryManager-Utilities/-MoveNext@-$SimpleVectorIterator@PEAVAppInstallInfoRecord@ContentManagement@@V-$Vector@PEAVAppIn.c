/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18008DC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        bool *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v7; // rbp
  unsigned __int32 v8; // edx
  bool v9; // zf
  signed __int32 v10; // eax

  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      *a2 = 0;
      if ( v8 >= *(_DWORD *)(a1 + 76) )
        break;
      v5 = 0;
      *a2 = v8 + 1 < *(_DWORD *)(a1 + 76);
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v8 + 1, v8);
      v9 = v8 == v10;
      v8 = v10;
      if ( v9 )
        goto LABEL_8;
      *a2 = 0;
    }
    v5 = -2147483637;
    RoOriginateError(2147483659LL, 0LL, a3, a4);
LABEL_8:
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v7 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
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
  }
  else
  {
    RoOriginateError((unsigned int)v5, 0LL, a3, a4);
  }
  return (unsigned int)v5;
}
