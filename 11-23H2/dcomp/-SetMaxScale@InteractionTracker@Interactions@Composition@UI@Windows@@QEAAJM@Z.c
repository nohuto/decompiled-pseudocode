/*
 * XREFs of ?SetMaxScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z @ 0x18013B018
 * Callers:
 *     ?put_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z @ 0x18013D170 (-put_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetMaxScale(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2)
{
  int v3; // r9d
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    30,
    a2);
  *((float *)this + 75) = v8;
  v4 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(this, 0x1Eu, (__int64)&v8, v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x136,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
