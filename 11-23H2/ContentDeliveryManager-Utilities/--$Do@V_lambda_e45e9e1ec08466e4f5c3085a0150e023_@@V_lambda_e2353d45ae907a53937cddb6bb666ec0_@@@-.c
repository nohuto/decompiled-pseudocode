/*
 * XREFs of ??$Do@V_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@V_lambda_e2353d45ae907a53937cddb6bb666ec0_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@AEBV_lambda_e2353d45ae907a53937cddb6bb666ec0_@@@Z @ 0x18007B56C
 * Callers:
 *     ?First@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x18007F860 (-First@-$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V-$Vector@PEAVAppInstallIn.c)
 * Callees:
 *     ??R_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@QEBAJXZ @ 0x18007E8DC (--R_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@QEBAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_e45e9e1ec08466e4f5c3085a0150e023_,_lambda_e2353d45ae907a53937cddb6bb666ec0_>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = _lambda_e45e9e1ec08466e4f5c3085a0150e023_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
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
