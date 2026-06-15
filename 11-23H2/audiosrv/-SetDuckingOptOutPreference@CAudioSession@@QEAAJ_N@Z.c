/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800E5314
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x1800E5370 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E9980 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8) )
    return 2290679811LL;
  *((_BYTE *)this + 412) = a2;
  return 0LL;
}
