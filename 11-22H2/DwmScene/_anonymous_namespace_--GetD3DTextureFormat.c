/*
 * XREFs of _anonymous_namespace_::GetD3DTextureFormat @ 0x1800CE0DC
 * Callers:
 *     _anonymous_namespace_::ApplyCreationOptions2D @ 0x1800CCE7C (_anonymous_namespace_--ApplyCreationOptions2D.c)
 *     _anonymous_namespace_::ApplyCreationOptions3D @ 0x1800CCFA4 (_anonymous_namespace_--ApplyCreationOptions3D.c)
 * Callees:
 *     Spectre::Engine::D3D11::GetFormat @ 0x1800CE990 (Spectre--Engine--D3D11--GetFormat.c)
 */

__int64 anonymous_namespace_::GetD3DTextureFormat()
{
  __int64 result; // rax

  result = Spectre::Engine::D3D11::GetFormat();
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
