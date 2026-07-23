/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1407C9420
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1407C8B70 (NtCreatePrivateNamespace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     ObpLookupNamespaceEntry @ 0x1407C94E0 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx

  v2 = -1073741771;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)(CurrentServerSiloGlobals + 720);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
  v6 = CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v7 = &v6[16 * *(unsigned __int8 *)(a1 + 40)];
    v8 = (char **)*((_QWORD *)v7 + 1);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = (char *)a1;
    *((_QWORD *)v7 + 1) = a1;
    ++*((_DWORD *)v6 + 150);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
