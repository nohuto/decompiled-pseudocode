/*
 * XREFs of ?IAnimationObjectPropertyNameCheck@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@@Z @ 0x18001F5F4
 * Callers:
 *     ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAVCompositionAnimation@234@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18001504C (-StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAni.c)
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::IAnimationObjectPropertyNameCheck(
        Windows::UI::Composition::AnimationHelper *this,
        HSTRING a2)
{
  PCWSTR StringRawBuffer; // rdx
  const char *v4; // rax
  __int64 v5; // rdx
  char *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF

  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( !length )
  {
    v4 = "Property name is empty.";
    v5 = 521LL;
LABEL_9:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationhelper.cpp",
      (const char *)0x80070057LL,
      (int)v4,
      v6);
    return 2147942487LL;
  }
  if ( length < 0x100 )
  {
    if ( *StringRawBuffer != 46 && StringRawBuffer[length - 1] != 46 )
      return 0LL;
    v4 = "Found '.' character at beginning or end of string. Invalid subchannel/property naming syntax.";
    v5 = 536LL;
    goto LABEL_9;
  }
  LODWORD(v6) = 256;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x211,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationhelper.cpp",
    (const char *)0x80070057LL,
    (int)"Property name exceeds %d characters, maximum allowed property name length.",
    v6);
  return 2147942487LL;
}
