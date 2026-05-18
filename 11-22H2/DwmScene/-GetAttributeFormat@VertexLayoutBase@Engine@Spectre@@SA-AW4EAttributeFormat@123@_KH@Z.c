/*
 * XREFs of ?GetAttributeFormat@VertexLayoutBase@Engine@Spectre@@SA?AW4EAttributeFormat@123@_KH@Z @ 0x18008C320
 * Callers:
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription @ 0x1800D3BF8 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::VertexLayoutBase::GetAttributeFormat(unsigned __int64 a1, char a2)
{
  return (a1 >> a2) & 7;
}
