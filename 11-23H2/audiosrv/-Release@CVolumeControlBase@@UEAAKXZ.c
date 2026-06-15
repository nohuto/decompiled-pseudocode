/*
 * XREFs of ?Release@CVolumeControlBase@@UEAAKXZ @ 0x18004AE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::Release(CVolumeControlBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 60);
  if ( !v1 && this )
    (*(void (__fastcall **)(CVolumeControlBase *, __int64))(*(_QWORD *)this + 216LL))(this, 1LL);
  return v1;
}
