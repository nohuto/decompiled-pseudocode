/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x1C00079C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  __int64 v3; // rcx
  PACCESS_TOKEN v4; // rax
  void *v5; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v8; // ebx
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
    v8 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    if ( v8 )
      return v8;
  }
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
  }
  else
  {
    v4 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v5 = v4;
    if ( v4 )
    {
      v10 = SeQueryInformationToken(v4, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v5);
      if ( v10 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_6;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_6:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    v11 = 0;
    v12 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( ThreadSessionId < dword_1C00EE550 )
      v11 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00ECD98, v12);
    if ( !v11 )
      return 1;
    return v11;
  }
  else
  {
    return 1;
  }
}
