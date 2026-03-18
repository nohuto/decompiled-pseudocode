/*
 * XREFs of ObpGetShadowDirectory @ 0x1406A79A0
 * Callers:
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, __int64 a2, int *a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v4; // eax
  __int64 v7; // rsi
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  char IsSandboxedToken; // al
  int v16; // ecx
  int v17; // ecx

  v4 = *(_DWORD *)(a1 + 336);
  v7 = 0LL;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x10) != 0 && (*a3 & 6) == 0 )
    {
      IsSandboxedToken = RtlIsSandboxedToken(a4 + 1);
      v16 = *a3;
      if ( IsSandboxedToken )
        v17 = v16 | 2;
      else
        v17 = v16 | 4;
      *a3 = v17;
    }
    if ( (*(_DWORD *)(a1 + 336) & 0x10) == 0 || (*a3 & 2) != 0 )
      return *(_QWORD *)(a1 + 312);
    return v7;
  }
  result = *(_QWORD *)(a1 + 304);
  if ( result )
  {
    if ( result == a2 )
      return *(_QWORD *)(a2 + 8);
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
    ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
    v12 = *(_QWORD *)(a1 + 304);
    if ( v12 )
      v7 = *(_QWORD *)(v12 + 8);
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    v13 = KeGetCurrentThread();
    v14 = v13->SpecialApcDisable++ == -1;
    if ( !v14 || ($CEA84C04E3712D858E5667A507841A2A *)v13->ApcState.ApcListHead[0].Flink == &v13->152 )
      return v7;
    KiCheckForKernelApcDelivery();
    return v7;
  }
  return result;
}
