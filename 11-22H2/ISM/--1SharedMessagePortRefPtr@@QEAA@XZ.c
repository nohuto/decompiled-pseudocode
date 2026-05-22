/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1802000CC
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$7 @ 0x1801FD803 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x18020030C (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
