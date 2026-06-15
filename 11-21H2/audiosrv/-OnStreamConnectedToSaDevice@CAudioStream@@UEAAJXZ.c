/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x18000FA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  return (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, char *, _QWORD, char *, char *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL))(
           g_SpatialAudioResourceManager,
           (char *)this + 8,
           *((unsigned int *)this + 108),
           (char *)this + 416,
           (char *)this + 440);
}
