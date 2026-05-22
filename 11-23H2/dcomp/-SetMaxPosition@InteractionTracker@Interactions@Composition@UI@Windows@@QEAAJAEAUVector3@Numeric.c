/*
 * XREFs of ?SetMaxPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@@Z @ 0x18013AF68
 * Callers:
 *     ?put_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z @ 0x18013D0E0 (-put_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numer.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@QEAAJIAEBUVector3@Numerics@Foundation@3@I@Z @ 0x180135294 (--$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetMaxPosition(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    27,
    *(float *)a2);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    28,
    *((float *)a2 + 1));
  *((_QWORD *)this + 35) = *(_QWORD *)a2;
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 2);
  v5 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<Windows::Foundation::Numerics::Vector3>(
         this,
         0x1Au,
         (__int64)a2,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x106,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
