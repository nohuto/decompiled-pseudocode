/*
 * XREFs of ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x180051DE8
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180051A88 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x180051E8C (--$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRI.c)
 *     ?InternalRelease@?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C73C (-InternalRelease@-$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayBroker::Initialize(CDisplayBroker *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"DispBrokerDesktop.SessionBrokerInstance",
    0x28u,
    0x27u);
  v2 = v8;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(this);
  v3 = Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(v2, this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1Bu);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1Cu);
  }
  return v4;
}
