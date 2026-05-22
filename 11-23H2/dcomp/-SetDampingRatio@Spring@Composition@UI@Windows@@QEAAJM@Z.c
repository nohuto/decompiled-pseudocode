/*
 * XREFs of ?SetDampingRatio@Spring@Composition@UI@Windows@@QEAAJM@Z @ 0x1801692F4
 * Callers:
 *     ?put_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017E200 (-put_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017E440 (-put_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_DampingRatio@Api@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017E680 (-put_DampingRatio@Api@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Spring::SetDampingRatio(Windows::UI::Composition::Spring *this, float a2)
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
      (void *)0x2C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspring.cpp",
      (const char *)0x80070057LL,
      (int)"An invalid damping ratio is specified. It cannot be less than 0.",
      v3);
    return 2147942487LL;
  }
}
