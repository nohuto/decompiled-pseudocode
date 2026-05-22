/*
 * XREFs of ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18008EB50
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002DDD0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E204 (-InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::AgileRef *__fastcall Microsoft::WRL::AgileRef::AgileRef(Microsoft::WRL::AgileRef *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
