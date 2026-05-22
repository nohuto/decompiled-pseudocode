/*
 * XREFs of ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1801181EC
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x180037DE8 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?PrivateRelease@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@QEAAXXZ @ 0x18005BEEC (-PrivateRelease@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x180118110 (-OnDisposePublic@GameInputServerProxy@@EEAAXXZ.c)
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x180118894 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 *     ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x18011B1B0 (-ReleasePrivateReference@SipcServer@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePrivateReference(SharedObjectBase *this)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edi
  unsigned int v4; // ecx

  v2 = (unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) >> 32;
  v3 = v2 - 2;
  if ( (unsigned int)v2 <= 1 )
    __fastfail(0xEu);
  v4 = v2 - 2;
  if ( (_DWORD)v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 24LL))(this);
    v4 = v3;
    if ( !(unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) )
    {
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
      return v3;
    }
  }
  return v4;
}
