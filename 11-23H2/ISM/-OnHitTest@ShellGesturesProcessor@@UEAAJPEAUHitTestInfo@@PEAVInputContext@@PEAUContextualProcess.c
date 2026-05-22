/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18004AB70 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x180061838 (--$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClie.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800618BC (--$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesture.c)
 *     std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___ @ 0x180061908 (std--accumulate_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair_enum_ShellE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972EC (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@@Z @ 0x18016DA38 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@@Z.c)
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18016DA60 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x18016DE18 (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@UContext@ShellGesturesProcessor@@@12@XZ @ 0x18016DEC0 (--$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@UContext@Shell.c)
 *     ??$emplace@AEAIAEAUtagPOINT@@@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUHandlerContext@ShellGesturesProcessor@@AEAIAEAUtagPOINT@@@Z @ 0x18016E500 (--$emplace@AEAIAEAUtagPOINT@@@-$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUH.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016EBD4 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@@@Z @ 0x18016EC34 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016EC94 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgyDetectionISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016F968 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgyDetectionISM@@@details@wil@@QEAAX_NW4.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18016FB04 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  struct InputContext *v5; // r14
  struct HitTestInfo *v6; // r12
  int v8; // eax
  char v9; // di
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  const char *v18; // r9
  __int128 v19; // xmm6
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  ShellGesturesClientProxy *v22; // rdi
  char IsShell; // al
  __int64 *p_pvParam; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  _QWORD *v28; // r15
  __int64 v29; // rbx
  bool v30; // al
  __int64 v31; // rbx
  __int64 v32; // rcx
  std::_Ref_count_base *v33; // r14
  bool i; // zf
  __int64 v35; // rdi
  char v36; // bl
  __int64 v37; // rcx
  std::_Ref_count_base *v38; // rcx
  __int64 pvParam; // [rsp+20h] [rbp-49h] BYREF
  int v41; // [rsp+28h] [rbp-41h]
  struct InputContext *v42; // [rsp+30h] [rbp-39h]
  ShellGesturesProcessor *v43; // [rsp+38h] [rbp-31h]
  _QWORD v44[2]; // [rsp+40h] [rbp-29h] BYREF
  std::_Ref_count_base *v45[2]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = a3;
  v42 = a3;
  v6 = a2;
  v43 = this;
  *(_DWORD *)a4 = 0;
  v8 = *(_DWORD *)a2 & 0x88;
  v41 = v8;
  v9 = 1;
  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    v10 = (__int64 *)((char *)a4 + 8);
    if ( *((_QWORD *)a4 + 1) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x109,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        (const char *)a4);
  }
  else
  {
    if ( v8 != 8 || (*((_BYTE *)a2 + 32) & 4) == 0 )
      return 0LL;
    v10 = (__int64 *)((char *)a4 + 8);
    if ( !*((_QWORD *)a4 + 1) )
    {
      LODWORD(pvParam) = 0;
      if ( !SystemParametersInfoW(0x2030u, 0, &pvParam, 0) || !(_DWORD)pvParam )
        v9 = 0;
    }
  }
  v11 = *v10;
  if ( *v10 )
  {
    if ( !*(_BYTE *)(v11 + 16) || *(_QWORD *)(v11 + 224) || !*(_QWORD *)(v11 + 232) )
      goto LABEL_54;
    v31 = 0LL;
    v44[0] = 0LL;
    v32 = *(_QWORD *)(*((_QWORD *)v5 + 22) + 104LL);
    v33 = *(std::_Ref_count_base **)(v32 - 24);
    v45[0] = *(std::_Ref_count_base **)(v32 - 16);
    for ( i = v33 == v45[0]; !i; i = v33 == v45[0] )
    {
      InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*(_QWORD *)v33, &pvParam);
      v35 = pvParam;
      if ( pvParam
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(pvParam, *(unsigned int *)v6)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(v43, v35) )
      {
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v44, &pvParam);
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
        v31 = v44[0];
        break;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      v33 = (std::_Ref_count_base *)((char *)v33 + 8);
    }
    if ( v31 != *(_QWORD *)(v11 + 232) )
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v11 + 232);
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v44);
  }
  else
  {
    v12 = (__int64 *)Microsoft::WRL::Details::Make<ShellGesturesProcessor::Context,>(v44);
    v13 = *v12;
    *v12 = 0LL;
    pvParam = *v10;
    *v10 = v13;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&pvParam);
    v15 = v44[0];
    if ( v44[0] )
    {
      v44[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v11 = *v10;
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgyDetectionISM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgyDetectionISM>::GetImpl'::`2'::impl,
      v14);
    *(_OWORD *)v45 = 0LL;
    v17 = std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___(
            **((_QWORD **)this + 5),
            *((_QWORD *)this + 5),
            v16,
            this);
    if ( v17 )
    {
      if ( !(unsigned int)GetPointerDeviceRects(*((unsigned int *)v6 + 1), v45, v44) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shellgesturesprocessor.cpp",
          v18);
      *(_BYTE *)(v11 + 384) = 0;
      v19 = *(_OWORD *)v45;
      *(_QWORD *)(v11 + 248) = 0LL;
      *(_DWORD *)(v11 + 256) = 0;
      *(_OWORD *)(v11 + 260) = 0LL;
      *(_QWORD *)(v11 + 280) = 0LL;
      *(_QWORD *)(v11 + 288) = 0LL;
      *(_QWORD *)(v11 + 296) = 0LL;
      *(_QWORD *)(v11 + 304) = 0LL;
      QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v11 + 312));
      *(_OWORD *)(v11 + 328) = v19;
      *(_BYTE *)(v11 + 368) = 0;
      *(_DWORD *)(v11 + 376) = v17;
      *(_BYTE *)(v11 + 384) = 1;
    }
    if ( !v9 )
      goto LABEL_54;
    pvParam = 0LL;
    v44[0] = 0LL;
    v20 = *((_QWORD *)&xmmword_180269160 + 1);
    v21 = *((_QWORD *)&xmmword_180269160 + 1) + qword_180269170;
    while ( v20 != v21 )
    {
      v22 = *(ShellGesturesClientProxy **)(*(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1)
                                                     + 8 * ((xmmword_180269160 - 1) & (v20 >> 1)))
                                         + 8 * (v20 & 1));
      if ( ShellGesturesClientProxy::IsDetachedFromTree(v22)
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(v22, *(unsigned int *)v6)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(this, v22) )
      {
        IsShell = ShellGesturesProcessor::IsShellClient<ShellGesturesClientProxy>(this, v22);
        p_pvParam = v44;
        if ( !IsShell )
          p_pvParam = &pvParam;
        *p_pvParam = (__int64)v22;
      }
      ++v20;
    }
    v25 = v44[0];
    if ( pvParam )
      v25 = pvParam;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v11 + 240, v25);
    v26 = *(_QWORD *)(*((_QWORD *)v42 + 22) + 104LL);
    v27 = *(_QWORD **)(v26 - 24);
    v28 = *(_QWORD **)(v26 - 16);
    while ( v27 != v28 )
    {
      InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v27, &pvParam);
      v29 = pvParam;
      if ( pvParam
        && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(pvParam, *(unsigned int *)v6)
        && (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(v43, v29) )
      {
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v11 + 232, &pvParam);
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
        break;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      ++v27;
    }
    v30 = *(_QWORD *)(v11 + 240) || *(_QWORD *)(v11 + 232);
    *(_BYTE *)(v11 + 16) = v30;
  }
  v5 = v42;
LABEL_54:
  if ( v41 != 8 )
    goto LABEL_64;
  v36 = 0;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgyDetectionISM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_EdgyDetectionISM>::GetImpl'::`2'::impl,
    a2);
  ShellGesturesProcessor::TryFindResumableAnimationTarget(v37, v45, v6, *((_QWORD *)v5 + 22));
  v38 = v45[1];
  if ( v45[1] && *((_DWORD *)v45[1] + 2) )
  {
    std::optional<ShellGesturesProcessor::HandlerContext>::emplace<unsigned int &,tagPOINT &>((ShellGesturesProcessor::HandlerContext *)(v11 + 392));
    std::weak_ptr<GestureHandler>::operator=(v11 + 408, v45);
    v36 = 1;
    v38 = v45[1];
  }
  if ( v38 )
    std::_Ref_count_base::_Decwref(v38);
  if ( v36 )
  {
LABEL_64:
    *(_DWORD *)a4 = 2;
  }
  else if ( *(_BYTE *)(v11 + 384) || *(_BYTE *)(v11 + 16) )
  {
    *(_DWORD *)a4 = 1;
  }
  return 0LL;
}
