/*
 * XREFs of NtCreateMutant @ 0x1407B3A00
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x14033B060 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  __int64 v9; // rdx
  NTSTATUS inserted; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v14 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)MutantHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v12,
               56,
               0,
               0,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    LOBYTE(v9) = InitialOwner;
    KeInitializeMutantEx((__int64)Object, v9, ExpForceEnableMutantAutoboost != 0);
    inserted = ObInsertObjectEx((char *)Object, 0LL, DesiredAccess, 0, 0, 0LL, &v14);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v14;
  }
  return inserted;
}
