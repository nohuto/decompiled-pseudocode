/*
 * XREFs of ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1803C0D70
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x1800234B0 (-_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetDestinationInformationInternal(const RECT *this, HWND *a2, struct tagRECT *a3)
{
  int v6; // edi

  SetRectEmpty(a3);
  *a2 = 0LL;
  v6 = CImmersiveApp::_ValidateApplicationState((__int64)&this[-7], 1);
  if ( v6 >= 0 )
  {
    *a2 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)&this[11]);
    CopyRect(a3, this + 12);
  }
  return (unsigned int)v6;
}
