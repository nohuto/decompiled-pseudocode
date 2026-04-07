/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180047C2C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180047BA8 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a1 )
    return *(_DWORD *)a1 != 6;
  return result;
}
