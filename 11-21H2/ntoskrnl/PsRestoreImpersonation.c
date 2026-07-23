/*
 * XREFs of PsRestoreImpersonation @ 0x140726090
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14080CD20 @ 0x14080CD20 (sub_14080CD20.c)
 * Callees:
 *     sub_1402A487C @ 0x1402A487C (sub_1402A487C.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407AF4B0 @ 0x1407AF4B0 (sub_1407AF4B0.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r15
  void *v3; // rbp
  __int64 Token; // rdi
  void *v6; // r13
  PACCESS_TOKEN v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // bl

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( sub_1402A487C(Token) )
    {
      Token = sub_1402A487C(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Thread + 1360, 0LL);
  if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
  {
    v6 = (void *)*((_QWORD *)Thread + 193);
    v3 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( ImpersonationState->Token )
  {
    *((_QWORD *)Thread + 159) = v10;
    *((_QWORD *)Thread + 193) = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)Thread + 344, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)Thread + 344, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)Thread + 344, 8u);
    goto LABEL_11;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)Thread + 344, 3u) )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  v11 = 1;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Thread + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)Thread + 1360);
  sub_1402AFC00((ULONG_PTR)Thread + 1360);
  sub_1402AC800((__int64)CurrentThread);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v11 )
      sub_1407AF4B0(Thread, CurrentThread);
  }
}
