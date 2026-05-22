/*
 * XREFs of ?InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188150
 * Callers:
 *     ?InsertKeyFrame@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector2@Numerics@Foundation@5@@Z @ 0x18017D980 (-InsertKeyFrame@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector2@Numerics@Fou.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertVector2KeyFrame(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2,
        struct Windows::Foundation::Numerics::Vector2 *a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  int inserted; // ebx
  __int64 v9; // rdx
  int v11; // xmm1_4
  int v12; // xmm0_4
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType((__int64)this, a2, 35);
  if ( inserted < 0 )
  {
    v9 = 830LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  v11 = *((_DWORD *)a3 + 1);
  v12 = *(_DWORD *)a3;
  v13[1] = 0;
  v14 = 0LL;
  v13[3] = v11;
  v13[2] = v12;
  v13[0] = 1;
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
               this,
               a2,
               (struct KeyframeValueDefinition *)v13,
               a4);
  if ( inserted < 0 )
  {
    v9 = 838LL;
    goto LABEL_3;
  }
  return 0LL;
}
