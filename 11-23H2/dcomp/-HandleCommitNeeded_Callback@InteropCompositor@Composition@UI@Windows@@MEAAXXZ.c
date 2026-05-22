/*
 * XREFs of ?HandleCommitNeeded_Callback@InteropCompositor@Composition@UI@Windows@@MEAAXXZ @ 0x180080300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::InteropCompositor::HandleCommitNeeded_Callback(
        Windows::UI::Composition::InteropCompositor *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 160);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 160));
  else
    Windows::UI::Composition::CompositorCommon::HandleCommitNeeded_Callback(this);
}
