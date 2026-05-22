/*
 * XREFs of ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137B44
 * Callers:
 *     ?ConfigurePositionXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180137DD0 (-ConfigurePositionXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@.c)
 *     ?ConfigurePositionYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180137F90 (-ConfigurePositionYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@.c)
 *     ?ConfigureScaleInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180138150 (-ConfigureScaleInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z @ 0x18013688C (-AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEA.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::ConfigureInertiaModifiers(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  struct Microsoft::WRL2::ContextRuntimeClass *v3; // rax
  __int64 v6; // r13
  signed int v7; // r12d
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  struct IUnknown **v11; // r14
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  bool i; // zf
  int v14; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v15; // r13
  int v16; // r15d
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // edi
  unsigned int v21; // edx
  __int64 v22; // rdx
  int v23; // esi
  int v24; // eax
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+20h] [rbp-40h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v27; // [rsp+28h] [rbp-38h] BYREF
  struct IUnknown **v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+38h] [rbp-28h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h]
  unsigned int v31; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v34; // [rsp+B8h] [rbp+58h] BYREF

  v3 = *(struct Microsoft::WRL2::ContextRuntimeClass **)(a1 + 24);
  v30 = 0LL;
  v31 = 0;
  v6 = a1;
  v26 = 0LL;
  v27 = v3;
  v7 = 1;
  v8 = 0;
  v34 = 1;
  v29 = 0LL;
  v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::Compositor *,enum ConditionalExpressionAnimationSelectionMode::Enum>(
         &v26,
         (__int64 *)&v27,
         &v34);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (struct IUnknown **)a2[1];
    v12 = v26;
    v28 = &v11[*a2];
    for ( i = v11 == v28; !i; i = v11 == v28 )
    {
      v26 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
      v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *(struct Microsoft::WRL2::ContextSession **)(v6 + 24),
              *v11,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::s_InterfaceType,
              &v27);
      v15 = v27;
      v16 = v14;
      v26 = v27;
      if ( v14 < 0 )
      {
        v22 = 1620LL;
        goto LABEL_19;
      }
      v16 = Windows::UI::Composition::ConditionalExpressionAnimation::AddCondition(
              v12,
              *((struct Windows::UI::Composition::ExpressionAnimation **)v27 + 19),
              *((struct Windows::UI::Composition::CompositionAnimation **)v27 + 20));
      if ( v16 < 0 )
      {
        v22 = 1622LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
        if ( v12 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
        v10 = v16;
        goto LABEL_33;
      }
      v17 = *((unsigned int *)v15 + 36);
      v18 = v8 + 1;
      v34 = *((_DWORD *)v15 + 36);
      if ( v8 + 1 < v8 )
      {
        v20 = -2147024362;
        v21 = 181;
LABEL_16:
        DoStackCaptureDirect(v20, v21);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x658,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
LABEL_30:
        if ( v12 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
        v10 = v20;
        goto LABEL_33;
      }
      if ( v18 > HIDWORD(v30) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 4u, v17, &v34, v26);
        if ( v20 < 0 )
        {
          v21 = 192;
          goto LABEL_16;
        }
        v8 = v31;
      }
      else
      {
        v19 = v8++;
        v31 = v18;
        *(_DWORD *)(v29 + 4 * v19) = v17;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
      v6 = a1;
      ++v11;
    }
    if ( a3 )
    {
      v23 = a3 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        v7 = 2;
      }
    }
    else
    {
      v7 = 0;
    }
    v24 = Windows::UI::Composition::Interactions::InteractionTracker::AddConditionalInertiaModifiers(
            (__int64 *)v6,
            v12,
            v7,
            (__int64)&v29);
    v20 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v24);
      goto LABEL_30;
    }
    if ( v12 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v29);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v9);
    if ( v26 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v26);
LABEL_33:
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v29);
    return v10;
  }
}
