/*
 * XREFs of ?GetPropertyInfoForIndex@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@G@Z @ 0x180082F88
 * Callers:
 *     ?ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180084C40 (-ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct Spectre::Engine::ShaderPropertyLayout::PropertyInfo *__fastcall Spectre::Engine::ShaderPropertyLayout::GetPropertyInfoForIndex(
        Spectre::Engine::ShaderPropertyLayout *this,
        unsigned __int16 a2)
{
  return (const struct Spectre::Engine::ShaderPropertyLayout::PropertyInfo *)(*((_QWORD *)this + 7) + 56LL * a2);
}
