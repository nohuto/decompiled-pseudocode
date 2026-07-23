/*
 * XREFs of PsAssignImpersonationToken @ 0x1407AF0C0
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsRevertThreadToSelf @ 0x1407AF180 (PsRevertThreadToSelf.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  KPROCESSOR_MODE v6; // r9
  PVOID v7; // rsi
  PVOID Tokena; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsRevertThreadToSelf(Thread);
    return 0;
  }
  v6 = *((_BYTE *)CurrentThread + 562);
  Tokena = 0LL;
  result = ObReferenceObjectByHandle(Token, 4u, (POBJECT_TYPE)SeTokenObjectType, v6, &Tokena, 0LL);
  if ( result >= 0 )
  {
    v7 = Tokena;
    if ( *((_DWORD *)Tokena + 48) != 2 )
    {
      ObfDereferenceObject(Tokena);
      return -1073741656;
    }
    v4 = PsImpersonateClient(Thread, Tokena, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Tokena + 49));
    ObfDereferenceObject(v7);
    return v4;
  }
  return result;
}
