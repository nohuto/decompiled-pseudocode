/*
 * XREFs of ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800E53C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetMute(
        CServerAudioSessionControl *this,
        __int64 a2,
        const struct _GUID *a3,
        int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, _QWORD, int *))(**((_QWORD **)this + 9)
                                                                                         + 296LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           0LL,
           a4);
}
