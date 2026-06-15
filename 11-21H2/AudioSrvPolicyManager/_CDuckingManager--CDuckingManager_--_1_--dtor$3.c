/*
 * XREFs of _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x180044A0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDuckingManager::CDuckingManager_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>(*(_QWORD *)(a2 + 48) + 72LL);
}
