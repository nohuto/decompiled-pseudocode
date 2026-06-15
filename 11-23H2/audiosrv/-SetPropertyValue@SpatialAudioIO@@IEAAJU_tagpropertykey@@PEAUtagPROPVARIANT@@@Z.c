/*
 * XREFs of ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180147080
 * Callers:
 *     ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180145260 (-SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ.c)
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x1801470E8 (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioIO::SetPropertyValue(
        SpatialAudioIO *this,
        struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  __int64 v3; // r11

  v3 = *((_QWORD *)this + 67);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 96LL))(
             *((_QWORD *)this + 67),
             (char *)this + 8,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, struct _tagpropertykey *))(**((_QWORD **)this + 66) + 48LL))(
             *((_QWORD *)this + 66),
             a2,
             a3,
             a2);
}
