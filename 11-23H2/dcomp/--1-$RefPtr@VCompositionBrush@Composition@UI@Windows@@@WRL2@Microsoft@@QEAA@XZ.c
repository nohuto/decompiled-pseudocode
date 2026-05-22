/*
 * XREFs of ??1?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x180082820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::~RefPtr<Windows::UI::Composition::CompositionBrush>(
        void *a1)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(a1);
}
