/*
 * XREFs of ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x180497B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ @ 0x180497B00 (--1-$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ.c)
 */

CPrivilegedTabletModeOperations *__fastcall CPrivilegedTabletModeOperations::`scalar deleting destructor'(
        CPrivilegedTabletModeOperations *this,
        char a2)
{
  PrivilegedOperationsBase<IPrivilegedForegroundOperations>::~PrivilegedOperationsBase<IPrivilegedForegroundOperations>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
