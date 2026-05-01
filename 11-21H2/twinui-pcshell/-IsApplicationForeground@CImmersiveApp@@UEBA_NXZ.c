/*
 * XREFs of ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180169950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationForeground(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 116) & 2) != 0;
}
