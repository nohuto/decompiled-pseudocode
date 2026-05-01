/*
 * XREFs of ?FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z @ 0x1804806B0
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481930 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481BB0 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX.c)
 *     ??$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_NAEA_NAEA_NAEA_NPEBG_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAXAEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N5AEA_N66$$QEAPEBG46$$QEAH6@Z @ 0x18047F5F0 (--$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID.c)
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x1804809F0 (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::FireHostInvokedTelemetry(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  const unsigned __int16 *v5; // rax
  bool v6; // cf
  void *v7; // [rsp+20h] [rbp-49h]
  __int64 v8; // [rsp+28h] [rbp-41h]
  bool v9; // [rsp+A0h] [rbp+37h] BYREF
  bool v10; // [rsp+A1h] [rbp+38h] BYREF
  bool v11; // [rsp+A2h] [rbp+39h] BYREF
  bool v12; // [rsp+A4h] [rbp+3Bh] BYREF
  bool v13; // [rsp+A5h] [rbp+3Ch] BYREF
  int v14; // [rsp+A8h] [rbp+3Fh] BYREF
  const unsigned __int16 *v15; // [rsp+B0h] [rbp+47h] BYREF
  const unsigned __int16 *v16; // [rsp+D8h] [rbp+6Fh] BYREF
  bool v17; // [rsp+E0h] [rbp+77h] BYREF
  bool v18; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = a2;
  KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState(this, &v12);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  v14 = *((unsigned __int8 *)this + 505);
  v5 = (const unsigned __int16 *)((char *)this + 624);
  v6 = *((_QWORD *)this + 81) < 8uLL;
  v17 = 0;
  if ( !v6 )
    v5 = *(const unsigned __int16 **)v5;
  v15 = v5;
  v18 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const * &,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool &,bool &,bool &,unsigned short const *,bool,bool &,int,bool &>(
    &v16,
    (unsigned __int64)this + 511,
    (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 144),
    (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 240),
    v7,
    v8,
    &v11,
    &v10,
    &v9,
    &v18,
    &v12,
    &v13,
    (bool *)this + 507,
    (bool *)this + 510,
    (bool *)this + 511,
    &v15,
    &v17,
    (bool *)this + 508,
    &v14,
    (char *)this + 504);
}
