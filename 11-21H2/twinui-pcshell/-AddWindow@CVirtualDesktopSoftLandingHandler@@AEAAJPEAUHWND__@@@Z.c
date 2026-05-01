/*
 * XREFs of ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x18013BEDC
 * Callers:
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18013BD90 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18055C128 (-TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::AddWindow(CVirtualDesktopSoftLandingHandler *this, HWND hWnd)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 **i; // rax
  size_t size_of; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx

  if ( !GetPropW(hWnd, (LPCWSTR)0xA920) )
  {
    v4 = (__int64 **)*((_QWORD *)this + 23);
    v5 = *v4;
    for ( i = (__int64 **)*v4; i != v4; i = (__int64 **)*i )
    {
      if ( i[2] == (__int64 *)hWnd )
        return 0LL;
    }
    if ( *((_QWORD *)this + 24) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list too long");
    size_of = std::_Get_size_of_n<24>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[2] = hWnd;
    ++*((_QWORD *)this + 24);
    v9 = (_QWORD *)v5[1];
    *v8 = v5;
    v8[1] = v9;
    v5[1] = (__int64)v8;
    *v9 = v8;
    if ( *((_QWORD *)this + 24) > 7uLL )
      CVirtualDesktopSoftLandingHandler::TriggerCampaign(this);
  }
  return 0LL;
}
