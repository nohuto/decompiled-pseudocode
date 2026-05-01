/*
 * XREFs of ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805A91CC
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@AEBUCRect@Geometry@@0H@Z @ 0x1805A64B0 (-GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocatio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineCurrentSnapState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // rax
  struct IImmersiveMonitor *v8; // rdx
  int v9; // eax
  int SnapRegionAnchorLocations; // eax
  int v11; // r8d
  float v12; // xmm2_4
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // ecx
  bool v24; // cc
  SnapLayoutHelpers *v25; // [rsp+20h] [rbp-30h] BYREF
  __int128 v26; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v27[4]; // [rsp+38h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
    return 17LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL))(a2) )
    return 16LL;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
  if ( !(unsigned int)IsWindowArranged(v7) )
    return 15LL;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 48LL))(a2, v27);
  v26 = 0LL;
  (*(void (__fastcall **)(__int64, SnapLayoutHelpers **))(*(_QWORD *)a2 + 64LL))(a2, &v25);
  if ( (*(int (__fastcall **)(SnapLayoutHelpers *, __int128 *))(*(_QWORD *)v25 + 88LL))(v25, &v26) < 0 )
    goto LABEL_17;
  v9 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(v25, v8);
  SnapRegionAnchorLocations = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(v27, &v26, v9);
  v11 = SnapRegionAnchorLocations;
  v12 = (float)(v27[2] - v27[0]) / (float)(DWORD2(v26) - v26);
  v13 = 10;
  if ( SnapRegionAnchorLocations > 10 )
  {
    v14 = 11;
    v19 = v11 - 11;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
      {
        v13 = 5;
        goto LABEL_36;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v23 = 4;
        v24 = v12 <= 0.34999999;
        goto LABEL_33;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v13 = 17;
          goto LABEL_36;
        }
        goto LABEL_26;
      }
      v14 = 14;
      v23 = 6;
    }
    else
    {
      v14 = 12;
      v23 = 2;
    }
    v24 = (float)((float)(v27[3] - v27[1]) / (float)(HIDWORD(v26) - DWORD1(v26))) <= 0.34999999;
LABEL_33:
    if ( !v24 )
      v14 = v23;
    goto LABEL_35;
  }
  if ( SnapRegionAnchorLocations == 10 )
  {
    v13 = 13;
  }
  else
  {
    v14 = 3;
    v15 = v11 - 3;
    if ( !v15 )
    {
      v14 = 1;
      goto LABEL_35;
    }
    v16 = v15 - 2;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v14 = 7;
        goto LABEL_35;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 2 )
          goto LABEL_35;
LABEL_26:
        v13 = 15;
        goto LABEL_36;
      }
      LOBYTE(v5) = v12 <= 0.34999999;
      v5 += 8;
LABEL_17:
      v14 = v5;
LABEL_35:
      v13 = v14;
    }
  }
LABEL_36:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  return v13;
}
