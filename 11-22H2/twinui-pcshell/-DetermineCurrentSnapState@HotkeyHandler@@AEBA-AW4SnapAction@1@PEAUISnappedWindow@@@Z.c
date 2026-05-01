/*
 * XREFs of ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x180675ACC
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x180673838 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineCurrentSnapState(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v5; // rax
  struct IImmersiveMonitor *v6; // rdx
  int v7; // eax
  int SnapRegionAnchorLocations; // eax
  int v9; // r8d
  float v10; // xmm2_4
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // ecx
  bool v22; // cc
  SnapRectHelpers *v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v25[4]; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
    return 17LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL))(a2) )
    return 16LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
  if ( !(unsigned int)IsWindowArranged(v5) )
    return 15LL;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 48LL))(a2, v25);
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, SnapRectHelpers **))(*(_QWORD *)a2 + 64LL))(a2, &v23);
  if ( (*(int (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v23 + 88LL))(v23, &v24) < 0 )
    goto LABEL_17;
  v7 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(v23, v6);
  SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v25, &v24, v7);
  v9 = SnapRegionAnchorLocations;
  v10 = (float)(v25[2] - v25[0]) / (float)(DWORD2(v24) - v24);
  v11 = 10;
  if ( SnapRegionAnchorLocations > 10 )
  {
    v12 = 11;
    v17 = v9 - 11;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        v11 = 5;
        goto LABEL_36;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v21 = 4;
        v22 = v10 <= 0.34999999;
        goto LABEL_33;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v11 = 17;
          goto LABEL_36;
        }
        goto LABEL_26;
      }
      v12 = 14;
      v21 = 6;
    }
    else
    {
      v12 = 12;
      v21 = 2;
    }
    v22 = (float)((float)(v25[3] - v25[1]) / (float)(HIDWORD(v24) - DWORD1(v24))) <= 0.34999999;
LABEL_33:
    if ( !v22 )
      v12 = v21;
    goto LABEL_35;
  }
  if ( SnapRegionAnchorLocations == 10 )
  {
    v11 = 13;
  }
  else
  {
    v12 = 3;
    v13 = v9 - 3;
    if ( !v13 )
    {
      v12 = 1;
      goto LABEL_35;
    }
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v12 = 7;
        goto LABEL_35;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 2 )
          goto LABEL_35;
LABEL_26:
        v11 = 15;
        goto LABEL_36;
      }
      LOBYTE(v3) = v10 <= 0.34999999;
      v3 += 8;
LABEL_17:
      v12 = v3;
LABEL_35:
      v11 = v12;
    }
  }
LABEL_36:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return v11;
}
