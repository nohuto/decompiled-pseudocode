/*
 * XREFs of ?SetTextureUpdatesPaused@CHolographicClient@@UEAAX_N@Z @ 0x180108960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetTextureUpdatesPaused(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 200) = a2;
}
