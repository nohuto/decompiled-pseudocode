/*
 * XREFs of MmQueryPfnList @ 0x1406EF470
 * Callers:
 *     PfpPfnPrioRequest @ 0x14075DF38 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14023CD10 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x14023F190 (MiIsPfn.c)
 *     MiLockDynamicMemoryShared @ 0x140346664 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x140346A10 (MiUnlockDynamicMemoryShared.c)
 */

__int64 __fastcall MmQueryPfnList(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = a2 + 24 * a1;
  v4 = a2;
  v5 = 0;
  MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( v4 < v3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( !(unsigned int)MiIsPfn(v6) )
        break;
      MiIdentifyPfnWrapper(48 * v6 - 0x220000000000LL, v4);
      v4 += 24LL;
      if ( v4 >= v3 )
        goto LABEL_4;
    }
    *(_QWORD *)(v4 + 16) |= 2uLL;
    v5 = -1073741584;
  }
LABEL_4:
  MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  return v5;
}
