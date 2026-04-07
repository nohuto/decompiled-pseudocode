/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180051A88
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180051BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x180051DE8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180051F38 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  HRESULT Instance; // eax
  HRESULT v6; // eax
  CAnimationEngine *v7; // rcx
  __int64 v8; // r8
  CDisplayBroker *v9; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-38h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationInitialization_Start,
      a3,
      1,
      (__int64)v12);
  v4 = 0;
  if ( !this[32] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 this + 33);
    v4 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x77Bu);
      goto LABEL_10;
    }
    v6 = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, this + 32);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1921;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, ppv);
      goto LABEL_10;
    }
  }
  v7 = (CAnimationEngine *)this[21];
  if ( !*((_BYTE *)v7 + 120) )
  {
    v6 = CAnimationEngine::Initialize(v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1938;
      goto LABEL_17;
    }
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    a2);
  v9 = (CDisplayBroker *)this[27];
  if ( !*(_QWORD *)v9 )
  {
    v6 = CDisplayBroker::Initialize(v9);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1945;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationInitialization_Stop,
      v8,
      1,
      (__int64)v12);
  return v4;
}
