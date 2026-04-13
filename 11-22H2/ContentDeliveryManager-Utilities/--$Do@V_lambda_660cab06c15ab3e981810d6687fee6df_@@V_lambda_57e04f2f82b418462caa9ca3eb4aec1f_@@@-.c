/*
 * XREFs of ??$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_660cab06c15ab3e981810d6687fee6df_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007B124
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180080E90 (-GetMany@-$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V-$Vector@PEAVAppIns.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007A934 (--$AtomicUpdate@V_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@V_lambda_57e04f2f82b418462caa9ca3eb4.c)
 *     ??R_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@QEBA@XZ @ 0x18007E028 (--R_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_660cab06c15ab3e981810d6687fee6df_,_lambda_57e04f2f82b418462caa9ca3eb4aec1f_>(
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
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6c210d7b4fa26faa8794b3b9e5692617_,_lambda_57e04f2f82b418462caa9ca3eb4aec1f_>(
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
        _lambda_57e04f2f82b418462caa9ca3eb4aec1f_::operator()(a4, v12);
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
