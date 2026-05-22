/*
 * XREFs of ?SetMinScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z @ 0x1800B6DDA
 * Callers:
 *     ?put_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z @ 0x1800B6E80 (-put_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetMinScale(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    29,
    a2);
  *((float *)this + 74) = v7;
  v3 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(this, 29LL, &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11E,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
