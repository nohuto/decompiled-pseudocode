/*
 * XREFs of _DockableDeviceCollection::Create_::_1_::dtor$0 @ 0x1800C9D8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockableDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<DockableDeviceCollection>::~unique_ptr<DockableDeviceCollection>((_QWORD *)(a2 + 64));
}
