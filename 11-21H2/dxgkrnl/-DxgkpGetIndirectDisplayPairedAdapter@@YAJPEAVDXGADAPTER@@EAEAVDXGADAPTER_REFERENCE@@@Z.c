/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62
 * Callers:
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC7F0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D4418 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0043C3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00446AC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(ADAPTER_DISPLAY **a1, char a2, DXGADAPTER **a3)
{
  const struct _GUID *v6; // rdi
  __int64 v7; // r8
  DXGADAPTER *v8; // rax
  bool v9; // zf
  int DefaultRenderAdapterForSession; // eax
  __int64 v11; // rbp
  struct DXGADAPTER *v13; // rdx
  unsigned __int8 v14; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v15; // [rsp+88h] [rbp+20h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  v6 = 0LL;
  if ( a1 && (*((_DWORD *)a1 + 109) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(a1[349], a3, 0LL);
    if ( !*a3 )
      goto LABEL_9;
    if ( a2 )
    {
      if ( *((_DWORD *)*a3 + 50) != 1 || (v8 = *a3, *((_BYTE *)*a3 + 2705)) )
      {
        DXGADAPTER_REFERENCE::Assign(a3, 0LL);
        v8 = *a3;
      }
      if ( !v8 )
      {
LABEL_9:
        v9 = a1[568] == 0LL;
        v15 = 0LL;
        LOBYTE(v7) = !v9;
        v14 = 0;
        DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(&v15, a3, v7, (bool *)&v14);
        v11 = DefaultRenderAdapterForSession;
        if ( DefaultRenderAdapterForSession < 0 )
        {
          WdLogSingleEntry2(2LL, a1, DefaultRenderAdapterForSession);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find the render adapter for display only adapter 0x%I64x (Status = 0x%I64x).",
            (__int64)a1,
            v11,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v11;
        }
        v13 = *a3;
        if ( v14 )
          v6 = (const struct _GUID *)((char *)v13 + 308);
        ADAPTER_DISPLAY::SetPairedRenderAdapter(a1[349], v13, v6);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not an Indirect Display Adapter, returning 0x%I64x.",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
