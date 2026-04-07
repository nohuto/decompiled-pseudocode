/*
 * XREFs of ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BBF58
 * Callers:
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800BC800 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800437C4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B688 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B7330 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7544 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BBB10 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800BBBA8 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  CWindowList *v5; // rsi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // ebx
  __int64 v8; // rdx
  struct CVisual *RootVisualForDesktop; // r12
  CDesktopManager *v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD *v19; // r8
  _BYTE *v20; // rdx
  struct tagRECT v21; // xmm6
  int v22; // eax
  unsigned int v23; // esi
  CAnimatedTransitionVisual *v24; // rbx
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // r14
  int v30; // eax
  int v31; // eax
  CAnimatedTransitionVisual **v32; // rdx
  CAnimatedTransitionVisual *v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  int v36; // [rsp+28h] [rbp-39h]
  int v37; // [rsp+28h] [rbp-39h]
  CAnimatedTransitionVisual *v38; // [rsp+38h] [rbp-29h] BYREF
  int v39; // [rsp+40h] [rbp-21h]
  unsigned __int64 v40; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v41[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v42; // [rsp+58h] [rbp-9h]
  struct tagRECT v43; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v44; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 40) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      a4);
  v40 = 0LL;
  GetDesktopID(1LL, &v40, a3);
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5, v40);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               (unsigned __int64)this,
               0LL,
               0,
               v36);
  if ( inserted < 0 )
  {
    v8 = 181LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, 0);
  if ( inserted < 0 )
  {
    v8 = 182LL;
    goto LABEL_5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v40);
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  v13 = 0;
  if ( !*(_DWORD *)(v12 + 64) )
  {
LABEL_38:
    if ( *((_QWORD *)this + 55) == *((_QWORD *)this + 56) )
    {
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    }
    else
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v11 + 6) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)v11 + 6) + 24LL));
      v23 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF1,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v35);
        return v23;
      }
      inserted = CDisplayAnimatedVisual::ScheduleAnimation(
                   (CDisplayMixedModeAnimatedVisual *)((char *)this + 520),
                   (_QWORD *)this + 55,
                   (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
                   *((_DWORD *)this + 88),
                   *((_DWORD *)this + 90),
                   (unsigned int *)this + 130);
      if ( inserted < 0 )
      {
        v8 = 248LL;
        goto LABEL_5;
      }
      inserted = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
      if ( inserted < 0 )
      {
        v8 = 252LL;
        goto LABEL_5;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 8LL * v13);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                    *((CDWMDisplaySet **)this + 40),
                                    (const struct CDWMDisplay *)v14);
    if ( !MatchedPhysicalDisplayNoRef )
    {
      if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
      {
        v38 = (CAnimatedTransitionVisual *)(v14 + 96);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v16,
          byte_1801260F8,
          v17,
          v18,
          (wchar_t **)&v38);
      }
      v19 = (_OWORD *)(v14 + 56);
      v20 = (_BYTE *)*((_QWORD *)this + 62);
      if ( v20 == *((_BYTE **)this + 63) )
      {
        std::vector<tagRECT>::_Emplace_reallocate<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMILSurfaceRect_> const &>(
          (_QWORD *)this + 61,
          v20,
          v19);
      }
      else
      {
        *(_OWORD *)v20 = *v19;
        *((_QWORD *)this + 62) += 16LL;
      }
      goto LABEL_36;
    }
    v44 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
    v21 = *(struct tagRECT *)(v14 + 56);
    v43 = v21;
    v38 = 0LL;
    v22 = CAnimatedTransitionVisual::Create(&v38);
    v23 = v22;
    if ( v22 < 0 )
      break;
    v24 = v38;
    v22 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v38, RootVisualForDesktop, 1, &v44);
    v23 = v22;
    if ( v22 < 0 )
    {
      v34 = 219LL;
      goto LABEL_45;
    }
    v25 = v44.right - v44.left;
    if ( v44.right - v44.left < 0 )
      v25 = 0;
    LODWORD(v42) = v25;
    v26 = 0;
    if ( v44.right - v44.left >= 0 )
      v26 = v44.right - v44.left;
    v27 = v44.bottom - v44.top;
    if ( v44.bottom - v44.top < 0 )
      v27 = 0;
    HIDWORD(v42) = v27;
    v28 = 0;
    if ( v44.bottom - v44.top >= 0 )
      v28 = v44.bottom - v44.top;
    v39 = v28;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v24, &v43);
    *(struct tagRECT *)((char *)v24 + 872) = v21;
    v29 = (unsigned __int64)v24 + 8;
    v30 = *((_DWORD *)v24 + 24);
    if ( (v30 & 0x1000) == 0 )
    {
      *((_DWORD *)v24 + 24) = v30 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v24 + 8));
    }
    v41[0] = v26;
    v41[1] = v39;
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v29 + 104LL))((__int64)v24 + 8, v41);
    *((_QWORD *)v24 + 119) = v42;
    CVisual::SetInterpolationMode((unsigned int *)v24 + 2, 1u);
    v22 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
            (CCachedVisualImageProxy **)v24,
            RootVisualForDesktop,
            &v44);
    v23 = v22;
    if ( v22 < 0 )
    {
      v34 = 231LL;
      goto LABEL_45;
    }
    v31 = VisualCollection::InsertRelative(
            (CDisplayMixedModeAnimatedVisual *)((char *)this + 32),
            v29 & ((unsigned __int128)-(__int128)(unsigned __int64)v24 >> 64),
            0LL,
            0,
            v37);
    v23 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
        (const char *)(unsigned int)v31);
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v24 + 8));
      return v23;
    }
    v32 = (CAnimatedTransitionVisual **)*((_QWORD *)this + 56);
    if ( v32 == *((CAnimatedTransitionVisual ***)this + 57) )
    {
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        (const char *)this + 440,
        (__int64)v32,
        (__int64 *)&v38);
      v33 = v38;
    }
    else
    {
      v33 = 0LL;
      *v32 = v24;
      *((_QWORD *)this + 56) += 8LL;
    }
    if ( v33 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v33 + 8));
LABEL_36:
    if ( ++v13 >= *(_DWORD *)(v12 + 64) )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      goto LABEL_38;
    }
  }
  v34 = 215LL;
LABEL_45:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v34,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v22);
  wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v38);
  return v23;
}
