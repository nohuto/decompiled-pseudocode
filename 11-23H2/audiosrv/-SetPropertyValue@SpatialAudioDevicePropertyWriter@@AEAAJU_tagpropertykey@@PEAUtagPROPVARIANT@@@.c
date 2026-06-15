/*
 * XREFs of ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180143644
 * Callers:
 *     ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1801427E0 (-AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryDat.c)
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180142CC0 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1801431F0 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180143330 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1801436B0 (-SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
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
