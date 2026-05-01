/*
 * XREFs of ?GetActivationTime@CImmersiveApp@@UEBA?AU_FILETIME@@XZ @ 0x1801BFE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _FILETIME __fastcall CImmersiveApp::GetActivationTime(CImmersiveApp *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 572);
  return (struct _FILETIME)a2;
}
