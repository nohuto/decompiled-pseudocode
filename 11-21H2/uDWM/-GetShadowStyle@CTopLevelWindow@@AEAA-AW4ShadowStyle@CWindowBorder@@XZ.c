/*
 * XREFs of ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x1800356C8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180035720 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::GetShadowStyle(CTopLevelWindow *a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  char v4; // al
  unsigned int v5; // eax

  if ( (unsigned int)CTopLevelWindow::GetEffectiveCornerStyle((__int64)a1) - 3 <= 1 )
    return 1LL;
  v2 = !CTopLevelWindow::TreatAsActiveWindow(a1);
  v4 = *(_BYTE *)(v3 + 669);
  if ( v2 )
    v5 = v4 & 4 | 0x10;
  else
    v5 = v4 & 4 | 8;
  return v5 >> 2;
}
