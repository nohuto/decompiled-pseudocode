/*
 * XREFs of ??$_Cleanup@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@I@Z @ 0x180085EE0
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@PEAI@Z @ 0x18008B1A0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@St.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@PEAI@Z @ 0x18008B390 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@.c)
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@PEAI@Z @ 0x18008B590 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Stor.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
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
