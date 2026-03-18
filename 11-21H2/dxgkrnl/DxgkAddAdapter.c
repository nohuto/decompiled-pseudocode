/*
 * XREFs of DxgkAddAdapter @ 0x1C01FC084
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 */

__int64 __fastcall DxgkAddAdapter(
        struct _DEVICE_OBJECT *a1,
        void *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        _DWORD *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  struct DXGADAPTER *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
  {
    WdLogSingleEntry1(1LL, 167LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDeviceObject != nullptr) && (PnPTransitionToken != nullptr) && (pAdapterCaps != nullptr) && (pAdapterDi"
                "splayCaps != nullptr)",
      167LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  result = DXGGLOBAL::CreateAdapter(Global, a1, &v12, a2, a3, a5);
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)v12 + 349);
    if ( v11 )
      *a4 = *(_DWORD *)(v11 + 24);
  }
  return result;
}
