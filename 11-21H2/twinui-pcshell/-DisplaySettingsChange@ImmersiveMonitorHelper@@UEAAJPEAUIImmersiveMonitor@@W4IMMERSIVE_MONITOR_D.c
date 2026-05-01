/*
 * XREFs of ?DisplaySettingsChange@ImmersiveMonitorHelper@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180043930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::DisplaySettingsChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 (__fastcall **v8)(); // rdi

  if ( !*(_QWORD *)(a1 + 56) )
    return 2147943568LL;
  if ( *(_DWORD *)(a1 + 64) && (a3 & 0x27) != 0 )
  {
    v6 = 0;
    v7 = a1 - 24;
    v8 = off_180657EB0;
    do
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))*v8)(v7, a2, a3) )
        break;
      ++v6;
      ++v8;
    }
    while ( v6 < 4 );
  }
  return 0LL;
}
