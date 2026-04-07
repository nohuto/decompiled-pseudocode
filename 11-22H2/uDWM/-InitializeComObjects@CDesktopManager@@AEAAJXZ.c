/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004DD60
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800538D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004B8D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x18004DC84 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x18004DE7C (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  HRESULT Instance; // eax
  int v7; // eax
  LPVOID *v8; // rcx
  __int64 v9; // r8
  CDisplayBroker *v10; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-38h]
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationInitialization_Start,
      a3,
      1LL,
      (__int64)v13);
  v5 = 0;
  if ( !this[34] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 this + 35);
    v5 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x711u, 0LL);
      goto LABEL_10;
    }
    v7 = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, this + 34);
    v5 = v7;
    if ( v7 < 0 )
    {
      ppv = 1815;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, ppv, 0LL);
      goto LABEL_10;
    }
  }
  v8 = (LPVOID *)this[22];
  if ( !*((_BYTE *)v8 + 120) )
  {
    v7 = CAnimationEngine::Initialize(v8);
    v5 = v7;
    if ( v7 < 0 )
    {
      ppv = 1820;
      goto LABEL_17;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v10 = (CDisplayBroker *)this[28];
  if ( !*(_QWORD *)v10 )
  {
    v7 = CDisplayBroker::Initialize(v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      ppv = 1827;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationInitialization_Stop,
      v9,
      1LL,
      (__int64)v13);
  return v5;
}
