/*
 * XREFs of ??$ConvertReferenceToValue@UVector3@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@3@PEAUVector3@Numerics@53@PEA_N@Z @ 0x180134634
 * Callers:
 *     ?put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z @ 0x18013D290 (-put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 *     ?put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168A90 (-put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference@.c)
 *     ?put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168B70 (-put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReferenc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<Windows::Foundation::Numerics::Vector3>(
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
