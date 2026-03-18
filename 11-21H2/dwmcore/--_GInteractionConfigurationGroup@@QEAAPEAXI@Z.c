/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180185F7C
 * Callers:
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801870F0 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018A1CC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E0C4C (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(void **this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this);
  return this;
}
