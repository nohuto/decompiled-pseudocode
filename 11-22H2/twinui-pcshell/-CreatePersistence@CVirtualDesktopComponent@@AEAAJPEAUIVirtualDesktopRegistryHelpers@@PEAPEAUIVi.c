/*
 * XREFs of ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180198C80
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x180198CE8 (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall CVirtualDesktopComponent::CreatePersistence(
        CVirtualDesktopComponent *this,
        struct IVirtualDesktopRegistryHelpers *a2,
        struct IVirtualDesktopPersistence **a3)
{
  CCriticalFailureHandler *v3; // rcx
  int Instance; // ebx
  unsigned __int64 *v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVirtualDesktopComponent *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = this;
  Instance = VirtualDesktopPersistence_CreateInstance(a2, (const struct _GUID *)a2, (void **)a3);
  LODWORD(v9) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v10) >= 0 )
  {
    switch ( v10 )
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
    LODWORD(v9) = Instance;
  }
LABEL_5:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( Instance >= 0 )
    return 0LL;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v9,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x19Au,
      v6,
      v7);
    Instance = (int)v9;
  }
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19A,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
