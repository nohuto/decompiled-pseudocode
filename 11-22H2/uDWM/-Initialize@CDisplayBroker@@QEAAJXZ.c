/*
 * XREFs of ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x18004DE7C
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004DD60 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x18004E424 (--$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRI.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005646C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(this);
  v3 = Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(v2, this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1Bu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1Cu, 0LL);
  }
  return v4;
}
