/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0021980
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0021850 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0021894 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0022540 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0027EBC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  DirectComposition::CEvent *v4; // rcx
  _QWORD *v5; // rdx
  void *v6; // rdx
  void *v7; // rdx
  struct _ERESOURCE *v8; // rcx
  DirectComposition::CEvent *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rdx
  void *v15; // rdx
  void *v16; // rdx
  _QWORD *v17; // rbx

  v1 = *((_QWORD *)this + 27) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 27);
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4, v3);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    do
    {
      v17 = (_QWORD *)*v5;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
      *((_QWORD *)this + 23) = v17;
      v5 = v17;
    }
    while ( v17 );
  }
  v6 = (void *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 324);
  v7 = (void *)*((_QWORD *)this + 335);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    v7 = (void *)*((_QWORD *)this + 46);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  }
  v9 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v9 )
    DirectComposition::CEvent::`scalar deleting destructor'(v9, (unsigned int)v7);
  if ( *((_QWORD *)this + 341) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 334));
    *((_QWORD *)this + 341) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 340);
  if ( v10 )
  {
    MmUnmapViewInSessionSpace(v10);
    *((_QWORD *)this + 340) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 338);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *((_QWORD *)this + 338) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 334);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 334) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 326);
  if ( v13 )
    ObfDereferenceObject(v13);
  v14 = (void *)*((_QWORD *)this + 60);
  if ( v14 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
  v15 = (void *)*((_QWORD *)this + 14);
  if ( v15 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
  v16 = (void *)*((_QWORD *)this + 7);
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
  DirectComposition::CChannel::~CChannel(this);
}
