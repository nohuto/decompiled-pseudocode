/*
 * XREFs of ?Thunk_Message_CompilationFailed_72@?$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180176C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IEffectTemplateEvent_Receive<Windows::UI::Composition::CompositionEffectFactory>::Thunk_Message_CompilationFailed_72(
        Windows::UI::Composition::CompositionEffectFactory *a1,
        __int64 a2)
{
  return Windows::UI::Composition::CompositionEffectFactory::Message_CompilationFailed(
           a1,
           **(_DWORD **)a2,
           *(const unsigned __int16 **)(a2 + 8));
}
