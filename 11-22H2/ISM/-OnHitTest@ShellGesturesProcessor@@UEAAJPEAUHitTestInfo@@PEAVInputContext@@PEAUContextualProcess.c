/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18004B4FC (--0QpcTimeConverter@@QEAA@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x180074148 (--$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClie.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800741CC (--$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesture.c)
 *     ?GetAllEdgyLocationsFromRegistrations@ShellGesturesProcessor@@AEAA?AW4EdgyLocation@ShellEdgyRecognizer@@QEAUtagTOUCH_GESTURE_SETTINGS@@@Z @ 0x1800742F8 (-GetAllEdgyLocationsFromRegistrations@ShellGesturesProcessor@@AEAA-AW4EdgyLocation@ShellEdgyReco.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil@@QEAA_NXZ @ 0x180074D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@@Z @ 0x18017BCB8 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@@Z.c)
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18017BCE0 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x18017C098 (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@UContext@ShellGesturesProcessor@@@12@XZ @ 0x18017C140 (--$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@UContext@Shell.c)
 *     ??$emplace@AEAIAEAUtagPOINT@@@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUHandlerContext@ShellGesturesProcessor@@AEAIAEAUtagPOINT@@@Z @ 0x18017C780 (--$emplace@AEAIAEAUtagPOINT@@@-$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUH.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017CE74 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@@@Z @ 0x18017CED4 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017CF34 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgyDetectionISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017DBE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgyDetectionISM@@@details@wil@@QEAAX_NW4.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18017DD84 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  struct ContextualProcessorInitialState *v4; // r14
  struct InputContext *v5; // r15
  int v8; // ebx
  char v9; // di
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  int AllEdgyLocationsFromRegistrations; // ebx
  const char *v20; // r9
  __int128 v21; // xmm6
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  ShellGesturesClientProxy *v24; // rdi
  char IsShell; // al
  __int64 *p_pvParam; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  _QWORD *v30; // r15
  __int64 v31; // rbx
  char v32; // al
  __int64 v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // r14
  _QWORD *v36; // r13
  __int64 v37; // rdi
  char v38; // bl
  __int64 v39; // rcx
  std::_Ref_count_base *v40; // rcx
  __int64 pvParam; // [rsp+28h] [rbp-89h] BYREF
  int v43; // [rsp+30h] [rbp-81h]
  struct InputContext *v44; // [rsp+38h] [rbp-79h]
  struct ContextualProcessorInitialState *v45; // [rsp+40h] [rbp-71h]
  _QWORD v46[2]; // [rsp+48h] [rbp-69h] BYREF
  std::_Ref_count_base *v47[2]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v48[64]; // [rsp+68h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v4 = a4;
  v45 = a4;
  v5 = a3;
  v44 = a3;
  v47[0] = this;
  *(_DWORD *)a4 = 0;
  v8 = *(_DWORD *)a2 & 0x88;
  v43 = v8;
  v9 = 1;
  memset_0(v48, 0, sizeof(v48));
  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    v12 = (__int64 *)((char *)v4 + 8);
    if ( *((_QWORD *)v4 + 1) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x10B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        v11);
  }
  else
  {
    if ( v8 != 8 || (*((_BYTE *)a2 + 32) & 4) == 0 )
      return 0LL;
    v12 = (__int64 *)((char *)v4 + 8);
    if ( !*((_QWORD *)v4 + 1) )
    {
      LODWORD(pvParam) = 0;
      if ( !SystemParametersInfoW(0x2030u, 0, &pvParam, 0) || !(_DWORD)pvParam )
        v9 = 0;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::GetImpl'::`2'::impl) )
        SystemParametersInfoW(0x92u, 0x40u, v48, 0);
    }
  }
  v13 = *v12;
  if ( !*v12 )
  {
    v14 = (__int64 *)Microsoft::WRL::Details::Make<ShellGesturesProcessor::Context,>(v46);
    v15 = *v14;
    *v14 = 0LL;
    pvParam = *v12;
    *v12 = v15;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&pvParam);
    v17 = v46[0];
    if ( v46[0] )
    {
      v46[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v13 = *v12;
    LOBYTE(v16) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgyDetectionISM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgyDetectionISM>::GetImpl'::`2'::impl,
      v16);
    *(_OWORD *)v47 = 0LL;
    v18 = v48;
    if ( v43 != 8 )
      v18 = 0LL;
    AllEdgyLocationsFromRegistrations = ShellGesturesProcessor::GetAllEdgyLocationsFromRegistrations(this, v18);
    if ( AllEdgyLocationsFromRegistrations )
    {
      if ( !(unsigned int)GetPointerDeviceRects(*((unsigned int *)a2 + 1), v47, v46) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x145,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shellgesturesprocessor.cpp",
          v20);
      *(_BYTE *)(v13 + 384) = 0;
      v21 = *(_OWORD *)v47;
      *(_QWORD *)(v13 + 248) = 0LL;
      *(_DWORD *)(v13 + 256) = 0;
      *(_OWORD *)(v13 + 260) = 0LL;
      *(_QWORD *)(v13 + 280) = 0LL;
      *(_QWORD *)(v13 + 288) = 0LL;
      *(_QWORD *)(v13 + 296) = 0LL;
      *(_QWORD *)(v13 + 304) = 0LL;
      QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v13 + 312));
      *(_OWORD *)(v13 + 328) = v21;
      *(_BYTE *)(v13 + 368) = 0;
      *(_DWORD *)(v13 + 376) = AllEdgyLocationsFromRegistrations;
      *(_BYTE *)(v13 + 384) = 1;
    }
    if ( !v9 )
      goto LABEL_58;
    pvParam = 0LL;
    v46[0] = 0LL;
    v22 = *((_QWORD *)&xmmword_180278530 + 1);
    v23 = *((_QWORD *)&xmmword_180278530 + 1) + qword_180278540;
    while ( v22 != v23 )
    {
      v24 = *(ShellGesturesClientProxy **)(*(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1)
                                                     + 8 * ((xmmword_180278530 - 1) & (v22 >> 1)))
                                         + 8 * (v22 & 1));
      if ( ShellGesturesClientProxy::IsDetachedFromTree(v24)
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(v24, *(unsigned int *)a2)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(this, v24) )
      {
        IsShell = ShellGesturesProcessor::IsShellClient<ShellGesturesClientProxy>(this, v24);
        p_pvParam = v46;
        if ( !IsShell )
          p_pvParam = &pvParam;
        *p_pvParam = (__int64)v24;
      }
      ++v22;
    }
    v27 = v46[0];
    if ( pvParam )
      v27 = pvParam;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v13 + 240, v27);
    v28 = *(_QWORD *)(*((_QWORD *)v5 + 22) + 104LL);
    v29 = *(_QWORD **)(v28 - 24);
    v30 = *(_QWORD **)(v28 - 16);
    while ( v29 != v30 )
    {
      InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v29, &pvParam);
      v31 = pvParam;
      if ( pvParam
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(pvParam, *(unsigned int *)a2)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(this, v31) )
      {
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v13 + 232, &pvParam);
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
        break;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      ++v29;
    }
    if ( *(_QWORD *)(v13 + 240) || (v32 = 0, *(_QWORD *)(v13 + 232)) )
      v32 = 1;
    *(_BYTE *)(v13 + 16) = v32;
    goto LABEL_43;
  }
  if ( !*(_BYTE *)(v13 + 16) || *(_QWORD *)(v13 + 224) )
    goto LABEL_58;
  if ( *(_QWORD *)(v13 + 232) )
  {
    v33 = 0LL;
    v46[0] = 0LL;
    v34 = *(_QWORD *)(*((_QWORD *)v44 + 22) + 104LL);
    v35 = *(_QWORD **)(v34 - 24);
    v36 = *(_QWORD **)(v34 - 16);
    while ( v35 != v36 )
    {
      InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v35, &pvParam);
      v37 = pvParam;
      if ( pvParam
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(pvParam, *(unsigned int *)a2)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(v47[0], v37) )
      {
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v46, &pvParam);
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
        v33 = v46[0];
        break;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      ++v35;
    }
    if ( v33 != *(_QWORD *)(v13 + 232) )
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v13 + 232);
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v46);
LABEL_43:
    v4 = v45;
  }
  v5 = v44;
LABEL_58:
  if ( v43 != 8 )
    goto LABEL_68;
  v38 = 0;
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgyDetectionISM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_EdgyDetectionISM>::GetImpl'::`2'::impl,
    v10);
  ShellGesturesProcessor::TryFindResumableAnimationTarget(v39, v47, a2, *((_QWORD *)v5 + 22));
  v40 = v47[1];
  if ( v47[1] && *((_DWORD *)v47[1] + 2) )
  {
    std::optional<ShellGesturesProcessor::HandlerContext>::emplace<unsigned int &,tagPOINT &>((ShellGesturesProcessor::HandlerContext *)(v13 + 392));
    std::weak_ptr<GestureHandler>::operator=(v13 + 408, v47);
    v38 = 1;
    v40 = v47[1];
  }
  if ( v40 )
    std::_Ref_count_base::_Decwref(v40);
  if ( v38 )
  {
LABEL_68:
    *(_DWORD *)v4 = 2;
  }
  else if ( *(_BYTE *)(v13 + 384) || *(_BYTE *)(v13 + 16) )
  {
    *(_DWORD *)v4 = 1;
  }
  return 0LL;
}
