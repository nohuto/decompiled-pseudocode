/*
 * XREFs of ?IsViewGhosted@CImmersiveApp@@UEBA_NXZ @ 0x1802D0FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsViewGhosted(CImmersiveApp *this)
{
  return CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 176));
}
