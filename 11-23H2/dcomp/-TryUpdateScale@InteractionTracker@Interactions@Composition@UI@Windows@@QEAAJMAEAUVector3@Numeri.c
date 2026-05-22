/*
 * XREFs of ?TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BF5C
 * Callers:
 *     ?TryUpdateScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013BEB0 (-TryUpdateScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numer.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdateScale(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        int *a4)
{
  __int64 NextRequestId; // rsi
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  NextRequestId = (int)Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(this);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    31,
    v13);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    35,
    *(float *)a3);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    36,
    *((float *)a3 + 1));
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    32,
    NextRequestId);
  v9 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(this, 2u, (__int64)&v13, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a4 = NextRequestId;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
