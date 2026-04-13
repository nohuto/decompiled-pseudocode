/*
 * XREFs of ??$Do@V_lambda_e59e5b48b9adbafa9285a89258158a6e_@@V_lambda_bac9b7eee69674184cbbd1953167e7a6_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e59e5b48b9adbafa9285a89258158a6e_@@AEBV_lambda_bac9b7eee69674184cbbd1953167e7a6_@@@Z @ 0x18007B680
 * Callers:
 *     ?GetAt@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007FD60 (-GetAt@-$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V-$Vector@PEAVAppInstallIn.c)
 * Callees:
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007AB1C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_e59e5b48b9adbafa9285a89258158a6e_,_lambda_bac9b7eee69674184cbbd1953167e7a6_>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 72LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)a3 + 72LL),
           **(unsigned int **)(a3 + 8),
           **(_QWORD **)(a3 + 16));
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
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(**a4);
        ***a4 = 0LL;
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
