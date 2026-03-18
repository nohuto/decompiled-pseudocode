/*
 * XREFs of ExWnfExitProcess @ 0x1407CC5C8
 * Callers:
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteProcessContext @ 0x1407CC628 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1407CC85C (ExpWnfDeleteScopeById.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v5 + 2152);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
