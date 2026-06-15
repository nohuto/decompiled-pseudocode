/*
 * XREFs of ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140014B4C
 * Callers:
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400148F4 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ??$?4UIAudioProcessingObject@@@?$CComPtr@UIAudioProcessingObjectVBR@@@ATL@@QEAAPEAUIAudioProcessingObjectVBR@@AEBV?$CComPtr@UIAudioProcessingObject@@@1@@Z @ 0x140014AE4 (--$-4UIAudioProcessingObject@@@-$CComPtr@UIAudioProcessingObjectVBR@@@ATL@@QEAAPEAUIAudioProcess.c)
 *     ?Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140025930 (-Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400557C0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComQIPtrAssign(struct IUnknown **a1, struct IUnknown *a2, const struct _GUID *a3)
{
  struct IUnknown *v3; // r9
  __int64 v5; // rdi

  v3 = a2;
  if ( !a1 )
    return 0LL;
  v5 = (__int64)*a1;
  *a1 = 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *, const struct _GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      a3,
      a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct IUnknown *, const struct _GUID *, struct IUnknown *))(*(_QWORD *)v5 + 16LL))(
      v5,
      a2,
      a3,
      v3);
  return *a1;
}
