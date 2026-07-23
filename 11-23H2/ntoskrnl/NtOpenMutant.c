/*
 * XREFs of NtOpenMutant @ 0x14068A010
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // esi
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // ecx
  int v9; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  v11[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MutantHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)ExMutantObjectType, (_DWORD)ObjectAttributes, 0, DesiredAccess, 0LL, (__int64)v11);
  if ( v8 == -1073741788 && ExCrossVmMutantObjectType )
  {
    LOBYTE(v9) = PreviousMode;
    v8 = ObOpenObjectByName(v3, (_DWORD)ExCrossVmMutantObjectType, v9, 0, DesiredAccess, 0LL, (__int64)v11);
  }
  if ( v8 >= 0 )
    *MutantHandle = (HANDLE)v11[0];
  return v8;
}
