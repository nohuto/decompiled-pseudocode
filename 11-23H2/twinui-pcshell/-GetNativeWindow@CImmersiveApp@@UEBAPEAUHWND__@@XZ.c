/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x1803C17A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 464) & 1) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 176));
  return result;
}
