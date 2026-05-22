/*
 * XREFs of _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$14 @ 0x180056470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundManager::OnActivationObjectNotification_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)(a2 + 128));
}
