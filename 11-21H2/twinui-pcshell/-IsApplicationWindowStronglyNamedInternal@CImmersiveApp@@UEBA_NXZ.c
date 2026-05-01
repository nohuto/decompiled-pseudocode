/*
 * XREFs of ?IsApplicationWindowStronglyNamedInternal@CImmersiveApp@@UEBA_NXZ @ 0x1803065D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationWindowStronglyNamedInternal(CImmersiveApp *this)
{
  return *((_QWORD *)this + 44) != 0LL;
}
