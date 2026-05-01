/*
 * XREFs of ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x1803052D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetPIDForRotation(CImmersiveApp *this)
{
  HWND ApplicationWindow; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  dwProcessId = 0;
  if ( (*((_BYTE *)this + 464) & 1) != 0 )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 176));
    if ( ApplicationWindow )
      GetWindowThreadProcessId(ApplicationWindow, &dwProcessId);
  }
  return dwProcessId;
}
