/*
 * XREFs of ??_EAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180047D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vector deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *this,
        char a2)
{
  *(_QWORD *)this = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
