/*
 * XREFs of _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1800C8B32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DockDeviceCollection::OnDeviceAttach_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 168));
}
