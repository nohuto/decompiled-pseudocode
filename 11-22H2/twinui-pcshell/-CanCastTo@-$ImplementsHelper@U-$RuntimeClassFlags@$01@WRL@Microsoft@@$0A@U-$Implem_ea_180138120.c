/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180138120
 * Callers:
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180137FDC (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801380B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801380B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d
  _QWORD *v8; // r10
  __int64 v9; // r11

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47);
    v7 = 0;
    if ( IsEqualGUID )
    {
      *v5 = v6;
    }
    else if ( InlineIsEqualGUID(v4, &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589) )
    {
      *v8 = v9 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v7;
}
