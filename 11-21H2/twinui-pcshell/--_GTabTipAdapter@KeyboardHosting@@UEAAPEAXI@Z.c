/*
 * XREFs of ??_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z @ 0x18046FC10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x18046F41C (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
