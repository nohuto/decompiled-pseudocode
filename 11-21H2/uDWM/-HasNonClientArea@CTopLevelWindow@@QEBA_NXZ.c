/*
 * XREFs of ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x1800E5268
 * Callers:
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18003551C (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasNonClientArea(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 153) || *((_DWORD *)this + 154) || *((_DWORD *)this + 155) || *((_DWORD *)this + 156) )
    return 1;
  return result;
}
