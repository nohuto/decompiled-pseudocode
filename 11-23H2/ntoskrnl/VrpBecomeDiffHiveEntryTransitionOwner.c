/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x14077C5E0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14077BA9C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14077BECC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v1 = KeGetCurrentThread();
  v3 = KeAbPreAcquire((__int64)v1, 0LL);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return 1;
}
