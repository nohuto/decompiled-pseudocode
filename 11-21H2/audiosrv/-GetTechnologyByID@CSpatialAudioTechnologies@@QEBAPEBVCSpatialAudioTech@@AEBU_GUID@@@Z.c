/*
 * XREFs of ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x18013F8BC
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAU3@PEAUTechIndexes@@@Z @ 0x1800543B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEn.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CSpatialAudioTech *__fastcall CSpatialAudioTechnologies::GetTechnologyByID(
        CSpatialAudioTechnologies *this,
        const struct _GUID *a2)
{
  unsigned __int8 v2; // bl
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !g_ListOfSpatialTech[0] )
    return 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)&g_ListOfSpatialTech[8 * v2 + 8];
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 16LL))(v4, v8);
    v6 = *v5 - *(_QWORD *)&a2->Data1;
    if ( *v5 == *(_QWORD *)&a2->Data1 )
      v6 = v5[1] - *(_QWORD *)a2->Data4;
    if ( !v6 )
      break;
    if ( ++v2 >= (unsigned int)g_ListOfSpatialTech[0] )
      return 0LL;
  }
  return *(const struct CSpatialAudioTech **)&g_ListOfSpatialTech[8 * v2 + 8];
}
