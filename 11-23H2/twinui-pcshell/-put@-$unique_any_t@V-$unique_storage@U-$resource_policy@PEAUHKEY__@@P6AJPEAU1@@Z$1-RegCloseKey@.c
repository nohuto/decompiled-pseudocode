/*
 * XREFs of ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x1800A8B3C (-TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt.c)
 *     ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1800B522C (-IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@In.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18012FC60 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1801C1138 (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 *     ?IsCurrentVDRemote@@YA_NXZ @ 0x1805FB74C (-IsCurrentVDRemote@@YA_NXZ.c)
 *     ?RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F48EC (-RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F57C4 (-RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt.c)
 *     ?ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@@Z @ 0x1806FA008 (-ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@.c)
 *     ?InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z @ 0x1806FAE70 (-InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18072840C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

HKEY *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(
        HKEY *a1)
{
  HKEY v1; // rsi
  DWORD LastError; // ebx

  v1 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    RegCloseKey(v1);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return a1;
}
