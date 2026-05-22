/*
 * XREFs of ?SetAcceleration@Bounce@Composition@UI@Windows@@QEAAJM@Z @ 0x180167BF4
 * Callers:
 *     ?put_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DB40 (-put_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_Acceleration@Api@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DD80 (-put_Acceleration@Api@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_Acceleration@Api@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DFC0 (-put_Acceleration@Api@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Bounce::SetAcceleration(Windows::UI::Composition::Bounce *this, float a2)
{
  const char *v3; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 >= 0.0 )
  {
    *(float *)this = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbounce.cpp",
      (const char *)0x80070057LL,
      (int)"An invalid acceleration is specified. It cannot be less than 0.",
      v3);
    return 2147942487LL;
  }
}
