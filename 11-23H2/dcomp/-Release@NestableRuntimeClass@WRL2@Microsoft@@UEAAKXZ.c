/*
 * XREFs of ?Release@NestableRuntimeClass@WRL2@Microsoft@@UEAAKXZ @ 0x18007EE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestableRuntimeClass::Release(Microsoft::WRL2::NestableRuntimeClass *this)
{
  unsigned __int32 v1; // ebx
  __int64 v3; // rdx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 )
  {
    v3 = *(_QWORD *)this;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)this + 64LL))(this, v3);
  }
  return v1;
}
