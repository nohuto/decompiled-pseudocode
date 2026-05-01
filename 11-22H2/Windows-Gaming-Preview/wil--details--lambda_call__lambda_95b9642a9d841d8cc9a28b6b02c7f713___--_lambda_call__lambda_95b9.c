/*
 * XREFs of wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___ @ 0x180031344
 * Callers:
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180030920 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___(
        __int64 a1)
{
  HSTRING *v2; // rdi
  HSTRING v3; // rbx
  HSTRING *v4; // rdi
  HSTRING v5; // rbx
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    v2 = *(HSTRING **)a1;
    v3 = **(HSTRING **)(a1 + 8);
    WindowsDeleteString(**(HSTRING **)a1);
    *v2 = v3;
    v4 = *(HSTRING **)(a1 + 16);
    v5 = **(HSTRING **)(a1 + 24);
    result = WindowsDeleteString(*v4);
    *v4 = v5;
  }
  return result;
}
