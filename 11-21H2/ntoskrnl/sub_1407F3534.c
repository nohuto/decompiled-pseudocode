/*
 * XREFs of sub_1407F3534 @ 0x1407F3534
 * Callers:
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1407F3534()
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG ClearBitsAndSet; // esi
  char v2; // di
  bool v3; // zf
  ULONG v5; // ebp
  _RTL_BITMAP *v6; // rax
  __int64 v7; // r15
  _RTL_BITMAP *v8; // r14
  unsigned __int64 SizeOfBitMap; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50618, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C53490, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C53490->SizeOfBitMap + 128;
    if ( v5 > 0x7FFFF )
      v5 = 0x7FFFF;
    v6 = (_RTL_BITMAP *)sub_1402828F0(256, 8 * ((v5 >> 6) + ((v5 & 0x3F) != 0) + 2), 0x20206D4Du);
    v7 = 0LL;
    v8 = v6;
    if ( v6 )
    {
      v6->SizeOfBitMap = v5;
      v6->Buffer = &v6[1].SizeOfBitMap;
      RtlClearAllBits(v6);
      SizeOfBitMap = qword_140C53490->SizeOfBitMap;
      LOBYTE(v7) = (SizeOfBitMap & 0x3F) != 0;
      memmove(v8->Buffer, qword_140C53490->Buffer, 8 * ((SizeOfBitMap >> 6) + v7));
      ExFreePoolWithTag(qword_140C53490, 0);
      qword_140C53490 = v8;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50618, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C50618);
  sub_1402AFC00((ULONG_PTR)&qword_140C50618);
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return ClearBitsAndSet;
}
