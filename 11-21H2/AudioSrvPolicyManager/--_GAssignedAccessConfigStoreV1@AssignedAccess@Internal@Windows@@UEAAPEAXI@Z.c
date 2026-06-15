/*
 * XREFs of ??_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180042840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`scalar deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        char a2)
{
  void *v4; // rcx
  HANDLE ProcessHeap; // rax

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
