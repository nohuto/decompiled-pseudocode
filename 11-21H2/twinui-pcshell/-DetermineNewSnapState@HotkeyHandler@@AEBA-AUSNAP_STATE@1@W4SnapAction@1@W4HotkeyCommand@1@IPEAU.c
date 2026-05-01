/*
 * XREFs of ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x1805A9444
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805A1C18 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 */

_DWORD *__fastcall HotkeyHandler::DetermineNewSnapState(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  SnapLayoutHelpers *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-38h] BYREF
  struct Geometry::CRect *v18; // [rsp+24h] [rbp-34h] BYREF
  __int128 v19; // [rsp+28h] [rbp-30h] BYREF

  v7 = (unsigned int)a4;
  v8 = (unsigned int)a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *a2 = 0;
  v9 = v7 + 4 * v8;
  a2[1] = 0;
  if ( !SnapLayoutHelpers::AreQuadrantsEnabled(v11, v10, v12, v13) )
  {
    v14 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::TabletMode + v9);
LABEL_9:
    *(_QWORD *)a2 = v14;
    return a2;
  }
  if ( (a5 & 1) == 0 )
  {
    *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Default + v9);
    return a2;
  }
  *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Column + v9);
  v15 = *a6;
  v19 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v15 + 88))(a6, &v19) >= 0
    && (*(int (__fastcall **)(__int64 *, unsigned int *, struct Geometry::CRect **))(*a6 + 112))(a6, &v17, &v18) >= 0
    && !SnapLayoutHelpers::CanFitColumnLayouts((SnapLayoutHelpers *)&v19, (const struct Geometry::CRect *)v17)
    && *a2 == 10 )
  {
    v14 = qword_1807B26E0[(unsigned int)v7];
    goto LABEL_9;
  }
  return a2;
}
