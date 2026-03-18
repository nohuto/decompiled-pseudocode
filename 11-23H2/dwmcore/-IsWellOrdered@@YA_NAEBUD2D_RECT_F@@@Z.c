/*
 * XREFs of ?IsWellOrdered@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18008FF5C
 * Callers:
 *     ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x18008FF24 (-Area@@YAMAEBUD2D_RECT_F@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18022A3E8 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWellOrdered(const struct D2D_RECT_F *a1)
{
  return a1->right >= a1->left && a1->bottom >= a1->top;
}
