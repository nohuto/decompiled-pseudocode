/*
 * XREFs of ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BF18
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C003BA20 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00686E8 (--1FxPkgPdo@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C002E980 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

FxDeviceText *__fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head)
{
  FxDeviceText *Next; // rcx
  FxDeviceText *result; // rax

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    result = FxDeviceText::`scalar deleting destructor'(Next);
  }
  Head->Next = 0LL;
  return result;
}
