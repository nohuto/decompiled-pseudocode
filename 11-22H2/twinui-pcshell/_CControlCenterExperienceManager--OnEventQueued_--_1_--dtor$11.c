/*
 * XREFs of _CControlCenterExperienceManager::OnEventQueued_::_1_::dtor$11 @ 0x180420EE7
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BFB34 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::OnEventQueued_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~4u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 512));
  }
}
