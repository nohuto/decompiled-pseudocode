/*
 * XREFs of ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180110380
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@W4VirtualDesktopPersistenceMode@@AEBU_GUID@@PEAPEAX@Z @ 0x1801106AC (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@W4VirtualDeskt.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall CVirtualDesktopComponent::CreatePersistence(
        CVirtualDesktopComponent *this,
        struct IVirtualDesktopRegistryHelpers *a2,
        struct IVirtualDesktopPersistence **a3,
        __int64 a4)
{
  __int64 v6; // r8
  CCriticalFailureHandler *v7; // rcx
  int Instance; // ebx
  unsigned __int64 *v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVirtualDesktopComponent *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = this;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  Instance = VirtualDesktopPersistence_CreateInstance(a2, 0LL, v6, a3);
  LODWORD(v13) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v14) >= 0 )
  {
    switch ( v14 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_5;
    }
    LODWORD(v13) = Instance;
  }
LABEL_5:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( Instance >= 0 )
    return 0LL;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v7,
      (int *)&v13,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x1EBu,
      v10,
      v11);
    Instance = (int)v13;
  }
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EB,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
