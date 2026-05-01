/*
 * XREFs of ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x180675D34
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x180670608 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x180670814 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 */

_DWORD *__fastcall HotkeyHandler::DetermineNewSnapState(
        SnapLayoutHelpers *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  struct Geometry::CRect *v13; // [rsp+24h] [rbp-34h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF

  *a2 = 0;
  a2[1] = 0;
  v7 = (unsigned int)a4;
  v8 = (unsigned int)a4 + 4LL * (unsigned int)a3;
  if ( !SnapLayoutHelpers::AreQuadrantsEnabled(a1, (__int64)a2, a3, a4) )
  {
    v9 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::TabletMode + v8);
LABEL_9:
    *(_QWORD *)a2 = v9;
    return a2;
  }
  if ( (a5 & 1) == 0 )
  {
    *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Default + v8);
    return a2;
  }
  *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Column + v8);
  v10 = *a6;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v10 + 88))(a6, &v14) >= 0
    && (*(int (__fastcall **)(__int64 *, unsigned int *, struct Geometry::CRect **))(*a6 + 112))(a6, &v12, &v13) >= 0
    && !SnapLayoutHelpers::CanFitColumnLayouts((SnapLayoutHelpers *)&v14, (const struct Geometry::CRect *)v12)
    && *a2 == 10 )
  {
    v9 = qword_18098C2F0[v7];
    goto LABEL_9;
  }
  return a2;
}
