/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180044EA0
 * Callers:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180044E80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180065F80 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180065FA0 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
