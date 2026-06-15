/*
 * XREFs of ??_EAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x1800427F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vector deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
