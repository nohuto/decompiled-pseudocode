/*
 * XREFs of ?ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x180731D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x180283994 (-CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::ExitCloudPC(
        __int64 a1,
        struct winrt::impl::hstring_header *a2,
        winrt::impl **a3)
{
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF
  struct winrt::impl::hstring_header *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = winrt::impl::duplicate_hstring(*a3, a2, (unsigned int)a3);
  v5 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v7,
         a2);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection(
    a1,
    (__int64)&v8,
    v5,
    (__int64 *)&v9);
  return 1;
}
