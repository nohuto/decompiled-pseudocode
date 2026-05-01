/*
 * XREFs of _ObservableObjectArray::_FireNotification_::_1_::dtor$2 @ 0x18023421C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ObservableObjectArray::_FireNotification_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((void *)(a2 + 64));
}
