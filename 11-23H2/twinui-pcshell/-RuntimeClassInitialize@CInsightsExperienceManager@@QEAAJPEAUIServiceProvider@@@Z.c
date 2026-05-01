/*
 * XREFs of ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180106EF0
 * Callers:
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801349C4 (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x1800E5418 (-RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CInsightsExperienceManager::RuntimeClassInitialize(
        CInsightsExperienceManager *this,
        struct IServiceProvider *a2)
{
  _DWORD *v4; // rcx
  HSTRING v5; // rbx
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-68h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-50h]
  HSTRING_HEADER v12; // [rsp+50h] [rbp-48h] BYREF
  HSTRING v13; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v4,
      (unsigned __int8 *)dword_180852097,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v12);
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 34, (__int64)a2);
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Insights",
    0x2Au,
    0x29u);
  v5 = v11;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v12,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CInsightsExperienceManager *)((char *)this + 64),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v13,
         v5);
  if ( v6 < 0 )
  {
    v8 = 205LL;
  }
  else
  {
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v12,
      L"InsightsExperienceHostVS_ccv6fwk6gx0xp!App",
      0x2Bu,
      0x2Au);
    v6 = CSingleViewShellExperience::AddTestAumid((CInsightsExperienceManager *)((char *)this + 64), v13);
    if ( v6 < 0 )
    {
      v8 = 207LL;
    }
    else
    {
      v6 = CInsightsExperienceManager::RegisterForMonitorNotification(this);
      if ( v6 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 41, (__int64)this);
        return 0LL;
      }
      v8 = 209LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v6,
    v9);
  return (unsigned int)v6;
}
