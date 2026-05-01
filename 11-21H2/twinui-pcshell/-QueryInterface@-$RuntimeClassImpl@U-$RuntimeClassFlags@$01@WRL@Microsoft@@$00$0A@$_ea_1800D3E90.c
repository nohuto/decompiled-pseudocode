/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3E90
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EC930 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC930.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EC950 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC950.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EC970 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC970.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EC990 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC990.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EC9B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EC9B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r11
  _DWORD *v6; // rcx
  __int64 v7; // r10
  _DWORD *v8; // r9
  __int64 v9; // rcx
  int v10; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( *v4 == -62389853
    && v4[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && v4[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && v4[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *v3 = v5;
    v10 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v4, &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee)
    || InlineIsEqualGUID(v6, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee) )
  {
    *v3 = v7;
  }
  else
  {
    v9 = v7 + 8;
    if ( *v8 != -1811144131
      || v8[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      || v8[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      || v8[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      v9 = v7 + 16;
      if ( *v8 != -690132783
        || v8[1] != *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data2
        || v8[2] != *(_DWORD *)GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4
        || v8[3] != *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4[4] )
      {
        v9 = v7 + 24;
        if ( *v8 != 1425846859
          || v8[1] != *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data2
          || v8[2] != *(_DWORD *)GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4
          || v8[3] != *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4[4] )
        {
          v10 = -2147467262;
          goto LABEL_9;
        }
      }
    }
    *v3 = v9;
  }
  v10 = 0;
LABEL_9:
  if ( v10 >= 0 )
LABEL_15:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
  return (unsigned int)v10;
}
