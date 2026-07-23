/*
 * XREFs of sub_140709C0C @ 0x140709C0C
 * Callers:
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_1407095A8 @ 0x1407095A8 (sub_1407095A8.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x140230180 (RtlCopyBitMapEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsEx @ 0x14030B090 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403D5CAC @ 0x1403D5CAC (sub_1403D5CAC.c)
 */

unsigned __int64 __fastcall sub_140709C0C(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &qword_140C4F388, 0LL);
  sub_1403D5CAC((unsigned __int64 *)&qword_140C4F388, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4F388, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F300);
    sub_1402AFC00((ULONG_PTR)&qword_140C4F300);
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ClearBits;
}
