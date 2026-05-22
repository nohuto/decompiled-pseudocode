/*
 * XREFs of ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C
 * Callers:
 *     ?InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCompositionEasingFunction@234@@Z @ 0x18007C560 (-InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCom.c)
 *     ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x18007C6A4 (-InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foun.c)
 *     ?InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMMPEAVCompositionEasingFunction@234@@Z @ 0x18007C7DC (-InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMMPEAVCompositionEasingFunc.c)
 *     ?InsertKeyFrame@Api@BooleanKeyFrameAnimation@Composition@UI@Windows@@UEAAJME@Z @ 0x18007C880 (-InsertKeyFrame@Api@BooleanKeyFrameAnimation@Composition@UI@Windows@@UEAAJME@Z.c)
 *     ?InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x1801880A4 (-InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numeric.c)
 *     ?InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188150 (-InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foun.c)
 *     ?InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188210 (-InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foun.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType(__int64 a1, float a2, int a3)
{
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(16LL, L"normalizedProgressKey");
    v4 = 1219LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 416) == a3 )
      return 0LL;
    Windows::UI::Composition::OriginateInvalidArgument(13LL, L"value");
    v4 = 1224LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
