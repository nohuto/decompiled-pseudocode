/*
 * XREFs of ?SetPeriod@Spring@Composition@UI@Windows@@QEAAJUTimeSpan@Foundation@4@@Z @ 0x180169344
 * Callers:
 *     ?put_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z @ 0x18017E290 (-put_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Founda.c)
 *     ?put_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z @ 0x18017E4D0 (-put_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Found.c)
 *     ?put_Period@Api@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z @ 0x18017E710 (-put_Period@Api@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Found.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Spring::SetPeriod(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspring.cpp",
      (const char *)0x80070057LL,
      (int)"An invalid period is specified. It cannot be 0.",
      v3);
    return 2147942487LL;
  }
}
