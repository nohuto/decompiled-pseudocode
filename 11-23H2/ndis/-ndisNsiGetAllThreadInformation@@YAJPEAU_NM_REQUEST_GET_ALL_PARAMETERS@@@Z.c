/*
 * XREFs of ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F7C8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edx
  int *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int *ThreadProperty; // rax
  int v5; // esi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  int v11; // eax
  NTSTATUS v13; // edi
  KIRQL v14; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = (int *)*((_QWORD *)a1 + 5);
    if ( !v2 )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    v5 = 0;
    if ( ThreadProperty )
    {
      *v2 = *ThreadProperty;
      v2[1] = ThreadProperty[1];
      ObfDereferenceObject(ThreadProperty);
    }
    else
    {
      *(_QWORD *)v2 = 0LL;
    }
    if ( *v2 )
      return 0LL;
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    }
    else
    {
      v7 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        v13 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( v13 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_10;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_10:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00F7620 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D80);
      if ( ThreadSessionId < dword_1C00F7620 )
        v5 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00F5D80, v14);
      if ( !v5 )
        v5 = 1;
      v11 = v5;
    }
    else
    {
      v11 = 1;
    }
    *v2 = v11;
    return 0LL;
  }
  if ( (unsigned int)(v1 - 1) < 2 )
    return 3221225474LL;
  else
    return 3221225485LL;
}
