/*
 * XREFs of ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x180100010
 * Callers:
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache___0 @ 0x18010DB50 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredCompiledEffectCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache___0 @ 0x18010DB70 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredCompiledEffectCache___0.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache___0 @ 0x18010DB90 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spCompiledEffectCache___0.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spCompiledEffectCache___0 @ 0x18010DBB0 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spCompiledEffectCache___0.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

void __fastcall std::unique_ptr<CCompiledEffectCache>::~unique_ptr<CCompiledEffectCache>(CCompiledEffectCache **a1)
{
  CCompiledEffectCache *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CCompiledEffectCache::`scalar deleting destructor'(v1);
}
