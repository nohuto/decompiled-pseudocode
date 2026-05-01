/*
 * XREFs of ?GetCanHandleCloseRequest@CImmersiveApp@@UEAAJPEAH@Z @ 0x1803C0C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetCanHandleCloseRequest(CImmersiveApp *this, int *a2)
{
  int v4; // ebx
  char v5; // al
  RTL_SRWLOCK *v6; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( *((_QWORD *)this + 47) )
    v5 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 46) + 96LL))(**((_QWORD **)this + 46));
  else
    v5 = 0;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  LOBYTE(v4) = v5 != 0;
  *a2 = v4;
  ReleaseSRWLockShared(v6);
  return 0LL;
}
