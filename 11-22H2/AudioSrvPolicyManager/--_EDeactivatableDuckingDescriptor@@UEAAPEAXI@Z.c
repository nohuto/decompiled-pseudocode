/*
 * XREFs of ??_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z @ 0x180021040
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ @ 0x1800231B0 (-_Destroy@-$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x180020410 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 */

DeactivatableDuckingDescriptor *__fastcall DeactivatableDuckingDescriptor::`vector deleting destructor'(
        DeactivatableDuckingDescriptor *this,
        char a2)
{
  DeactivatableDuckingDescriptor::~DeactivatableDuckingDescriptor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
