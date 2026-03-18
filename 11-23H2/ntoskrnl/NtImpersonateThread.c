/*
 * XREFs of NtImpersonateThread @ 0x1407F5C80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     SeDeleteClientSecurity @ 0x14071D180 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurity @ 0x14071D350 (SeCreateClientSecurity.c)
 *     SeImpersonateClientEx @ 0x1407F5DF0 (SeImpersonateClientEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtImpersonateThread(HANDLE Handle, HANDLE a2, struct _SECURITY_QUALITY_OF_SERVICE *a3)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  PVOID v9; // rdi
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+40h] [rbp-78h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v13; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  memset(&ClientContext, 0, 0x44uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *a3;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v13, 0LL);
    v9 = Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v13);
        SeDeleteClientSecurity((__int64)&ClientContext);
      }
      ObfDereferenceObject(v13);
    }
    ObfDereferenceObject(v9);
    return v8;
  }
  return result;
}
