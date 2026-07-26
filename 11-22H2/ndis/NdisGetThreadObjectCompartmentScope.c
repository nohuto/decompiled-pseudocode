/*
 * XREFs of NdisGetThreadObjectCompartmentScope @ 0x1C0005810
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentScope(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  NTSTATUS v13; // edi
  KIRQL v14; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v7 = 0;
  if ( result )
  {
    *a3 = *(_DWORD *)result;
    *a2 = *(_DWORD *)(result + 4);
    result = ObfDereferenceObject((PVOID)result);
  }
  else
  {
    *a3 = 0;
    *a2 = 0;
  }
  if ( *a3 )
    return result;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  }
  else
  {
    v9 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v10 = v9;
    if ( v9 )
    {
      v13 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v10);
      if ( v13 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_8;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_8:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00F7620 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
    if ( ThreadSessionId < dword_1C00F7620 )
      v7 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00F5D78, v14);
    if ( !v7 )
      v7 = 1;
    result = v7;
  }
  else
  {
    result = 1LL;
  }
  *a3 = result;
  return result;
}
