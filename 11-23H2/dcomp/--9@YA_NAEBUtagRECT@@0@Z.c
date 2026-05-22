/*
 * XREFs of ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800A7B70
 * Callers:
 *     ?SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z @ 0x1801B0770 (-SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
