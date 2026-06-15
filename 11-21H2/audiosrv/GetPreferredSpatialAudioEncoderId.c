/*
 * XREFs of GetPreferredSpatialAudioEncoderId @ 0x180054FF8
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAU3@PEAUTechIndexes@@@Z @ 0x1800543B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEn.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
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
