/*
 * XREFs of ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x140091650
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140088228 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ??1ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x140090DD4 (--1ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x140090F28 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 *a4,
        __int64 *a5)
{
  unsigned int v9; // r15d
  signed __int32 v10; // eax
  char v11; // si
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = -2005139387;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0);
  v11 = v10;
  if ( (v10 & 0xFFFFFF81) == 1 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
      *((_QWORD *)this + 90),
      (__int64)v15);
    v12 = v15[0];
    if ( v15[0] )
    {
      *(_OWORD *)&a2->u64DevicePosition = *(_OWORD *)(v15[0] + 40LL);
      *(_OWORD *)&a2->u64PaddingFrames = *(_OWORD *)(v12 + 56);
      *(_QWORD *)&a2->f32FramesPerSecond = *(_QWORD *)(v12 + 72);
      if ( *((_BYTE *)this + 1288)
        && (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a2->hnsQPCPosition) )
      {
        *((_BYTE *)this + 1288) = 0;
      }
      *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)v12;
      *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v12 + 16);
      *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v12 + 32);
      if ( *((_BYTE *)this + 1288)
        && (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a3->hnsQPCPosition) )
      {
        *((_BYTE *)this + 1288) = 0;
      }
      if ( (v11 & 0x10) != 0 )
      {
        *a4 = 0LL;
        v13 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v12 + 88);
        v13 = *(_QWORD *)(v12 + 80);
      }
      v9 = 0;
      *a5 = v13;
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::~ReadAccess((__int64)v15);
  }
  return v9;
}
