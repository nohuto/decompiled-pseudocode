/*
 * XREFs of ?HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180080390
 * Callers:
 *     ?HandleCommitNeeded_Callback@InteropCompositor@Composition@UI@Windows@@MEAAXXZ @ 0x180080300 (-HandleCommitNeeded_Callback@InteropCompositor@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositorCommon::HandleCommitNeeded_Callback(
        Windows::UI::Composition::CompositorCommon *this)
{
  Windows::UI::Composition::Core::CompositorController *v2; // rcx

  v2 = (Windows::UI::Composition::Core::CompositorController *)*((_QWORD *)this + 58);
  if ( v2 )
    Windows::UI::Composition::Core::CompositorController::FireCommitNeeded_Callback(v2);
  else
    Windows::UI::Composition::CompositorCommon::InternalCommit_Callback(this, 0LL);
}
