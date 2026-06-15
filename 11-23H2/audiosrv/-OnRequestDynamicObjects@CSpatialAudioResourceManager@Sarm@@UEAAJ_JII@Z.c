/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180135480
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1801343B4 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180136560 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x180136F94 (-WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x180137A34 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1801398B0 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  Sarm::CStreamResource *Stream; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  __int64 v16; // rdx
  struct Sarm::CStreamResource *v17; // rax
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v19)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h]
  unsigned __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall ***v22)(); // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+B0h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v24 = v4;
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v9, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = -2005139191;
    v12 = 485LL;
    v13 = 2289828105LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v13);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v24);
    return v11;
  }
  v14 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v13 = (unsigned int)v14;
    v12 = 488LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v18 = this;
  v19 = off_18017CF28;
  *((_QWORD *)&v18 + 1) = a2;
  v22 = &v19;
  v20 = v18;
  v21 = __PAIR64__(a4, a3);
  v11 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  if ( (v11 & 0x80000000) != 0 )
  {
    v16 = 492LL;
    goto LABEL_9;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( a3 )
  {
    if ( !CWorkFifo::WaitForWorkToComplete((Sarm::CSpatialAudioResourceManager *)((char *)this + 344)) )
    {
      v11 = -2005139188;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F1,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010CLL);
      return v11;
    }
    EnterCriticalSection(v4);
    v24 = v4;
    v17 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
    if ( !v17 )
    {
      v11 = -2005139191;
      v12 = 502LL;
      v13 = 2289828105LL;
      goto LABEL_5;
    }
    if ( *((_DWORD *)v17 + 20) < a3 )
    {
      v11 = -2005139188;
      v16 = 505LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)v11);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v11;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return 0LL;
}
