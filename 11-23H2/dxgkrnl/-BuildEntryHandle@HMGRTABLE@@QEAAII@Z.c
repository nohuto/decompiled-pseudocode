/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01E4A5C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C03658D4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C03668B4 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 216LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 216LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 7) & 0x3F | (((*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19) ^ ((unsigned int)v3 ^ (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19)) & 0xFFFFFF) << 6);
}
