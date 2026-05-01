/*
 * XREFs of ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x18046FC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18046F544 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 */

KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
