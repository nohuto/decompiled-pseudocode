/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8
 * Callers:
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0009F64 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000CE0C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF94 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C000D000 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C000D084 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C000D218 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C000D3DC (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C000E3E0 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E5DC (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  PVOID *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  enum _EVENT_TYPE v21; // ecx
  DirectComposition::CBatchSharedMemoryPoolSet *v22; // rsi
  unsigned __int64 v23; // rdx
  struct _ERESOURCE *v24; // rbx
  int v25; // eax
  __int64 v27; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v28; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 430) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    *((_QWORD *)this + 213) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v15 = (void *)*((_QWORD *)this + 213);
    *((_QWORD *)this + 214) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v15, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v16 = *((_DWORD *)this + 434);
  if ( !v16 )
    goto LABEL_9;
  if ( Batch < 0 )
  {
LABEL_26:
    v22 = (DirectComposition::CApplicationChannel *)((char *)this + 1624);
    goto LABEL_12;
  }
  v17 = (v16 + 4095) & 0xFFFFF000;
  *((_DWORD *)this + 434) = v17;
  if ( !v17 )
  {
    Batch = -1073741801;
    goto LABEL_26;
  }
  v18 = (PVOID *)((char *)this + 1728);
  v30 = v17;
  Batch = MmCreateSection((char *)this + 1728, 6LL, 0LL, &v30, 4, 138412032, 0LL, 0LL);
  if ( Batch < 0 )
    goto LABEL_26;
  Batch = MmMapViewInSessionSpace(*v18, (PVOID *)this + 218, &ViewSize);
  if ( Batch < 0 )
    goto LABEL_26;
  v19 = *((unsigned int *)this + 434);
  v27 = 0LL;
  Batch = ((__int64 (__fastcall *)(PVOID, _QWORD, char *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
            *v18,
            *((_QWORD *)this + 213),
            (char *)this + 1752,
            0LL,
            v19,
            &v27,
            &ViewSize,
            2,
            0x400000,
            4);
LABEL_9:
  if ( Batch < 0 )
    goto LABEL_26;
  v20 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  Batch = DirectComposition::CEvent::Create(v21, v20 != 3, (struct DirectComposition::CEvent **)this + 27);
  if ( Batch < 0 )
    goto LABEL_26;
  v22 = (DirectComposition::CApplicationChannel *)((char *)this + 1624);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 1624),
            2uLL);
LABEL_12:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v22,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 207,
      (unsigned __int64 *)this + 208);
    v28 = 0LL;
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(v22, v23, &v28, (unsigned __int64 *)this + 209);
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 22);
      if ( Batch >= 0 )
      {
        v24 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v24, 1u);
        v25 = DirectComposition::CConnection::RegisterChannel(
                *((DirectComposition::CConnection **)this + 5),
                this,
                (unsigned int *)this + 7);
        Batch = v25;
        if ( v25 < 0 )
        {
          if ( v25 == -1073741300 )
          {
            *((_DWORD *)this + 6) = 3;
            Batch = 0;
          }
        }
        else
        {
          DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
            v22,
            *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
          *((_DWORD *)this + 6) = 0;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
        KeLeaveCriticalRegion();
        if ( Batch >= 0 )
        {
          if ( a2 )
            *a2 = *((_DWORD *)this + 434);
          if ( a3 )
            *a3 = (void *)*((_QWORD *)this + 219);
        }
      }
    }
  }
  return (unsigned int)Batch;
}
