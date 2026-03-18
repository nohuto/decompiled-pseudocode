/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z @ 0x1C020D9E0
 * Callers:
 *     ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x1C020D94C (--0EDIDCACHE@DxgMonitor@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021A2C0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::SetPhysicalDimensionOfInternalPanel(
        DxgMonitor::EDIDCACHE *this,
        int a2,
        int a3,
        char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  _DWORD *v6; // rdx
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx

  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 672) )
  {
    v6 = (_DWORD *)((char *)this + 664);
    if ( a3 * (int)v5 > *((_DWORD *)this + 167) * *((_DWORD *)this + 166) )
    {
      *((_BYTE *)this + 672) = a4;
      *((_DWORD *)this + 167) = a3;
      *v6 = v5;
      updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, v6, 8LL, 0LL, 0LL, 0, 0);
      v10 = v4;
      if ( updated < 0 )
      {
        v12 = updated;
        WdLogSingleEntry3(2LL, updated, v5, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed (0x%I64x) to set WNF_DX_INTERNAL_PANEL_DIMENSIONS to size (%d, %d)",
          v12,
          v5,
          v10,
          0LL,
          0LL);
      }
      else
      {
        v11 = WdLogNewEntry5_WdTrace(v9, v8);
        *(_QWORD *)(v11 + 24) = v5;
        *(_QWORD *)(v11 + 32) = v4;
      }
    }
  }
}
