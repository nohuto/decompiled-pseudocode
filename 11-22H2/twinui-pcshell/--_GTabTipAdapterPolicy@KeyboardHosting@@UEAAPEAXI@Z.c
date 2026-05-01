/*
 * XREFs of ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x180196DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x180196E0C (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2D0uLL);
  return this;
}
