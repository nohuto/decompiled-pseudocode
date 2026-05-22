/*
 * XREFs of ?ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@@Z @ 0x18011D294
 * Callers:
 *     ?ConfigureCenterPointXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011CC10 (-ConfigureCenterPointXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@.c)
 *     ?ConfigureCenterPointYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011CD60 (-ConfigureCenterPointYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@.c)
 *     ?ConfigureDeltaPositionXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011CEB0 (-ConfigureDeltaPositionXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Window.c)
 *     ?ConfigureDeltaPositionYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011D000 (-ConfigureDeltaPositionYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Window.c)
 *     ?ConfigureDeltaScaleModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011D150 (-ConfigureDeltaScaleModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?SetSourceModifier@CompositionManipulation@Composition@UI@Windows@@QEAAXW4SourceModifierIndex@@PEAVConditionalExpressionAnimator@234@@Z @ 0x180161630 (-SetSourceModifier@CompositionManipulation@Composition@UI@Windows@@QEAAXW4SourceModifierIndex@@P.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::ConfigureSourceModifiers(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  __int128 v5; // xmm0
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  int v10[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  if ( !*a2 )
  {
    Windows::UI::Composition::CompositionManipulation::SetSourceModifier(*(_QWORD *)(a1 + 248), (unsigned int)a3, 0LL);
    return 0LL;
  }
  v5 = *(_OWORD *)a2;
  v12 = 0LL;
  *(_OWORD *)v10 = v5;
  v6 = ((__int64 (__fastcall *)(__int64, int *, __int64, Microsoft::WRL2::NestableRuntimeClass **))Windows::UI::Composition::Interactions::VisualInteractionSource::CreateConditionalExpressionAnimator)(
         a1,
         v10,
         a3,
         &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v12;
    Windows::UI::Composition::CompositionManipulation::SetSourceModifier(*(_QWORD *)(a1 + 248), v3, v12);
    if ( v9 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x194,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)(unsigned int)v6);
  if ( v12 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
  return v7;
}
