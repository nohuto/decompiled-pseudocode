/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180035F24
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(__int64 a1, int *a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  int v4; // eax

  v2 = (*(_BYTE *)(a1 + 608) & 0x40) == 0;
  v3 = *(_QWORD *)(a1 + 752);
  if ( !v2 || (v4 = 2, (*(_BYTE *)(v3 + 667) & 0x10) != 0) )
    v4 = 1;
  *a2 = v4;
  if ( *(_DWORD *)(v3 + 96) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 100) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 104) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 108) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
    *a2 = v4;
  }
  if ( (*(_BYTE *)(v3 + 669) & 4) != 0 )
    *a2 = v4 | 0x80;
  return a2;
}
