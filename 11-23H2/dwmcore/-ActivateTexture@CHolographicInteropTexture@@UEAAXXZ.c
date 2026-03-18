/*
 * XREFs of ?ActivateTexture@CHolographicInteropTexture@@UEAAXXZ @ 0x180108860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::ActivateTexture(CHolographicInteropTexture *this)
{
  *((_BYTE *)this + 152) = 1;
  *((_BYTE *)this + 160) = 1;
}
