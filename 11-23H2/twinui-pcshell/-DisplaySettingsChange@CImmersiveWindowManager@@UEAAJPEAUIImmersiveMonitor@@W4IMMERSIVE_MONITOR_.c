/*
 * XREFs of ?DisplaySettingsChange@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800736C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  RTL_SRWLOCK *v6; // rcx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v7);
    v6 = CApplicationManagerUtility::g_pIAMGlobals;
    *(_BYTE *)(a1 + 97) = v7 != 0;
    ReleaseSRWLockExclusive(v6);
  }
  return 0LL;
}
