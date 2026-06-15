/*
 * XREFs of ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x180038DF0
 * Callers:
 *     ??_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z @ 0x18006BFE0 (--_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpatialAudioDeviceStateReader *__fastcall SpatialAudioDeviceStateReader::`scalar deleting destructor'(
        SpatialAudioDeviceStateReader *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *((_DWORD *)this + 153) = -1073741823;
  v4 = *((_QWORD *)this + 75);
  if ( v4 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  v5 = *((_QWORD *)this + 67);
  if ( v5 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 66);
  if ( v6 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x268uLL);
  return this;
}
