/*
 * XREFs of ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8778
 * Callers:
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B8FC0 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180094560 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B4374 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B8360 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B83F8 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  CWindowList *v5; // rdi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // ebx
  __int64 v8; // rdx
  struct CVisual *RootVisualForDesktop; // rsi
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
  unsigned int v23; // edi
  CAnimatedTransitionVisual *v24; // rbx
  int v25; // eax
  int v26; // esi
  int v27; // edi
  int v28; // eax
  int v29; // eax
  CAnimatedTransitionVisual **v30; // rdx
  CAnimatedTransitionVisual *v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  CAnimatedTransitionVisual *v34; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v36[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v37; // [rsp+50h] [rbp-11h]
  struct CVisual *v38; // [rsp+58h] [rbp-9h]
  struct tagRECT v39; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v40; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 40) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      173LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      a4);
  v35 = 0LL;
  GetDesktopID(1LL, &v35);
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5, v35);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               this,
               0LL,
               0,
               1);
  if ( inserted < 0 )
  {
    v8 = 181LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, this != 0LL);
  if ( inserted < 0 )
  {
    v8 = 182LL;
    goto LABEL_5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v35);
  v38 = RootVisualForDesktop;
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 17);
  v13 = 0;
  if ( !*(_DWORD *)(v12 + 64) )
  {
LABEL_35:
    if ( *((_QWORD *)this + 55) == *((_QWORD *)this + 56) )
    {
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    }
    else
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v11 + 5) + 16LL) + 24LL))(*(_QWORD *)(*((_QWORD *)v11 + 5) + 16LL));
      v23 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF1,
          (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v33);
        return v23;
      }
      inserted = CDisplayAnimatedVisual::ScheduleAnimation(
                   (struct IAnimatedVisual *)*((unsigned int *)this + 90),
                   (_QWORD *)this + 55,
                   (CDisplayMixedModeAnimatedVisual *)((char *)this + 288),
                   *((_DWORD *)this + 88),
                   *((_DWORD *)this + 90),
                   (unsigned int *)this + 130);
      if ( inserted < 0 )
      {
        v8 = 248LL;
        goto LABEL_5;
      }
      inserted = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
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
      if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
      {
        v34 = (CAnimatedTransitionVisual *)(v14 + 96);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v16,
          byte_18011F5F8,
          v17,
          v18,
          (wchar_t **)&v34);
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
      goto LABEL_33;
    }
    v40 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
    v21 = *(struct tagRECT *)(v14 + 56);
    v39 = v21;
    v34 = 0LL;
    v22 = CAnimatedTransitionVisual::Create(&v34);
    v23 = v22;
    v24 = v34;
    if ( v22 < 0 )
      break;
    v22 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v34, RootVisualForDesktop, 1, &v40);
    v23 = v22;
    if ( v22 < 0 )
    {
      v32 = 219LL;
      goto LABEL_42;
    }
    v25 = v40.right - v40.left;
    if ( v40.right - v40.left < 0 )
      v25 = 0;
    LODWORD(v37) = v25;
    v26 = 0;
    if ( v40.right - v40.left >= 0 )
      v26 = v40.right - v40.left;
    v27 = v40.bottom - v40.top;
    v28 = v40.bottom - v40.top;
    if ( v40.bottom - v40.top < 0 )
      v28 = 0;
    HIDWORD(v37) = v28;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v24, &v39);
    *(struct tagRECT *)((char *)v24 + 872) = v21;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v24 + 8), 4096);
    v36[0] = v26;
    v29 = 0;
    if ( v27 >= 0 )
      v29 = v27;
    v36[1] = v29;
    (*(void (__fastcall **)(__int64, _DWORD *))(*((_QWORD *)v24 + 1) + 96LL))((__int64)v24 + 8, v36);
    *((_QWORD *)v24 + 119) = v37;
    CVisual::SetInterpolationMode((unsigned int *)v24 + 2, 1u);
    RootVisualForDesktop = v38;
    v22 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v24, v38, &v40);
    v23 = v22;
    if ( v22 < 0 )
    {
      v32 = 231LL;
      goto LABEL_42;
    }
    v22 = VisualCollection::InsertRelative(
            (CDisplayMixedModeAnimatedVisual *)((char *)this + 32),
            (CAnimatedTransitionVisual *)((char *)v24 + 8),
            0LL,
            0,
            1);
    v23 = v22;
    if ( v22 < 0 )
    {
      v32 = 233LL;
      goto LABEL_42;
    }
    v30 = (CAnimatedTransitionVisual **)*((_QWORD *)this + 56);
    if ( v30 == *((CAnimatedTransitionVisual ***)this + 57) )
    {
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        (const char *)this + 440,
        (__int64)v30,
        (__int64 *)&v34);
      v31 = v34;
    }
    else
    {
      v31 = 0LL;
      *v30 = v24;
      *((_QWORD *)this + 56) += 8LL;
    }
    if ( v31 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v31 + 8));
LABEL_33:
    if ( ++v13 >= *(_DWORD *)(v12 + 64) )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      goto LABEL_35;
    }
  }
  v32 = 215LL;
LABEL_42:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v22);
  if ( v24 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v24 + 8));
  return v23;
}
