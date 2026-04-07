/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180006228
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000344C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000528C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180005348 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  int v1; // eax
  char v2; // cl

  v1 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v2 = 1;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 0;
  return v2;
}
