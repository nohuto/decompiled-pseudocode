/*
 * XREFs of ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x18014D110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::GetAppUserModelId(CClassicWindowExternal *this, unsigned __int16 **a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 7) + 56LL))(
                    *((_QWORD *)this + 7),
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
