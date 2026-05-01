/*
 * XREFs of ??_GApplicationContainerActivationPolicy@@UEAAPEAXI@Z @ 0x18062F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationContainerActivationPolicy@@UEAA@XZ @ 0x18062F448 (--1ApplicationContainerActivationPolicy@@UEAA@XZ.c)
 */

ApplicationContainerActivationPolicy *__fastcall ApplicationContainerActivationPolicy::`scalar deleting destructor'(
        ApplicationContainerActivationPolicy *this,
        char a2)
{
  ApplicationContainerActivationPolicy::~ApplicationContainerActivationPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
