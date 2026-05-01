/*
 * XREFs of ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1806BF9C0
 * Callers:
 *     ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1806BF960 (-SetIconBadge@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x1806AF424 (--$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806BF8CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1806C18A0 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        unsigned int a2,
        const struct winrt::hstring *a3,
        __int64 a4)
{
  wil *v7; // rcx
  void *v8; // r9
  int v9; // eax
  const WCHAR *v10; // rax
  bool v11; // bl
  const unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // eax
  _WORD *v15; // rax
  const WCHAR *v16; // r8
  LPCWCH *v17; // r8
  int v18; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-D8h]
  struct _WNF_STATE_NAME v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-B0h]
  LPCWCH lpString2[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-90h]
  _WORD v28[7]; // [rsp+A2h] [rbp-5Eh] BYREF
  WCHAR String1[128]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v22 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
  memset_0(String1, 0, sizeof(String1));
  v9 = wil::wnf_query_nothrow(
         v7,
         &v21,
         (bool *)String1,
         v8,
         (unsigned __int64)&v23,
         v20,
         *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v21);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v9,
      bIgnoreCase);
  if ( *(_QWORD *)a3 )
  {
    v10 = winrt::hstring::c_str(a3);
    v11 = CompareStringOrdinal(String1, -1, v10, -1, 1) != 2;
    v12 = winrt::hstring::c_str(a3);
    v14 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v12, (unsigned int)(2 * v13 + 2)) | 0x10000000;
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v14,
        0);
  }
  else
  {
    v15 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v28, a2);
    std::wstring::wstring((__int64)lpString2, v15, v28);
    v16 = (const WCHAR *)lpString2;
    if ( v27 >= 8 )
      v16 = lpString2[0];
    v11 = CompareStringOrdinal(String1, -1, v16, -1, 1) != 2;
    v17 = lpString2;
    if ( v27 >= 8 )
      v17 = (LPCWCH *)lpString2[0];
    v18 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v17, 2 * (__int64)lpString2[2] + 2) | 0x10000000;
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x76,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v18,
        0);
    std::wstring::_Tidy_deallocate((__int64)lpString2);
  }
  if ( v11 )
  {
    v23 = (unsigned __int64)winrt::hstring::c_str(a3);
    MeetAndChatTelemetry::IconBadgeChanged<unsigned int const &,unsigned short const *>(&v22, (__int64 *)&v23);
  }
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
}
