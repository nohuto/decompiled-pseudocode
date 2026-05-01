/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FDC38
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDB70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800FDB70.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11

  if ( InlineIsEqualGUID(a2, &GUID_0aae586b_12be_4521_9e84_624c4833ff79) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060)
      || InlineIsEqualGUID(v5, &GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7) )
    {
      *v6 = v8;
    }
    else if ( InlineIsEqualGUID(v10, &GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6) )
    {
      *v11 = v12 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
