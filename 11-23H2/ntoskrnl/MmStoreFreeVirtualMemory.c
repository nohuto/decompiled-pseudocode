/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140A45FD4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1405CBD78 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiUnlockPageTableRange @ 0x14064D730 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  __int64 *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0, &v7);
  v3 = *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32);
  v4 = *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF);
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v7) = 0;
  return MiFreeVadRange(v2, (int)&v7, v4, v3, (__int64)Process, 0, 0LL);
}
