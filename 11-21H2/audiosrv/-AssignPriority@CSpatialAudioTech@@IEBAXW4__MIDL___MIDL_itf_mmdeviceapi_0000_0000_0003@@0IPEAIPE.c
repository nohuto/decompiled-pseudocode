/*
 * XREFs of ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180053518
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800530A0 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFO.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800532A0 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800533D0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATE.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTech::AssignPriority(
        CSpatialAudioTech *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        bool *a6)
{
  int DefaultSpatialRenderingMode; // ebp
  unsigned int v7; // r15d
  int v8; // esi
  unsigned int v9; // ebx

  DefaultSpatialRenderingMode = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  *a5 = 0;
  *a6 = 1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(v9);
  if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)this + 64LL))(this) )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( v9 == v8 || v9 == 5 && v8 == 3 )
  {
    *a5 = v7;
  }
}
