/*
 * XREFs of ?SetRenderClip@SpectreRenderer@@EEAAXAEBUD2D_RECT_F@@@Z @ 0x18001B030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::SetRenderClip(SpectreRenderer *this, const struct D2D_RECT_F *a2)
{
  __int128 v2; // [rsp+0h] [rbp-18h]

  LODWORD(v2) = (int)a2->left;
  DWORD1(v2) = (int)a2->top;
  DWORD2(v2) = (int)a2->right;
  HIDWORD(v2) = (int)a2->bottom;
  *((_OWORD *)this + 8) = v2;
}
