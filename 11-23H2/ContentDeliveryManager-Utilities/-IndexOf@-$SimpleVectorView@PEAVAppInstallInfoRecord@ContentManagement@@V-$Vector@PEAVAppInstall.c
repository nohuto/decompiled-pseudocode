/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x1800819A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_e8e150dc9230ee027feac107d15e143e_@@V_lambda_f6d9096a50bf4f498540660a0a7b75c9_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e8e150dc9230ee027feac107d15e143e_@@AEBV_lambda_f6d9096a50bf4f498540660a0a7b75c9_@@@Z @ 0x18007B7CC (--$Do@V_lambda_e8e150dc9230ee027feac107d15e143e_@@V_lambda_f6d9096a50bf4f498540660a0a7b75c9_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::IndexOf(
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
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_e8e150dc9230ee027feac107d15e143e_,_lambda_f6d9096a50bf4f498540660a0a7b75c9_>(
           (unsigned int *)(a1 + 80),
           v1,
           v4,
           (__int64)v3);
}
