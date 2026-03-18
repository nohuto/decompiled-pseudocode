/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01B56FC
 * Callers:
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0004888 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0004F5C (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C000A840 (-DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C018DD14 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1C01FED74 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0314CE4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry1(1LL, 2724LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2724LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *((unsigned int *)this + 341);
}
