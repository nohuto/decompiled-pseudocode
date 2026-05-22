/*
 * XREFs of ??$ConvertReferenceToValue@UVector2@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@3@PEAUVector2@Numerics@53@PEA_N@Z @ 0x180167DAC
 * Callers:
 *     ?put_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168490 (-put_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference@.c)
 *     ?put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168540 (-put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReferenc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<Windows::Foundation::Numerics::Vector2>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  if ( a1 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtAnimationHelper.h",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *a3 = 1;
  }
  return 0LL;
}
