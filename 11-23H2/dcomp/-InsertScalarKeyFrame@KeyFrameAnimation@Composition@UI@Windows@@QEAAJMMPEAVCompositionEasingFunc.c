/*
 * XREFs of ?InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMMPEAVCompositionEasingFunction@234@@Z @ 0x18007C7DC
 * Callers:
 *     ?InsertKeyFrame@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMM@Z @ 0x18007C760 (-InsertKeyFrame@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertScalarKeyFrame(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2,
        float a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  __int64 v4; // rdx
  int inserted; // ebx
  __int64 v9; // rdx
  int v10[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType(this, v4, 18LL);
  if ( inserted < 0 )
  {
    v9 = 797LL;
  }
  else
  {
    *(_OWORD *)v10 = 0LL;
    *(float *)&v10[2] = a3;
    v10[0] = 1;
    v11 = 0LL;
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                 this,
                 a2,
                 (struct KeyframeValueDefinition *)v10,
                 a4);
    if ( inserted >= 0 )
      return 0LL;
    v9 = 804LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
