/*
 * XREFs of ?Release@CPrivateAPO@@UEAAKXZ @ 0x140024450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrivateAPO::Release(CPrivateAPO *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( !v1 && this )
    (*(void (__fastcall **)(CPrivateAPO *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
