/*
 * XREFs of ??_GApplicationContainerActivationPolicy@@UEAAPEAXI@Z @ 0x180571890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationContainerActivationPolicy@@UEAA@XZ @ 0x180571664 (--1ApplicationContainerActivationPolicy@@UEAA@XZ.c)
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
