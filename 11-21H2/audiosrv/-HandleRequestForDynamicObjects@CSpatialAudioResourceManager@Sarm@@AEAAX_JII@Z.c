/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801271B4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Do_call @ 0x180129730 (std--_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_--_Do_call.c)
 * Callees:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180126588 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180126898 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180128B00 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x18012A1EC (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18012A420 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18012BC18 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall **v12)(); // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v14)(); // [rsp+78h] [rbp-20h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 0x20Du);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( Stream )
  {
    v15 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v15) >= 0 && v15 > 0 )
    {
      CWorkFifo::DelayWorkUntil((Sarm::CSpatialAudioResourceManager *)((char *)this + 344), v15);
      *(_QWORD *)&v11 = this;
      *((_QWORD *)&v11 + 1) = a2;
      v12 = off_180177D28;
      v13 = v11;
      v14 = &v12;
      CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
    }
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v10, 0x212u, a2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
