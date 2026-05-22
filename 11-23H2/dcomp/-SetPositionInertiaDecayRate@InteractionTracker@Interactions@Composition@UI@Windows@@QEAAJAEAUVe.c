/*
 * XREFs of ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@_N@Z @ 0x18013B1E4
 * Callers:
 *     ?put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z @ 0x18013D290 (-put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@QEAAJIAEBUVector3@Numerics@Foundation@3@I@Z @ 0x180135294 (--$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windo.c)
 *     _lambda_b3da425d671098df45254089043aaafb_::operator() @ 0x180136540 (_lambda_b3da425d671098df45254089043aaafb_--operator().c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetPositionInertiaDecayRate(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::Foundation::Numerics::Vector3 *a2,
        char a3)
{
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = lambda_b3da425d671098df45254089043aaafb_::operator()((__int64)this, *(float *)a2, 0.0, 1.0);
    if ( v6 < 0 )
    {
      v7 = 342LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = lambda_b3da425d671098df45254089043aaafb_::operator()(v5, *((float *)a2 + 1), 0.0, 1.0);
    if ( v6 < 0 )
    {
      v7 = 343LL;
      goto LABEL_4;
    }
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      62,
      *(float *)a2);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      63,
      *((float *)a2 + 1));
    v10 = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 38) = *(_QWORD *)a2;
    *((_DWORD *)this + 78) = v10;
    *((_BYTE *)this + 316) = 1;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      62,
      0.94999999);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      63,
      0.94999999);
    *((_BYTE *)this + 316) = 0;
  }
  v11 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<Windows::Foundation::Numerics::Vector3>(
          this,
          0x3Du,
          (__int64)a2,
          v9);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16A,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
