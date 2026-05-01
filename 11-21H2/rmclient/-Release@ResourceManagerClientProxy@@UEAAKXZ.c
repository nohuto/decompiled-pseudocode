/*
 * XREFs of ?Release@ResourceManagerClientProxy@@UEAAKXZ @ 0x18000A7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Release(ResourceManagerClientProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)this + 120LL))(this, 1LL);
  return v1;
}
