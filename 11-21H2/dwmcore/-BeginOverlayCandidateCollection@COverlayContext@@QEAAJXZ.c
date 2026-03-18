/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x1800B9AA0
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x180112C80 (McTemplateU0dd_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v2; // rcx
  CMILMatrix *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v14; // rdx

  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
  v2 = *(_QWORD *)this;
  *((_WORD *)this + 5651) = 0;
  v3 = (CMILMatrix *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  if ( CMILMatrix::Is2DAxisAlignedPreserving(v3, v4, v5, v6) )
  {
    v7 = *(_QWORD *)this;
    *((_BYTE *)this + 11303) = 1;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this)
        && *((struct CComposition **)this + 1411) != GetCurrentFrameId() )
      {
        *((_BYTE *)this + 11302) = 1;
      }
    }
  }
  v8 = dword_1803D7520;
  v9 = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  v10 = dword_1803D7524;
  v11 = dword_1803D751C;
  if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty >= dword_1803D7520
    || dword_1803D751C >= dword_1803D7524 )
  {
    **((_DWORD **)this + 1397) = 0;
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)this + 1397);
    *v14 = 2;
    v14[7] = v9;
    v14[3] = v11;
    v14[8] = v8;
    v14[4] = 16;
    v14[1] = v9;
    v14[2] = v8;
    v14[6] = 16;
    v14[5] = v10;
  }
  *((_DWORD *)this + 2818) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  *(_WORD *)((char *)this + 11311) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      v12,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      *((unsigned __int8 *)this + 11302),
      *((unsigned __int8 *)this + 11303));
  return 0LL;
}
