/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180083B84
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EB40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18007EB40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // r11

  if ( *a2 == 646674328
    && a2[1] == *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    if ( *a2 == 1629137150
      && a2[1] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data2
      && a2[2] == *(_DWORD *)GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4
      && a2[3] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4[4] )
    {
      *a3 = a1 + 8;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270);
      v8 = 0;
      if ( IsEqualGUID
        || (v7 += 8LL, *v5 == -1850735350)
        && v5[1] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data2
        && v5[2] == *(_DWORD *)GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4
        && v5[3] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4[4]
        || InlineIsEqualGUID(v4, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a) )
      {
        *v6 = v7;
      }
      else if ( InlineIsEqualGUID(v9, &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee) )
      {
        *v10 = v11 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    return v8;
  }
}
