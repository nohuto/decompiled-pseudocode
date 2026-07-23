/*
 * XREFs of PsDisableImpersonation @ 0x140725F50
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14080CD20 @ 0x14080CD20 (sub_14080CD20.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // r14
  struct _KTHREAD *CurrentThread; // rbp
  void *v6; // rax
  BOOLEAN result; // al
  void *v8; // rcx

  v2 = 0;
  if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Thread + 1360, 0LL);
    if ( _interlockedbittestandreset((volatile signed __int32 *)Thread + 344, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = *((_DWORD *)Thread + 318) & 3;
      ImpersonationState->EffectiveOnly = (*((_BYTE *)Thread + 1272) & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)Thread + 344)) & 1;
      v6 = (void *)*((_QWORD *)Thread + 193);
      if ( v6 )
      {
        ImpersonationState->Token = v6;
        v8 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
        *((_QWORD *)Thread + 193) = 0LL;
        ObfDereferenceObject(v8);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Thread + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((char *)Thread + 1360);
    sub_1402AFC00((ULONG_PTR)Thread + 1360);
    sub_1402AC800((__int64)CurrentThread);
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
