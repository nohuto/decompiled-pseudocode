/*
 * XREFs of ??$_Cleanup@UIAppInstallInfoRecord@ContentManagement@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAppInstallInfoRecord@ContentManagement@@I@Z @ 0x18007C8A0
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAppInstallInfoRecord@ContentManagement@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18007C9E4 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagemen.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAppInstallInfoRecord@ContentManagement@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18007CBC4 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagemen.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAppInstallInfoRecord@ContentManagement@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18007CDAC (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@P.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
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
