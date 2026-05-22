/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801D5398
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$7 @ 0x1801D1C67 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801D55D8 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
