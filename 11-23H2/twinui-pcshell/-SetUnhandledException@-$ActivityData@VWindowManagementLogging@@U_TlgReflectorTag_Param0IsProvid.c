/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1805AE08C
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003B6C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflector.c)
 *     ??1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18003F4D0 (--1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18007A6AC (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801481BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 *     ?Destroy@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180630904 (-Destroy@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18038FEB8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  const struct wil::FailureInfo *v4; // rdx
  int v5; // edx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = -2147024322;
  if ( (int)a1[22] < 0 )
    v2 = a1[22];
  v3 = a1[18];
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v7, v4);
  }
  v5 = a1[19];
  if ( v5 >= 0 )
  {
    a1[19] = v2;
    v5 = v2;
  }
  a1[18] = v3 - 1;
  return (unsigned int)v5;
}
