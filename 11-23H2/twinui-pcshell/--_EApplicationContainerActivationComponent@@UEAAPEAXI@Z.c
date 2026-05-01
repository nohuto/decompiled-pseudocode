/*
 * XREFs of ??_EApplicationContainerActivationComponent@@UEAAPEAXI@Z @ 0x18062F66C
 * Callers:
 *     ??_EApplicationContainerActivationComponent@@WCI@EAAPEAXI@Z @ 0x1802A9EE0 (--_EApplicationContainerActivationComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationContainerActivationComponent@@UEAA@XZ @ 0x18062F3E8 (--1ApplicationContainerActivationComponent@@UEAA@XZ.c)
 */

ApplicationContainerActivationComponent *__fastcall ApplicationContainerActivationComponent::`vector deleting destructor'(
        ApplicationContainerActivationComponent *this,
        char a2)
{
  ApplicationContainerActivationComponent::~ApplicationContainerActivationComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
