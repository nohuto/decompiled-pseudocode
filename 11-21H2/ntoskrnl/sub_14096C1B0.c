/*
 * XREFs of sub_14096C1B0 @ 0x14096C1B0
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140981778 @ 0x140981778 (sub_140981778.c)
 */

__int64 __fastcall sub_14096C1B0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 ClearBitsAndSet; // rsi
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C51F28, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)sub_140981778() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C51F28, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    sub_1402AFC00((ULONG_PTR)&qword_140C51F08);
    v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_140C52954 = 1;
    *(_QWORD *)(qword_140C51F48 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    sub_1402AFC00((ULONG_PTR)&qword_140C51F08);
    v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return (unsigned __int16)ClearBitsAndSet;
  }
}
