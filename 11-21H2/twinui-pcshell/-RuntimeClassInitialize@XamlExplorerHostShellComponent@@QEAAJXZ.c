/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x18006366C
 * Callers:
 *     ??$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800635AC (--$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063798 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlTaskbar@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x180063BA0 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::RuntimeClassInitialize(XamlExplorerHostShellComponent *this)
{
  void *v2; // rcx
  __int64 v3; // rbx
  wil::details *v4; // rcx
  HANDLE Event; // rbx
  int LastErrorFailHr; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-38h]
  _OWORD v10[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = Platform::Details::Heap::Allocate(0x70uLL, 0x88uLL);
  v3 = XamlExplorerHost::XamlExplorerHost(v2);
  v9 = v3;
  __abi_winrt_ptr_assign((char *)this + 248, v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 288,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
    if ( LastErrorFailHr < 0 )
    {
      v8 = 102LL;
      goto LABEL_10;
    }
  }
  v10[0] = GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v10[1] = 0LL;
  LastErrorFailHr = CImmersiveShellComponent::RegisterServiceInformation(
                      (XamlExplorerHostShellComponent *)((char *)this + 48),
                      (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
                      1u);
  if ( LastErrorFailHr >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlTaskbar>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XamlTaskbar>::GetImpl'::`2'::impl,
      0LL);
    return 0LL;
  }
  v8 = 103LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
    (const char *)(unsigned int)LastErrorFailHr,
    v9);
  return (unsigned int)LastErrorFailHr;
}
