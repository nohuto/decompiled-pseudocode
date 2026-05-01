/*
 * XREFs of ??_GApplicationViewOperation@@UEAAPEAXI@Z @ 0x18005B100
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewOperation@@UEAA@XZ @ 0x18005B13C (--1ApplicationViewOperation@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ApplicationViewOperation *__fastcall ApplicationViewOperation::`scalar deleting destructor'(
        ApplicationViewOperation *this,
        char a2)
{
  ApplicationViewOperation::~ApplicationViewOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x118uLL);
  return this;
}
