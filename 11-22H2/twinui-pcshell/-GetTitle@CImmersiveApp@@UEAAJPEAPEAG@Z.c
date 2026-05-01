/*
 * XREFs of ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800707F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTitle@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAPEAG@Z @ 0x180070850 (-GetTitle@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetTitle(CImmersiveApp *this, unsigned __int16 **a2)
{
  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = CImmersiveApp::CImmersiveWindowCollection::GetTitle((CImmersiveApp *)((char *)this + 200), a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
