/*
 * XREFs of ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350
 * Callers:
 *     ?ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@@Z @ 0x18011D294 (-ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV-$s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?at@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAI_K@Z @ 0x18001F118 (-at@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAI_K@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::CreateConditionalExpressionAnimator(
        __int64 a1,
        unsigned __int64 *a2,
        int a3,
        __int64 *a4)
{
  unsigned __int64 v4; // r12
  __int64 v7; // r13
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // r15
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  struct IUnknown **v13; // r14
  _DWORD *v14; // rsi
  int v15; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // r13
  int v17; // r15d
  int v18; // eax
  int v19; // edi
  int v20; // edi
  int v21; // edi
  const wchar_t *v22; // rax
  __int64 v23; // rdx
  int Instance; // eax
  unsigned int v25; // edi
  unsigned int v26; // esi
  unsigned __int64 v27; // rdi
  gsl::details *v28; // rcx
  int v29; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v30; // r15
  unsigned int v31; // r14d
  const char *v33; // [rsp+28h] [rbp-71h]
  Microsoft::WRL2::NestableRuntimeClass *v34; // [rsp+40h] [rbp-59h] BYREF
  __int64 v35; // [rsp+48h] [rbp-51h] BYREF
  __int64 v36; // [rsp+50h] [rbp-49h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v37; // [rsp+58h] [rbp-41h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v38; // [rsp+60h] [rbp-39h] BYREF
  __int128 v39; // [rsp+68h] [rbp-31h] BYREF
  _DWORD *v40; // [rsp+78h] [rbp-21h]
  __int64 v41; // [rsp+80h] [rbp-19h]
  __int64 *v42; // [rsp+88h] [rbp-11h]
  HSTRING_HEADER v43; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = *a2;
  v42 = a4;
  v41 = a1;
  *a4 = 0LL;
  v40 = 0LL;
  v7 = a1;
  v39 = 0LL;
  if ( !v4 )
    goto LABEL_41;
  v36 = *(_QWORD *)(a1 + 24);
  v37 = 0LL;
  LODWORD(v34) = 1;
  v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::Compositor *,enum ConditionalExpressionAnimationSelectionMode::Enum>(
         &v37,
         &v36,
         (unsigned int *)&v34);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v8);
LABEL_37:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v37);
    std::vector<unsigned int>::_Tidy((__int64)&v39);
    return v10;
  }
  v11 = a2[1];
  v12 = v37;
  v13 = (struct IUnknown **)v11;
  v36 = v11;
  if ( v11 != v11 + 8 * v4 )
  {
    v14 = (_DWORD *)*((_QWORD *)&v39 + 1);
    while ( 1 )
    {
      v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *(struct Microsoft::WRL2::ContextSession **)(v7 + 24),
              *v13,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::CompositionConditionalValue::s_InterfaceType,
              &v38);
      v16 = v38;
      v17 = v15;
      v35 = (__int64)v38;
      if ( v15 < 0 )
        break;
      v17 = Windows::UI::Composition::ConditionalExpressionAnimation::AddCondition(
              v12,
              *((struct Windows::UI::Composition::ExpressionAnimation **)v38 + 18),
              *((struct Windows::UI::Composition::CompositionAnimation **)v38 + 19));
      if ( v17 < 0 )
      {
        v23 = 449LL;
        goto LABEL_20;
      }
      v18 = *((_DWORD *)v16 + 40);
      LODWORD(v34) = v18;
      if ( v14 == v40 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((__int64 *)&v39, v14, &v34);
        v14 = (_DWORD *)*((_QWORD *)&v39 + 1);
      }
      else
      {
        *v14++ = v18;
        *((_QWORD *)&v39 + 1) = v14;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v35);
      v11 = v36;
      ++v13;
      v7 = v41;
      if ( v13 == (struct IUnknown **)(v36 + 8 * v4) )
        goto LABEL_12;
    }
    v23 = 448LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v35);
    v10 = v17;
    goto LABEL_37;
  }
LABEL_12:
  if ( !a3 )
  {
    v22 = L"SourceModifierCenterpointX";
    goto LABEL_25;
  }
  v19 = a3 - 1;
  if ( !v19 )
  {
    v22 = L"SourceModifierCenterpointY";
    goto LABEL_25;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v22 = L"SourceModifierX";
    goto LABEL_25;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v22 = L"SourceModifierY";
    goto LABEL_25;
  }
  if ( v21 == 1 )
  {
    v22 = L"SourceModifierScale";
LABEL_25:
    v34 = (Microsoft::WRL2::NestableRuntimeClass *)v22;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&v34, v9);
  Instance = Windows::UI::Composition::ConditionalExpressionAnimation::GenerateInstance(v12, v12, 0LL, 0, (__int64)&v35);
  v25 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>((Microsoft::WRL2::NestableRuntimeClass **)&v35);
    v10 = v25;
    goto LABEL_37;
  }
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
  {
    v34 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v34);
    if ( v27 >= v4 )
    {
      gsl::details::terminate(v28);
      __debugbreak();
    }
    v29 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            *(struct Microsoft::WRL2::ContextSession **)(v7 + 24),
            *(struct IUnknown **)(v11 + 8 * v27),
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::CompositionConditionalValue::s_InterfaceType,
            &v38);
    v30 = v38;
    v31 = v29;
    v34 = v38;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FB,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
        (const char *)(unsigned int)v29);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v34);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>((Microsoft::WRL2::NestableRuntimeClass **)&v35);
      v10 = v31;
      goto LABEL_37;
    }
    if ( *((_DWORD *)v30 + 40) != *(_DWORD *)std::vector<unsigned int>::at((__int64)&v39, v27) )
    {
      v10 = -2147418113;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x1FF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
        (const char *)0x8000FFFFLL,
        (int)"An animation template on a ConditionalValue was modified during PopulatePropertyInfo call.",
        v33);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v34);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>((Microsoft::WRL2::NestableRuntimeClass **)&v35);
      goto LABEL_37;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v34);
    v27 = ++v26;
    if ( v26 >= v4 )
      break;
    v11 = v36;
  }
  *v42 = v35;
  if ( v12 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
LABEL_41:
  std::vector<unsigned int>::_Tidy((__int64)&v39);
  return 0LL;
}
