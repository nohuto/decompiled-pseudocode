/*
 * XREFs of ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x180126318
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003AAA8 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18006DA60 (-Release@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?Release@GameInputServerProxy@@UEAAKXZ @ 0x180126230 (-Release@GameInputServerProxy@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePublicReference(SharedObjectBase *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 - 2;
  if ( v2 <= 1 )
    __fastfail(0xEu);
  result = v3;
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 16LL))(this);
    result = v3;
    if ( !((unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL) >> 32) )
    {
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
      return v3;
    }
  }
  return result;
}
