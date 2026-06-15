/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18014CEE4
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002CEDC (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002D72C (Create_SpatialAudioDevicePropertyReader.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(CEndpointCharacteristics *this, unsigned int *a2)
{
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  *a2 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 9), &v5, v4) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 152LL))(v5, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
}
