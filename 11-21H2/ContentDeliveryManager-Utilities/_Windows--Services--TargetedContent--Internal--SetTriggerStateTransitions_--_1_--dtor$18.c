/*
 * XREFs of _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$18 @ 0x1800F3705
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180028AA4 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~4u;
    Microsoft::WRL::Wrappers::HString::~HString((HSTRING *)(a2 + 72));
  }
}
