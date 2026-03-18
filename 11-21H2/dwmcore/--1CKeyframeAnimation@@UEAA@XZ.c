/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x18006F970 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18025F4D4 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18006EDA4 (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x18006FC24 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x18006FEB4 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x180222118 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x1802222B4 (--1KeyframeSequence@@QEAA@XZ.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  unsigned int v1; // edi
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rdi

  *((_BYTE *)this + 572) &= ~1u;
  v1 = 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  if ( *((_DWORD *)this + 104) )
  {
    v3 = (_QWORD *)((char *)this + 392);
    do
    {
      v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 216LL))(*v4, 0LL);
      v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 104) );
  }
  *((_DWORD *)this + 104) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 392, 8LL);
  if ( (*((_BYTE *)this + 573) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CSharedSection>((char *)this + 344);
  if ( *((_QWORD *)this + 46) )
    ReleaseInterface<CSharedSection>((char *)this + 368);
  else
    SAFE_DELETE_ARRAY<unsigned char>((char *)this + 376);
  v6 = *((_QWORD *)this + 57);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(v6, *((_QWORD *)this + 58));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 57),
      (*((_QWORD *)this + 59) - *((_QWORD *)this + 57)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 56);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 49);
  v7 = (void *)*((_QWORD *)this + 48);
  if ( v7 )
  {
    KeyframeSequence::~KeyframeSequence(*((KeyframeSequence **)this + 48));
    DefaultHeap::Free(v7);
  }
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 42);
  CBaseExpression::~CBaseExpression(this);
}
