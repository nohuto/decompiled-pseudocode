/*
 * XREFs of ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180143694
 * Callers:
 *     ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180142830 (-AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryDat.c)
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180142D10 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180143240 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180143380 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180143700 (-SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetPropertyValue(
        SpatialAudioDevicePropertyWriter *this,
        struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  __int64 v3; // r11

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 96LL))(
             *((_QWORD *)this + 13),
             (char *)this + 112,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, struct _tagpropertykey *))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             a2,
             a3,
             a2);
}
