/*
 * XREFs of GetPreferredSpatialAudioEncoderId @ 0x180019CC0
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180034250 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612B0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180153284 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPreferredSpatialAudioEncoderId(_OWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rax

  *a1 = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 == 3 && *(_DWORD *)a3 )
  {
    v4 = *(_QWORD *)(a3 + 28) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(a3 + 36) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v4 )
LABEL_2:
      *a1 = *(_OWORD *)(a3 + 28);
  }
  return a1;
}
