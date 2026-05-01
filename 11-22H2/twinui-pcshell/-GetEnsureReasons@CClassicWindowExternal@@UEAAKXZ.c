/*
 * XREFs of ?GetEnsureReasons@CClassicWindowExternal@@UEAAKXZ @ 0x1803A8E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowExternal::GetEnsureReasons(CClassicWindowExternal *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // edi

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
