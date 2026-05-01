/*
 * XREFs of _lambda_5a9ec3bdba9975d084688ff203e80696_::__lambda_5a9ec3bdba9975d084688ff203e80696_ @ 0x180206734
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___::_CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___ @ 0x180206910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___--_CTask.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x18020AC0C (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 *     _TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor$3 @ 0x18020AD80 (_TouchKeyboardExperienceManager--OnInputAppPropertyChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_5a9ec3bdba9975d084688ff203e80696_::__lambda_5a9ec3bdba9975d084688ff203e80696_(__int64 *a1)
{
  std::wstring::_Tidy_deallocate((__int64)(a1 + 6));
  std::wstring::_Tidy_deallocate((__int64)(a1 + 2));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
