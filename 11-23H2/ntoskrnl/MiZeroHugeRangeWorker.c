/*
 * XREFs of MiZeroHugeRangeWorker @ 0x140623320
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140296130 (RtlFindClearBitsAndSet.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1404249D0 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x140429C30 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDereferenceHugeIoRange @ 0x14061FEB4 (MiDereferenceHugeIoRange.c)
 *     MiLockHugePfn @ 0x140621944 (MiLockHugePfn.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140654F4C (MiDeleteAcceleratorDescriptor.c)
 */

void __fastcall MiZeroHugeRangeWorker(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // rbx
  int v3; // r13d
  unsigned __int8 v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 ClearBitsAndSet; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  __m128i *v14; // rsi
  SIZE_T v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned int *v20; // rcx
  char v21; // [rsp+60h] [rbp+8h]

  Buffer = BitMapHeader[5].Buffer;
  v3 = (int)BitMapHeader[6].Buffer;
  v4 = MiLockHugePfn((__int64)Buffer);
  v5 = *(_QWORD **)&BitMapHeader[9].SizeOfBitMap;
  v6 = v4;
  if ( v5 )
  {
    v7 = v5 + 4;
    *(_QWORD *)&BitMapHeader[9].SizeOfBitMap = *v5;
  }
  else
  {
    v7 = 0LL;
  }
  v21 = v4 + 1;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, 0);
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67DF8 + 4
                                                  * (((((__int64)Buffer - qword_140C67DF0) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)Buffer - qword_140C67DF0) >> 3) & 0x1F)));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << v21);
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
    if ( (_DWORD)ClearBitsAndSet == -1 )
      break;
    v14 = (__m128i *)(*(_QWORD *)&BitMapHeader[5].SizeOfBitMap + (ClearBitsAndSet << 21));
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        memset(v14, -2, 0x200000uLL);
      }
      else
      {
        v15 = RtlCompareMemoryUlong(v14, 0x200000uLL, 0);
        if ( v15 != 0x200000 )
          KeBugCheckEx(
            0x127u,
            *(_QWORD *)&BitMapHeader[5].SizeOfBitMap,
            ((((__int64)Buffer - qword_140C67DF0) >> 3) & 0x3FFFFF) << 18,
            (ULONG_PTR)v14->m128i_u64 + v15 - *(_QWORD *)&BitMapHeader[5].SizeOfBitMap,
            0x40000000uLL);
      }
    }
    else
    {
      KeZeroPages(v14, 0x200000uLL);
    }
    MiLockHugePfn((__int64)Buffer);
    if ( ++BitMapHeader[6].SizeOfBitMap == 512 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67DF8
                                  + 4 * (((((__int64)Buffer - qword_140C67DF0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)Buffer - qword_140C67DF0) >> 3) & 0x1F)));
      if ( (_DWORD)KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << v21);
          v13 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
      __writecr8(v6);
      KeSignalGate((__int64)&BitMapHeader[7], 1u);
      break;
    }
  }
  v20 = BitMapHeader[8].Buffer;
  if ( v20 )
    PsDereferencePartition((__int64)v20);
  MiDereferenceHugeIoRange((volatile signed __int32 *)BitMapHeader);
  if ( v7 )
    MiDeleteAcceleratorDescriptor(v7);
}
