/*
 * XREFs of ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60
 * Callers:
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z @ 0x18013688C (-AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEA.c)
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??4?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x1800442F4 (--4-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComposit.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18014F1A8 (-ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0 (-SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVComp.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAVCompositionAnimation@456@$$QEAPEAVConditionalExpressionAnimation@456@@Z @ 0x1801617E8 (--$MakeAndInitialize2@VConditionalExpressionAnimator@Composition@UI@Windows@@V1234@PEAVComposito.c)
 */

__int64 __fastcall Windows::UI::Composition::ConditionalExpressionAnimation::GenerateInstance(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **this,
        volatile signed __int32 *a3,
        Microsoft::WRL2::NestableRuntimeClass *a4,
        Microsoft::WRL2::NestableRuntimeClass *a5,
        int a6,
        Microsoft::WRL2::NestableRuntimeClass **a7)
{
  volatile signed __int32 **v7; // r13
  char v11; // r15
  char v12; // r14
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  struct Windows::UI::Composition::CompositionObject *v17; // rbx
  HSTRING_HEADER *v18; // rax
  __int64 v19; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  HSTRING_HEADER *v24; // rax
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+20h] [rbp-50h] BYREF
  Microsoft::WRL2::NestableRuntimeClass **v27; // [rsp+28h] [rbp-48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass **v28; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::UI::Composition::Compositor *v29; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v30; // [rsp+40h] [rbp-30h] BYREF

  v7 = (volatile signed __int32 **)(a1 + 34);
  v26 = 0LL;
  v28 = this;
  *a7 = 0LL;
  v11 = 0;
  v12 = 0;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::operator=(a1 + 34, a3);
  a1[36] = a5;
  a1[35] = a4;
  if ( this == a1 )
  {
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v30,
            (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
            v13);
    v15 = Windows::UI::Composition::CompositionAnimation::SetReferenceParameter(
            (Windows::UI::Composition::CompositionAnimation *)a1,
            (HSTRING)v14[1].Reserved.Reserved1,
            (struct Windows::UI::Composition::CompositionObject *)a1,
            1);
    v16 = v15;
    if ( v15 < 0 )
    {
      v21 = 137;
      goto LABEL_10;
    }
    v12 = 1;
  }
  v17 = this[34];
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v30,
          (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_targetParameterName,
          v13);
  v15 = Windows::UI::Composition::CompositionAnimation::SetReferenceParameter(
          (Windows::UI::Composition::CompositionAnimation *)this,
          (HSTRING)v18[1].Reserved.Reserved1,
          v17,
          1);
  v16 = v15;
  if ( v15 < 0 )
  {
    v21 = 145;
  }
  else
  {
    v29 = a1[3];
    v27 = a1;
    v11 = 1;
    v15 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimator,Windows::UI::Composition::ConditionalExpressionAnimator,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionAnimation * &,Windows::UI::Composition::ConditionalExpressionAnimation *>(
            &v26,
            &v29,
            (struct Windows::UI::Composition::CompositionAnimation **)&v28,
            (struct Windows::UI::Composition::ConditionalExpressionAnimation **)&v27);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v20 = v26;
      v26 = 0LL;
      v16 = 0;
      *a7 = v20;
      goto LABEL_11;
    }
    v21 = 153;
  }
LABEL_10:
  DoStackCaptureDirect(v15, v21);
LABEL_11:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(v7, v19);
  a1[35] = 0LL;
  a1[36] = 0LL;
  if ( v12 )
  {
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v30,
            (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
            v22);
    Windows::UI::Composition::CompositionAnimation::ClearParameter(
      (Windows::UI::Composition::CompositionAnimation *)a1,
      (HSTRING)v23[1].Reserved.Reserved1);
  }
  if ( v11 )
  {
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v30,
            (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_targetParameterName,
            v22);
    Windows::UI::Composition::CompositionAnimation::ClearParameter(
      (Windows::UI::Composition::CompositionAnimation *)this,
      (HSTRING)v24[1].Reserved.Reserved1);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
  return v16;
}
