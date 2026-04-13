/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@IPEAU62789ApplicationModel@5@PEAIPEAE@Z @ 0x180081ED4
 * Callers:
 *     ?IndexOf@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAIPEAE@Z @ 0x180081C70 (-IndexOf@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 * Callees:
 *     ??$?RUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@0PEA_N@Z @ 0x180079DAC (--$-RUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Interface.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64),
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  __int64 i; // rbx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  for ( i = 0LL; (unsigned int)i < a3 && (int)v6 >= 0; i = (unsigned int)(i + 1) )
  {
    v11 = XWinRT::InterfaceEquals::operator()<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
            v6,
            a4,
            *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a2 + 8 * i),
            &v13);
    v6 = (unsigned int)v11;
    if ( v11 >= 0 && v13 )
    {
      *a6 = 1;
      *a5 = i;
      return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
