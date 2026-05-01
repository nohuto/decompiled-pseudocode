/*
 * XREFs of ?ShouldShowBackButton@CImmersiveApp@@UEAAHXZ @ 0x1803C4940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::ShouldShowBackButton(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // edi

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 216LL))((char *)this + 8);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
