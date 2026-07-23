/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x1800FE420
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800FFD58 (RtlpUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  struct _PEB *v2; // rdi
  void **ProcessHeaps; // r12
  unsigned int *p_NumberOfHeaps; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rsi
  int v7; // r15d
  _DWORD *v8; // rcx
  char MemoryInformation[32]; // [rsp+38h] [rbp-70h] BYREF
  int v11; // [rsp+58h] [rbp-50h]

  v2 = NtCurrentPeb();
  if ( a1 )
  {
    RtlpHpLfhPerfFlags &= ~0x40u;
    ProcessHeaps = v2->ProcessHeaps;
    p_NumberOfHeaps = &v2->NumberOfHeaps;
    v5 = *p_NumberOfHeaps;
    v6 = 0LL;
    v7 = 0;
    while ( (unsigned int)v6 < *p_NumberOfHeaps )
    {
      ZwQueryVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        ProcessHeaps[v6],
        MemoryBasicInformation,
        MemoryInformation,
        0x30uLL,
        0LL);
      if ( v11 == 4096 && ((v8 = ProcessHeaps[v6], v8[38] == -285217025) || v8[4] == -571548178) )
        ProcessHeaps[v7++] = v8;
      else
        --v5;
      v6 = (unsigned int)(v6 + 1);
    }
    *p_NumberOfHeaps = v5;
  }
  else
  {
    p_NumberOfHeaps = &v2->NumberOfHeaps;
  }
  return RtlpUnlockHeapManagerForCloning(a1, *p_NumberOfHeaps);
}
