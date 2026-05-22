/*
 * XREFs of ?SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z @ 0x18013B358
 * Callers:
 *     ?put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@6@@Z @ 0x18013D370 (-put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetScaleInertiaDecayRate(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2,
        char a3)
{
  int v4; // r9d
  unsigned int v5; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( a3 )
  {
    if ( a2 < 0.0 || a2 > 1.0 )
    {
      v5 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x183,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)0x80070057LL,
        (int)"Invalid ScaleInertiaDecayRate specified: %.2f. It must be within 0-1.",
        COERCE_CONST_CHAR_(a2));
      return v5;
    }
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      64,
      a2);
    *((float *)this + 80) = v9;
    *((_BYTE *)this + 324) = 1;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      64,
      0.98500001);
    *((_BYTE *)this + 324) = 0;
  }
  v7 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(this, 0x40u, (__int64)&v9, v4);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v7);
    return v5;
  }
  return 0LL;
}
