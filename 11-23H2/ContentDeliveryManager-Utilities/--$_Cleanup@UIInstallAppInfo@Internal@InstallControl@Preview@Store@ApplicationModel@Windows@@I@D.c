/*
 * XREFs of ??$_Cleanup@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@I@Z @ 0x18007C8A0
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@PEAI@Z @ 0x18007CA84 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallContro.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@PEAI@Z @ 0x18007CC68 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallContro.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@PEAI@Z @ 0x18007CE50 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Pr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo,unsigned int>(
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
