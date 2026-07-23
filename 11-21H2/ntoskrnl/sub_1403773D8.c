/*
 * XREFs of sub_1403773D8 @ 0x1403773D8
 * Callers:
 *     sub_1407F8CD8 @ 0x1407F8CD8 (sub_1407F8CD8.c)
 * Callees:
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140388F60 @ 0x140388F60 (sub_140388F60.c)
 */

__int64 sub_1403773D8()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v1; // edi
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rbp

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_140C55418 )
    return 1LL;
  --*((_WORD *)CurrentThread + 243);
  v2 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 0x12u);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C55410, 2u);
  v4 = 88LL * (unsigned int)dword_140C55414;
  while ( *(ULONG_PTR *)((char *)&StartContext + v4 + 3712) )
  {
    if ( (unsigned int)sub_140388F60(&StartContext, 1LL) )
    {
      sub_14025C460((__int64)&StartContext, -1LL);
      sub_1402664E8((__int64)&StartContext);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_140C55410, 1u);
  _InterlockedExchangeAdd(&dword_140C55410, 0xFFFFFFFE);
  KeSetEvent(&stru_140C55308, 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v2);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
    && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
  {
    KiCheckForKernelApcDelivery();
  }
  return v1;
}
