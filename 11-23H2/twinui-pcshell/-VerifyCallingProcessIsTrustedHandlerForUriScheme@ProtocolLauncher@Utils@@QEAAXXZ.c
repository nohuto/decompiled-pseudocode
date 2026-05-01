/*
 * XREFs of ?VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ @ 0x1806C39F0
 * Callers:
 *     ?VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ @ 0x1802E9FF0 (-VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18073BC2C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::ProtocolLauncher::VerifyCallingProcessIsTrustedHandlerForUriScheme(LPCWCH *this)
{
  void **v2; // rax
  unsigned __int16 **v3; // rdx
  int CallingProcessAppId; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWCH lpString1; // [rsp+48h] [rbp+10h] BYREF

  lpString1 = 0LL;
  v2 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&lpString1);
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)v2, v3);
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
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
}
