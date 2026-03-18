/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C030D218
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C0053BFC (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C030C958 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C030D0BC (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char v2; // bl
  struct DXGADAPTER *i; // rax

  v2 = 0;
  if ( this[91] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6386LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterListMutex.IsOwner()", 6386LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = this[100]; i != (struct DXGADAPTER *)(this + 100) && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *((_DWORD *)a2 + 50) == 1;
  }
  return v2;
}
