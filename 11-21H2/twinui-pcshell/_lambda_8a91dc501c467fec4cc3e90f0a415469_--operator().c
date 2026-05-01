/*
 * XREFs of _lambda_8a91dc501c467fec4cc3e90f0a415469_::operator() @ 0x18003135C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_8a91dc501c467fec4cc3e90f0a415469__&_::Run @ 0x180031340 (wil--details--functor_wrapper_void__lambda_8a91dc501c467fec4cc3e90f0a415469__-_--Run.c)
 * Callees:
 *     ??$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@V_lambda_9553f26b39c360ab0f553b854f05e574_@@@impl@winrt@@YA_N$$QEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031430 (--$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@23.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1800314C0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@She.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall lambda_8a91dc501c467fec4cc3e90f0a415469_::operator()(__int64 *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // r8
  int v3; // ebx
  char v5; // al
  __int64 v6; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v8; // r14
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF

  v1 = -1LL;
  v2 = -1LL;
  v3 = 0;
  do
    ++v2;
  while ( winrt::WindowsUdk::UI::Shell::ShellContractName[v2] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, L"WindowsUdk.UI.Shell.ShellContract", v2);
  LOWORD(v12) = 4;
  v10[0] = v11;
  v10[1] = &v12;
  v5 = winrt::impl::call_factory<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics,_lambda_9553f26b39c360ab0f553b854f05e574_>(v10);
  v6 = *a1;
  if ( v5 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v6 + 696), 0LL);
    v8 = *a1;
    do
      ++v1;
    while ( StringRawBuffer[v1] );
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, StringRawBuffer, v1);
    LOBYTE(v3) = *(_BYTE *)a1[1] == 0;
    v12 = v3;
    return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator2<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibility(
             v8 + 640,
             &v12,
             v11);
  }
  else
  {
    LOBYTE(v3) = *(_BYTE *)a1[1] == 0;
    v12 = v3;
    return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
             v6 + 640,
             &v12);
  }
}
