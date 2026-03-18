/*
 * XREFs of ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C001FA30
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C001F8E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C001FC38 (--1FxPkgPdo@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0061B80 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

void *__fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head, unsigned int a2)
{
  FxDeviceText *Next; // rcx
  void *result; // rax

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    result = FxDeviceText::`scalar deleting destructor'(Next, a2);
  }
  Head->Next = 0LL;
  return result;
}
