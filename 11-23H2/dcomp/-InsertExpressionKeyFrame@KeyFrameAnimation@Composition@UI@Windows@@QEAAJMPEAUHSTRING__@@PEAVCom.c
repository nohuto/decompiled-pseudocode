/*
 * XREFs of ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z @ 0x18005E190
 * Callers:
 *     ?InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@PEAUICompositionEasingFunction@345@@Z @ 0x180084140 (-InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJM.c)
 *     ?InsertExpressionKeyFrame@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@@Z @ 0x180088C50 (-InsertExpressionKeyFrame@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10 (-CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::InsertExpressionKeyFrame(
        Windows::UI::Composition::CompositorCommon **this,
        float a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  const unsigned __int16 *StringRawBuffer; // rax
  int inserted; // eax
  unsigned int v9; // ebx
  struct Windows::UI::Composition::ExpressionAnimation *v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  struct Windows::UI::Composition::ExpressionAnimation *v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v14 = 0LL;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(16LL, L"normalizedProgressKey");
    v9 = -2147024809;
    v12 = 1012LL;
    v13 = 2147942487LL;
    goto LABEL_15;
  }
  StringRawBuffer = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( a3 )
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"this.StartingValue") )
  {
    LODWORD(v15) = 3;
    goto LABEL_8;
  }
  inserted = Windows::UI::Composition::CompositorCommon::CreateExpressionAnimation(this[3], a3, &v14);
  v9 = inserted;
  if ( inserted >= 0 )
  {
    v10 = v14;
    v14 = 0LL;
    *((_BYTE *)this + 480) |= 1u;
    LODWORD(v15) = 2;
    *((_QWORD *)&v15 + 1) = v10;
LABEL_8:
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                 (Windows::UI::Composition::KeyFrameAnimation *)this,
                 a2,
                 (struct KeyframeValueDefinition *)&v15,
                 a4);
    v9 = inserted;
    if ( inserted >= 0 )
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v14);
      return 0LL;
    }
    v12 = 1033LL;
    goto LABEL_13;
  }
  v12 = 1026LL;
LABEL_13:
  v13 = (unsigned int)inserted;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v14);
  return v9;
}
