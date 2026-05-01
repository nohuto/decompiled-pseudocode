/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x18073821C
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$13 @ 0x1802B9014 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$13.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801852AC (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
