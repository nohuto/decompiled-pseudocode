/*
 * XREFs of ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x14005A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::AddRef(CVirtualProtectedOutput *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
