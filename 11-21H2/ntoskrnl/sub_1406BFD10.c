/*
 * XREFs of sub_1406BFD10 @ 0x1406BFD10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeImpersonateClientEx @ 0x1406BFE80 (SeImpersonateClientEx.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_1406BFD10(HANDLE Handle, HANDLE a2, struct _SECURITY_QUALITY_OF_SERVICE *a3)
{
  KPROCESSOR_MODE v6; // di
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  PVOID v9; // rdi
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+40h] [rbp-78h] BYREF
  _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v13; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  memset(&ClientContext, 0, 0x44uLL);
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *a3;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 0x200u, (POBJECT_TYPE)PsThreadType, v6, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x100u, (POBJECT_TYPE)PsThreadType, v6, &v13, 0LL);
    v9 = Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v13);
        SeDeleteClientSecurity(&ClientContext);
      }
      ObfDereferenceObject(v13);
    }
    ObfDereferenceObject(v9);
    return v8;
  }
  return result;
}
