/*
 * XREFs of ??$ConvertReferenceToValue@M@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@M@Foundation@3@PEAMPEA_N@Z @ 0x1801345CC
 * Callers:
 *     ?put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@6@@Z @ 0x18013D370 (-put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU.c)
 *     ?put_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@5@@Z @ 0x180167A20 (-put_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference@M.c)
 *     ?put_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@5@@Z @ 0x180167AD0 (-put_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<float>(
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
