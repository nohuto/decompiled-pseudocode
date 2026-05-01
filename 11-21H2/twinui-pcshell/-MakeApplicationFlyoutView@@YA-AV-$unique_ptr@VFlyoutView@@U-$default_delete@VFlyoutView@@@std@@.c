/*
 * XREFs of ?MakeApplicationFlyoutView@@YA?AV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@2@PEBG@Z @ 0x1805D29FC
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805C0F10 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@PEBG@Z @ 0x1805D21D4 (--0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MakeApplicationFlyoutView(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  void *v9; // [rsp+40h] [rbp+8h]

  v9 = operator new(0x68uLL);
  *a1 = ApplicationFlyoutView::ApplicationFlyoutView((__int64)v9, a2, a3, a4, L"ms-meetnow");
  return a1;
}
