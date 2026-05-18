/*
 * XREFs of Spectre::Engine::D3D11::_anonymous_namespace_::GetNativeFormat @ 0x1800D44D4
 * Callers:
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription @ 0x1800D3BF8 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::D3D11::_anonymous_namespace_::GetNativeFormat(int a1, int a2)
{
  return *(unsigned int *)&asc_18019A500[24 * a2 - 24 + 4 * a1];
}
