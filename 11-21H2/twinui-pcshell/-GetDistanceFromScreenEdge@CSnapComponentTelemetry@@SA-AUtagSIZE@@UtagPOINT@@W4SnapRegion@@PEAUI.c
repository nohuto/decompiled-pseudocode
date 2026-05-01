/*
 * XREFs of ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x180593528
 * Callers:
 *     ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180595E88 (-SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonit.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSnapComponentTelemetry::GetDistanceFromScreenEdge(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  v4 = 0LL;
  v10 = 0LL;
  v9 = HIDWORD(a1);
  v6 = a1;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v3 + 72))(a3, &v10) >= 0
    && a2 > 0
    && (a2 < 6 || a2 == 7 || a2 == 8) )
  {
    LODWORD(v8) = DWORD2(v10) - v6;
    HIDWORD(v8) = HIDWORD(v10) - v9;
    return v8;
  }
  return v4;
}
