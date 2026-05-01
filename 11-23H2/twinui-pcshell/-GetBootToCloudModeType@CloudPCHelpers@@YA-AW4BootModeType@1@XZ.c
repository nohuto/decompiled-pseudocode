/*
 * XREFs of ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1807062E4
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x1802841E4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?GetSharedModeType@@YA?AW4SharedModeType@@XZ @ 0x1803FF6D8 (-GetSharedModeType@@YA-AW4SharedModeType@@XZ.c)
 */

__int64 CloudPCHelpers::GetBootToCloudModeType()
{
  __int64 result; // rax
  int SharedModeType; // eax
  unsigned int v2; // ecx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() != 1 )
    return 0LL;
  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
         L"BootToCloudPCEnhanced",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || (result = pvData, pvData - 1 > 1) )
  {
    SharedModeType = GetSharedModeType();
    v2 = 100;
    if ( SharedModeType == 1 )
      return 1;
    return v2;
  }
  return result;
}
