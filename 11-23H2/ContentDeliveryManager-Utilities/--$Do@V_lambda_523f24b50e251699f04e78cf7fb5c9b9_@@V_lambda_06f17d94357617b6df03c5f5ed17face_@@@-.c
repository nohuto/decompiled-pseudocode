/*
 * XREFs of ??$Do@V_lambda_523f24b50e251699f04e78cf7fb5c9b9_@@V_lambda_06f17d94357617b6df03c5f5ed17face_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_523f24b50e251699f04e78cf7fb5c9b9_@@AEBV_lambda_06f17d94357617b6df03c5f5ed17face_@@@Z @ 0x18007AF0C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180082B30 (-MoveNext@-$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V-$Vector@PEAVAppIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_523f24b50e251699f04e78cf7fb5c9b9_,_lambda_06f17d94357617b6df03c5f5ed17face_>(
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
