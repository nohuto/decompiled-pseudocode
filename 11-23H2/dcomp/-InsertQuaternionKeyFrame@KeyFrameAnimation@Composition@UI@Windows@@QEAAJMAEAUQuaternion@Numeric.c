/*
 * XREFs of ?InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x1801880A4
 * Callers:
 *     ?InsertKeyFrame@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@@Z @ 0x18017B3C0 (-InsertKeyFrame@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numeri.c)
 *     ?InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18017B480 (-InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertQuaternionKeyFrame(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2,
        struct Windows::Foundation::Numerics::Quaternion *a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  int inserted; // ebx
  __int64 v8; // rdx
  __int128 v10; // xmm0
  _DWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType((__int64)this, a2, 71);
  if ( inserted < 0 )
  {
    v8 = 968LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  v10 = *(_OWORD *)a3;
  v11[1] = 0;
  v11[0] = 1;
  v12 = v10;
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
               this,
               a2,
               (struct KeyframeValueDefinition *)v11,
               a4);
  if ( inserted < 0 )
  {
    v8 = 978LL;
    goto LABEL_3;
  }
  return 0LL;
}
