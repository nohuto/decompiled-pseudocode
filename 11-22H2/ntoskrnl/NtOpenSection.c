/*
 * XREFs of NtOpenSection @ 0x14068C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  __int64 v6; // rdx
  NTSTATUS result; // eax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  v8 = 0LL;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SectionHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)SectionHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(
             v3,
             (_DWORD)MmSectionObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v8);
  *SectionHandle = v8;
  return result;
}
