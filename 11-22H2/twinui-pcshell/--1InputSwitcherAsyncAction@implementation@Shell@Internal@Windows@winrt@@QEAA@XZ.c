/*
 * XREFs of ??1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806FF6C4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue_::_1_::dtor$5 @ 0x1807002C0 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InsertActi_ea_1807002C0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction::~InputSwitcherAsyncAction(
        winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
