/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x1C0006050
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F7C8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  PACCESS_TOKEN v5; // rax
  void *v6; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  NTSTATUS v10; // ebx
  unsigned int v11; // edi
  KIRQL v12; // al
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v3 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    if ( v3 )
      return v3;
  }
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
  }
  else
  {
    v5 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v6 = v5;
    if ( v5 )
    {
      v10 = SeQueryInformationToken(v5, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v6);
      if ( v10 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_7;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_7:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00F7620 )
  {
    v11 = 0;
    v12 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D80);
    if ( ThreadSessionId < dword_1C00F7620 )
      v11 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00F5D80, v12);
    if ( !v11 )
      return 1;
    return v11;
  }
  else
  {
    return 1;
  }
}
