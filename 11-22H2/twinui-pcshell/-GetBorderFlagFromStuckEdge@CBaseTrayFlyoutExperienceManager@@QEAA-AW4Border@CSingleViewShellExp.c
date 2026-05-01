/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA?AW4Border@CSingleViewShellExperience@@W4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180472188
 * Callers:
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x180475134 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::GetBorderFlagFromStuckEdge(_DWORD *a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // edx
  int v4; // edx

  v2 = 0;
  if ( !a2 )
  {
    v2 = 14;
LABEL_9:
    if ( a1[109] == a1[105] )
      v2 &= ~8u;
    if ( (v2 & 2) == 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v2 = 13;
    goto LABEL_9;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 11;
    goto LABEL_9;
  }
  if ( v4 != 1 )
    return v2;
  v2 = 7;
LABEL_12:
  if ( a1[107] == a1[103] )
    v2 &= ~2u;
LABEL_14:
  if ( (v2 & 4) != 0 && a1[108] == a1[104] )
    v2 &= ~4u;
  if ( (v2 & 1) != 0 && a1[106] == a1[102] )
    v2 &= ~1u;
  return v2;
}
