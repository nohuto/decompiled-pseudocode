/*
 * XREFs of ?SafeToModify@CCompositorSynchronizedObject@DirectComposition@@UEAA_NXZ @ 0x1800353C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositorSynchronizedObject::SafeToModify(
        DirectComposition::CCompositorSynchronizedObject *this)
{
  return (unsigned int)(*((_DWORD *)this + 2) - 3) > 1;
}
