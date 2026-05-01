/*
 * XREFs of ?IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ @ 0x180175550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::IsInHighZOrderBand(CClassicWindowExternal *this)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 176LL))(*((_QWORD *)this + 7)) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
