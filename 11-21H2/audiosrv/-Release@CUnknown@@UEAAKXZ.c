/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x18005C230
 * Callers:
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x18005C1D0 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x18005C1F0 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x18005C210 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
