/*
 * XREFs of ?VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ @ 0x1805D1890
 * Callers:
 *     ?VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ @ 0x1805D3720 (-VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800C6188 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::ProtocolLauncher::VerifyCallingProcessIsTrustedHandlerForUriScheme(
        LPCWCH *this,
        unsigned __int16 **a2)
{
  int CallingProcessAppId; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWCH lpString1; // [rsp+48h] [rbp+10h] BYREF

  lpString1 = 0LL;
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((unsigned int **)&lpString1, a2);
  if ( CallingProcessAppId < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xFE,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)CallingProcessAppId,
      bIgnoreCase);
  if ( CompareStringOrdinal(lpString1, -1, this[1], -1, 1) != 2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x102,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x80070005LL,
      bIgnoreCasea);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpString1);
}
