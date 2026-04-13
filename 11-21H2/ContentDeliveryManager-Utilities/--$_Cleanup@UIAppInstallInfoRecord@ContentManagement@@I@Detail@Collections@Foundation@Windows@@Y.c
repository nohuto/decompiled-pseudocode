/*
 * XREFs of ??$_Cleanup@UIAppInstallInfoRecord@ContentManagement@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAppInstallInfoRecord@ContentManagement@@I@Z @ 0x180085E90
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18008B0B0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppI.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18008B290 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAp.c)
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18008B490 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppIns.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<ContentManagement::IAppInstallInfoRecord,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
