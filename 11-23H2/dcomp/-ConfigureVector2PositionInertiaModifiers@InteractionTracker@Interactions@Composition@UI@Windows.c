/*
 * XREFs of ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x18013844C
 * Callers:
 *     ?ConfigureVector2PositionInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180138310 (-ConfigureVector2PositionInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Win.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z @ 0x18013688C (-AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEA.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::ConfigureVector2PositionInertiaModifiers(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r15
  Microsoft::WRL2::NestableRuntimeClass *v5; // rax
  unsigned int v6; // r12d
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  struct IUnknown **v10; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  int v12; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // r13
  int v14; // r15d
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  unsigned int v22; // edx
  __int64 v23; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v24; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown **v25; // [rsp+38h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v30; // [rsp+A8h] [rbp+48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v31; // [rsp+B0h] [rbp+50h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v32; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v5 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 24);
    v27 = 0;
    v31 = v5;
    v6 = 0;
    v30 = 1;
    v7 = 0;
    v28 = 0LL;
    v32 = 0LL;
    v26 = 0LL;
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::Compositor *,enum ConditionalExpressionAnimationSelectionMode::Enum>(
           &v32,
           (__int64 *)&v31,
           &v30);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x793,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v8);
LABEL_24:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v32);
LABEL_17:
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v26);
      return v9;
    }
    v10 = (struct IUnknown **)a2[1];
    v11 = v32;
    v25 = &v10[v2];
    if ( v10 != v25 )
    {
      while ( 1 )
      {
        v31 = 0LL;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v31);
        v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *(struct Microsoft::WRL2::ContextSession **)(a1 + 24),
                *v10,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier::s_InterfaceType,
                &v24);
        v13 = v24;
        v14 = v12;
        v31 = v24;
        if ( v12 < 0 )
          break;
        v14 = Windows::UI::Composition::ConditionalExpressionAnimation::AddCondition(
                v11,
                *((struct Windows::UI::Composition::ExpressionAnimation **)v24 + 19),
                *((struct Windows::UI::Composition::CompositionAnimation **)v24 + 20));
        if ( v14 < 0 )
        {
          v23 = 1949LL;
          goto LABEL_23;
        }
        v15 = *((unsigned int *)v13 + 36);
        v16 = v7 + 1;
        v30 = *((_DWORD *)v13 + 36);
        if ( v7 + 1 < v7 )
        {
          v18 = -2147024362;
          v22 = 181;
          goto LABEL_20;
        }
        if ( v16 > v6 )
        {
          v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v26, 4u, v15, &v30);
          if ( v18 < 0 )
          {
            v22 = 192;
LABEL_20:
            DoStackCaptureDirect(v18, v22);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x79F,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v31);
            v9 = v18;
            goto LABEL_24;
          }
          v7 = HIDWORD(v28);
          v6 = v28;
        }
        else
        {
          v17 = v7++;
          HIDWORD(v28) = v16;
          *(_DWORD *)(v26 + 4 * v17) = v15;
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v31);
        if ( ++v10 == v25 )
          goto LABEL_13;
      }
      v23 = 1947LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v31);
      v9 = v14;
      goto LABEL_24;
    }
LABEL_13:
    v19 = Windows::UI::Composition::Interactions::InteractionTracker::AddConditionalInertiaModifiers(
            (__int64 *)a1,
            v11,
            3,
            (__int64)&v26);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A5,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v19);
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
      v9 = v20;
      goto LABEL_17;
    }
    if ( v11 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v26);
  }
  else
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(a1 + 368));
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      40,
      0);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      43,
      0LL,
      0LL);
  }
  return 0LL;
}
