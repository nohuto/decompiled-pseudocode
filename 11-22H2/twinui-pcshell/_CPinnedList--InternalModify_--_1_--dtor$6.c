/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$6 @ 0x18075807D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CBackupLocationManager *__fastcall CPinnedList::InternalModify_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
           (CBackupLocationManager **)(a2 + 312),
           a2);
}
