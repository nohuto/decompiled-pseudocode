/*
 * XREFs of ??_GApplicationContainerActivation@@EEAAPEAXI@Z @ 0x18062F630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationContainerActivation@@EEAA@XZ @ 0x18062F3BC (--1ApplicationContainerActivation@@EEAA@XZ.c)
 */

ApplicationContainerActivation *__fastcall ApplicationContainerActivation::`scalar deleting destructor'(
        ApplicationContainerActivation *this,
        char a2)
{
  ApplicationContainerActivation::~ApplicationContainerActivation((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
