/*
 * XREFs of ?AddRef@NestableRuntimeClass@WRL2@Microsoft@@UEAAKXZ @ 0x1800811F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestableRuntimeClass::AddRef(Microsoft::WRL2::NestableRuntimeClass *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 4);
  if ( v1 == 1 )
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)this + 80LL))(this);
  return v1;
}
