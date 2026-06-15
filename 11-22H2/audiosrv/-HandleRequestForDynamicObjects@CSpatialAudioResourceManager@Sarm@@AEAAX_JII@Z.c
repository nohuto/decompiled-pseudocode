/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180134C74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Do_call @ 0x1801371F0 (std--_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180019500 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1801340D8 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180134404 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801365B0 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x180137B2C (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1801394E0 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        PTP_TIMER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall **v13)(); // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v15)(); // [rsp+78h] [rbp-20h]
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  v11 = v8;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 525);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( Stream )
  {
    v16 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v16) >= 0 && v16 > 0 )
    {
      CWorkFifo::DelayWorkUntil(this + 43, v16);
      *(_QWORD *)&v12 = this;
      *((_QWORD *)&v12 + 1) = a2;
      v13 = off_18017CE98;
      v14 = v12;
      v15 = &v13;
      CWorkFifo::ScheduleWorkItem((CWorkFifo *)(this + 43));
    }
    if ( v8 )
      LeaveCriticalSection(v8);
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v10, 0x212u, a2);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v11);
  }
}
