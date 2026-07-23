/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x1407C361C
 * Callers:
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SepReferenceLogonSession @ 0x1407C35E4 (SepReferenceLogonSession.c)
 *     SeInitServerSilo @ 0x1409C8FF0 (SeInitServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9860 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x1409C9C20 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1409CF2F0 (SeGetLinkedToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepReferenceLogonSessionSilo(_DWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v9; // rdi
  __int64 result; // rax

  v6 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v7 = SepLogonSessions + 8 * v6;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = &SepRmDbLock + (v6 & 3);
  ExAcquireResourceExclusiveLite(v9, 1u);
  do
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
    {
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
      return 3221225567LL;
    }
  }
  while ( *(_QWORD *)(v7 + 160) != a2 || *a1 != *(_DWORD *)(v7 + 8) || a1[1] != *(_DWORD *)(v7 + 12) );
  _m_prefetchw((const void *)(v7 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 8u) & 8) != 0
    && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v7;
  return result;
}
