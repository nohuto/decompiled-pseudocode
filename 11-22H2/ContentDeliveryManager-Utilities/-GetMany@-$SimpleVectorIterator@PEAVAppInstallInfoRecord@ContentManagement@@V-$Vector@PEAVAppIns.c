/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180080E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_660cab06c15ab3e981810d6687fee6df_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007B124 (--$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::GetMany(
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
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_660cab06c15ab3e981810d6687fee6df_,_lambda_57e04f2f82b418462caa9ca3eb4aec1f_>(
           (unsigned int *)(a1 + 80),
           v4,
           v7,
           (__int64)v6);
}
