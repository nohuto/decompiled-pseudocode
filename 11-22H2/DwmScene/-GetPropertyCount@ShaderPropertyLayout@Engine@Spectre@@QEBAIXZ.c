/*
 * XREFs of ?GetPropertyCount@ShaderPropertyLayout@Engine@Spectre@@QEBAIXZ @ 0x180082F48
 * Callers:
 *     ?ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180084C40 (-ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetPropertyCount(Spectre::Engine::ShaderPropertyLayout *this)
{
  return 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3);
}
