/*
 * XREFs of ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180051B54
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180023214 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180051BBC (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetShadowStyle(CTopLevelWindow *a1)
{
  int EffectiveCornerStyle; // eax
  char v3; // dl

  EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle((__int64)a1);
  if ( (*((_BYTE *)a1 + 624) & 0x20) != 0 )
    return 0LL;
  if ( (unsigned int)(EffectiveCornerStyle - 3) <= 1 )
    return 1LL;
  if ( CTopLevelWindow::TreatAsActiveWindow(a1) )
    return (unsigned int)(v3 != 0) + 2;
  return (unsigned int)(v3 != 0) + 4;
}
