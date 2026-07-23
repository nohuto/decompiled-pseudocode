/*
 * XREFs of NtQuerySecurityObject @ 0x1406A5FA0
 * Callers:
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406A6138 @ 0x1406A6138 (sub_1406A6138.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  KPROCESSOR_MODE v6; // di
  PULONG v7; // rbx
  __int64 v8; // rcx
  NTSTATUS result; // eax
  PVOID v10; // r14
  NTSTATUS v11; // edi
  ACCESS_MASK DesiredAccess; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-28h] BYREF

  DesiredAccess = 0;
  HandleInformation = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = LengthNeeded;
    v8 = (__int64)LengthNeeded;
    if ( (unsigned __int64)LengthNeeded >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    ProbeForWrite(SecurityDescriptor, Length, 4u);
  }
  else
  {
    v7 = LengthNeeded;
  }
  sub_1406A6138(SecurityInformation, &DesiredAccess);
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, DesiredAccess, 0LL, v6, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    v10 = Object;
    v11 = sub_14042A5E0(Object, 1LL);
    *v7 = Length;
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
