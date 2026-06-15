/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x18004B630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  return (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL))(
           g_SpatialAudioResourceManager,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
           *((unsigned int *)this + 114),
           (char *)this + 440,
           (char *)this + 464);
}
