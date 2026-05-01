/*
 * XREFs of ??_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z @ 0x18014DF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1AgileApplicationViewChangeListenerConverter@@UEAA@XZ @ 0x18014DFCC (--1AgileApplicationViewChangeListenerConverter@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

AgileApplicationViewChangeListenerConverter *__fastcall AgileApplicationViewChangeListenerConverter::`scalar deleting destructor'(
        AgileApplicationViewChangeListenerConverter *this,
        char a2)
{
  AgileApplicationViewChangeListenerConverter::~AgileApplicationViewChangeListenerConverter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
