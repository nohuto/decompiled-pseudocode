/*
 * XREFs of ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x18007C6A4
 * Callers:
 *     ?InsertKeyFrame@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@5@@Z @ 0x18007C430 (-InsertKeyFrame@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Fou.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18007C600 (-InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertVector3KeyFrame(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  __int64 v4; // rdx
  int inserted; // ebx
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  __int64 v14; // rdx
  int v15[8]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType(this, v4, 52LL);
  if ( inserted < 0 )
  {
    v14 = 864LL;
  }
  else
  {
    v10 = *(_DWORD *)a3;
    v11 = *((_DWORD *)a3 + 1);
    v15[1] = 0;
    v15[5] = 0;
    v15[2] = v10;
    v12 = *((_DWORD *)a3 + 2);
    v15[3] = v11;
    v15[4] = v12;
    v15[0] = 1;
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                 this,
                 a2,
                 (struct KeyframeValueDefinition *)v15,
                 a4);
    if ( inserted >= 0 )
      return 0LL;
    v14 = 873LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
