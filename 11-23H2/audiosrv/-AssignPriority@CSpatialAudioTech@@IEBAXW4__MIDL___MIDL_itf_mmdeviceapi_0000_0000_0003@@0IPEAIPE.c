/*
 * XREFs of ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18001FB8C
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001F750 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAI.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001F950 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KP.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001FA40 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_N.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTech::AssignPriority(
        CSpatialAudioTech *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a3,
        unsigned int a4,
        unsigned int *a5,
        bool *a6)
{
  int DefaultSpatialRenderingMode; // ebp

  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  *a6 = 1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
  if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)this + 64LL))(this) )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( a2 == a3 || a2 == 5 && a3 == Headphones )
  {
    *a5 = a4;
  }
}
