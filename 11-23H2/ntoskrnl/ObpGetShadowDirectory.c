/*
 * XREFs of ObpGetShadowDirectory @ 0x1407B4C9C
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, __int64 a2, int *a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v4; // eax
  __int64 v7; // rsi
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rbx
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
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
    v11 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
    v12 = *(_QWORD *)(a1 + 304);
    if ( v12 )
      v7 = *(_QWORD *)(v12 + 8);
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    v13 = KeGetCurrentThread();
    if ( v13->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return v7;
  }
  return result;
}
