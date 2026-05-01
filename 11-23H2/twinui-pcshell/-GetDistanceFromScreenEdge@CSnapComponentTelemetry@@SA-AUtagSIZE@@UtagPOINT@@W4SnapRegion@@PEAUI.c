/*
 * XREFs of ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x180660CB0
 * Callers:
 *     ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180663438 (-SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonit.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSnapComponentTelemetry::GetDistanceFromScreenEdge(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // edi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  v4 = 0LL;
  v15 = 0LL;
  v14 = HIDWORD(a1);
  v6 = a1;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v3 + 72))(a3, &v15) >= 0 )
  {
    v7 = a2 - 1;
    if ( !v7
      || (v8 = v7 - 1) == 0
      || (v9 = v8 - 1) == 0
      || (v10 = v9 - 1) == 0
      || (v11 = v10 - 1) == 0
      || (unsigned int)(v11 - 2) <= 1 )
    {
      LODWORD(v13) = DWORD2(v15) - v6;
      HIDWORD(v13) = HIDWORD(v15) - v14;
      return v13;
    }
  }
  return v4;
}
