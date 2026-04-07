/*
 * XREFs of ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x1800E61F0
 * Callers:
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18001AB50 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasNonClientArea(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 157) || *((_DWORD *)this + 158) || *((_DWORD *)this + 159) || *((_DWORD *)this + 160) )
    return 1;
  return result;
}
