/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007D5B8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007DE80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18007DE80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int IsEqualGUID; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  __int64 v9; // rcx
  _QWORD *v11; // r10
  __int64 v12; // r11

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
    v3 = a1 + 8;
    if ( *a2 == 1819065021
      && a2[1] == *(_DWORD *)&GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data2
      && a2[2] == *(_DWORD *)GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data4
      && a2[3] == *(_DWORD *)&GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5.Data4[4]
      || (v3 += 8LL, *a2 == -1049873362)
      && a2[1] == *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data2
      && a2[2] == *(_DWORD *)GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4
      && a2[3] == *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_2c464444_1696_4977_b07c_617cf0de9c17);
      v8 = 0;
      if ( IsEqualGUID || (unsigned int)InlineIsEqualGUID(v5, &GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3) )
      {
        *v6 = v7;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3) )
      {
        *v11 = v12 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    return v8;
  }
}
