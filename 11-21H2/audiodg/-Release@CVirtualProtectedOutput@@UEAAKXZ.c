/*
 * XREFs of ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14005AF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14005A83C (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x14005A8E0 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::Release(CVirtualProtectedOutput *this)
{
  __int64 v1; // rsi
  unsigned __int32 v3; // edi

  v1 = *((_QWORD *)this + 1);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 )
  {
    CProtectedOutputController::AdviseVpoDeletion(*((__int64 ***)this + 1), this);
    CVirtualProtectedOutput::`scalar deleting destructor'(this);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
