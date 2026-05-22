/*
 * XREFs of ??1CTouchFrameStats@@MEAA@XZ @ 0x1801A5280
 * Callers:
 *     ??1CInteractionFrameStats@@MEAA@XZ @ 0x1801A51F0 (--1CInteractionFrameStats@@MEAA@XZ.c)
 *     ??_ECTouchFrameStats@@MEAAPEAXI@Z @ 0x1801A5420 (--_ECTouchFrameStats@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041E4 (--1-$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180009340 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VC.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTouchFrameStats::~CTouchFrameStats(CTouchFrameStats *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void **v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CTouchFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CTouchFrameStats::`vftable'{for `IDCompositionManipulationStats'};
  v2 = (void *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 35) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 32 * ((__int64)(*((_QWORD *)this + 32) - (_QWORD)v3) >> 5));
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  v4 = (void **)*((_QWORD *)this + 27);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(v4, *((void ***)this + 28));
    std::_Deallocate<16,0>(
      *((void **)this + 27),
      (*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 26) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  wil::com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>::~com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>((__int64 *)this + 21);
  CCompFrameStats::~CCompFrameStats(this);
}
