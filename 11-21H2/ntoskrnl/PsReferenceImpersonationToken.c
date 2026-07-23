/*
 * XREFs of PsReferenceImpersonationToken @ 0x1406A77B0
 * Callers:
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v10; // rbp
  BOOLEAN v11; // al

  if ( (*((_DWORD *)Thread + 344) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)Thread + 1360, 0LL);
  if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
  {
    v10 = (void *)*((_QWORD *)Thread + 193);
    v11 = 0;
    if ( !v10 )
    {
      v10 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (*((_DWORD *)Thread + 344) & 0x100) != 0 )
        v11 = 1;
    }
    *CopyOnOpen = v11;
    ObfReferenceObjectWithTag(v10, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)Thread + 318) & 3;
    *EffectiveOnly = (*((_BYTE *)Thread + 1272) & 4) != 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Thread + 170, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Thread + 170);
  sub_1402AFC00((ULONG_PTR)Thread + 1360);
  sub_1402AC800((__int64)CurrentThread);
  return v10;
}
