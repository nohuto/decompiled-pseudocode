/*
 * XREFs of ?SetRestitution@Bounce@Composition@UI@Windows@@QEAAJM@Z @ 0x180167CA8
 * Callers:
 *     ?put_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DBD0 (-put_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_Restitution@Api@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DE10 (-put_Restitution@Api@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_Restitution@Api@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017E050 (-put_Restitution@Api@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Bounce::SetRestitution(Windows::UI::Composition::Bounce *this, float a2)
{
  const char *v3; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x41,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbounce.cpp",
      (const char *)0x80070057LL,
      (int)"An invalid restitution is specified. It must be within the range of 0-1.",
      v3);
    return 2147942487LL;
  }
  else
  {
    *((float *)this + 1) = a2;
    return 0LL;
  }
}
