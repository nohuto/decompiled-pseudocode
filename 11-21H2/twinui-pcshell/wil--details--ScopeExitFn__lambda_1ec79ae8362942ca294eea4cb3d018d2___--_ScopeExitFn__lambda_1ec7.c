/*
 * XREFs of wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___ @ 0x180520B5C
 * Callers:
 *     _TabletModeCoverWindow::CreateDesktopThumbnail_::_1_::dtor$0 @ 0x180520F19 (_TabletModeCoverWindow--CreateDesktopThumbnail_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(v1 + 128));
    return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(v1 + 120));
  }
  return result;
}
