/*
 * XREFs of SepIdAssignableAsGroup @ 0x1409CDE98
 * Callers:
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14022A880 (RtlEqualSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall SepIdAssignableAsGroup(__int64 a1, void *a2)
{
  BOOLEAN v2; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // r15

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v7));
      if ( v2 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
