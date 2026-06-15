/*
 * XREFs of ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18004371C
 * Callers:
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180005DD0 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180063CBC (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8 (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::InitPhoneTopology(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // eax

  v2 = 0;
  v3 = this + 2;
  EnterCriticalSection(this + 2);
  if ( !LODWORD(this[1].LockSemaphore) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *))(**(_QWORD **)&this[1].LockCount + 32LL))(
           *(_QWORD *)&this[1].LockCount,
           this + 1);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(LONG *))(*(_QWORD *)&this->LockCount + 120LL))(&this->LockCount), v4 < 0) )
    {
      v2 = v4;
      ATL::CComPtrBase<IPhoneTopology>::Release(&this[1]);
    }
    else
    {
      LODWORD(this[1].LockSemaphore) = 1;
    }
  }
  LeaveCriticalSection(v3);
  return v2;
}
