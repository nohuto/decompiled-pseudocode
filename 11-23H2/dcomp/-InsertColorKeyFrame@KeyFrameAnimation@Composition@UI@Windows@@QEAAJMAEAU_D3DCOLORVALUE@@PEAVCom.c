/*
 * XREFs of ?InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCompositionEasingFunction@234@@Z @ 0x18007C560
 * Callers:
 *     ?InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z @ 0x18007C4B0 (-InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertColorKeyFrame(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2,
        struct _D3DCOLORVALUE *a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  __int64 v4; // rdx
  int inserted; // ebx
  __int128 v9; // xmm0
  __int64 v11; // rdx
  _OWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType(this, v4, 70LL);
  if ( inserted < 0 )
  {
    v11 = 935LL;
  }
  else
  {
    v12[0] = 0LL;
    v9 = *(_OWORD *)&a3->r;
    LODWORD(v12[0]) = 1;
    *(_OWORD *)((char *)v12 + 8) = v9;
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                 this,
                 a2,
                 (struct KeyframeValueDefinition *)v12,
                 a4);
    if ( inserted >= 0 )
      return 0LL;
    v11 = 942LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
