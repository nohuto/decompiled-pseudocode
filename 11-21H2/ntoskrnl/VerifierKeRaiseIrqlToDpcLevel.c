/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x140A95F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 VerifierKeRaiseIrqlToDpcLevel()
{
  __int64 (*v0)(void); // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_140C29FC4;
  v1 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 160LL);
  LOBYTE(v1) = 2;
  v2 = ViKeIrqlLogAndTrimMemory(v1);
  result = v0();
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
