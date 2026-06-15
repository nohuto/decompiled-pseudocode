/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14003B710
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14003B2FE (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14003B3C4 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x14003B43C (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct AE_CURRENT_POSITION *a2,
        int a3)
{
  signed __int32 v6; // eax
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // xmm0_8
  __int128 v10; // xmm2
  __int128 v11; // xmm2
  __int64 v12; // xmm0_8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a2->Flag & 4) == 0 && a2->Flag )
    _InterlockedExchange64(*((volatile __int64 **)this + 162), a2->hnsQPCPosition);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0);
  v7 = v6;
  if ( (v6 & 0xFFFFFF81) == 1 && (v6 & 2) != 0 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 90),
      (__int64)v13);
    v8 = v13[0];
    if ( v13[0] )
    {
      v9 = *(_QWORD *)&a2->f32FramesPerSecond;
      v10 = *(_OWORD *)&a2->u64PaddingFrames;
      *(_OWORD *)v13[0] = *(_OWORD *)&a2->u64DevicePosition;
      *(_OWORD *)(v8 + 16) = v10;
      *(_QWORD *)(v8 + 32) = v9;
      if ( (v7 & 0x10) != 0 )
      {
        *(_QWORD *)(v8 + 88) = 0LL;
        *(_QWORD *)(v8 + 80) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0xFFFFFFEF);
        v8 = v13[0];
      }
      if ( (v7 & 8) == 0 )
      {
        *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80);
        v11 = *(_OWORD *)&a2->u64PaddingFrames;
        v12 = *(_QWORD *)&a2->f32FramesPerSecond;
        *(_OWORD *)(v8 + 40) = *(_OWORD *)&a2->u64DevicePosition;
        *(_OWORD *)(v8 + 56) = v11;
        *(_QWORD *)(v8 + 72) = v12;
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0xCu);
        v8 = v13[0];
      }
      *(_DWORD *)(v8 + 96) = a3;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v13);
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v13);
  }
}
