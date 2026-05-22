/*
 * XREFs of ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10
 * Callers:
 *     ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z @ 0x18005E190 (-InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCom.c)
 *     ?CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@345@@Z @ 0x18005E7A0 (-CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimati.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUHSTRING__@@@Z @ 0x18005EA68 (--$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAP.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateExpressionAnimation(
        Windows::UI::Composition::CompositorCommon *this,
        HSTRING a2,
        struct Windows::UI::Composition::ExpressionAnimation **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ExpressionAnimation *v8; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v9; // [rsp+38h] [rbp+10h] BYREF
  Windows::UI::Composition::CompositorCommon *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *a3 = 0LL;
  v8 = 0LL;
  v10 = this;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ExpressionAnimation,Windows::UI::Composition::ExpressionAnimation,Windows::UI::Composition::Compositor *,HSTRING__ * &>(
         &v8,
         &v10,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v8);
    return v5;
  }
  else
  {
    *a3 = v8;
    return 0LL;
  }
}
