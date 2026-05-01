/*
 * XREFs of ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180158A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetTitle(CImmersiveApp *this, unsigned __int16 **a2)
{
  unsigned int v4; // edi

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = 0LL;
  v4 = -2147023728;
  if ( *((_QWORD *)this + 47) )
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(***((_QWORD ***)this + 46) + 168LL))(
           **((_QWORD **)this + 46),
           a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
