/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x180149AE0
 * Callers:
 *     ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800484F0 (-DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(struct IPropertyStore **this, unsigned int *a2)
{
  int v4; // r9d
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  *a2 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, this[5], &v5, v4) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 152LL))(v5, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
}
