/*
 * XREFs of ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00077B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *ThreadProperty; // rax
  int v5; // esi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  int v11; // eax
  __int64 result; // rax
  NTSTATUS v13; // edi
  int v14; // ecx
  bool v15; // cf
  KIRQL v16; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
      v5 = 0;
      if ( !ThreadProperty )
      {
        *(_QWORD *)v2 = 0LL;
        goto LABEL_6;
      }
      *(_DWORD *)v2 = *ThreadProperty;
      *(_DWORD *)(v2 + 4) = ThreadProperty[1];
      ObfDereferenceObject(ThreadProperty);
      if ( !*(_DWORD *)v2 )
      {
LABEL_6:
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
        if ( ThreadSessionId < dword_1C00EE550 )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
          if ( ThreadSessionId < dword_1C00EE550 )
            v5 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
          KeReleaseSpinLock(&qword_1C00ECD98, v16);
          if ( !v5 )
            v5 = 1;
          v11 = v5;
        }
        else
        {
          v11 = 1;
        }
        *(_DWORD *)v2 = v11;
      }
    }
    return 0LL;
  }
  v14 = v1 - 1;
  v15 = v1 == 1;
  result = 3221225485LL;
  if ( v15 || v14 == 1 )
    return 3221225474LL;
  return result;
}
