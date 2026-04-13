/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAppInstallInfoRecord@ContentManagement@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007CF94
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180083700 (-ReplaceAll@-$IVector_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIApp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<ContentManagement::AppInstallInfoRecord *,ContentManagement::IAppInstallInfoRecord *>,1>,ContentManagement::IAppInstallInfoRecord *>(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // esi
  __int64 i; // rbx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a3 + 8 * i));
      if ( v6 < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
        return (unsigned int)v6;
      }
    }
  }
  return (unsigned int)v6;
}
