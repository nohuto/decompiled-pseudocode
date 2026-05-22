/*
 * XREFs of ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180033AE0
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18003360C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801C96A4 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801CA344 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemContextProvider::BroadcastMessageToObservers(__int64 a1, __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a1 + 32); ; (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], a2) )
  {
    i = (__int64 *)*i;
    if ( i == *(__int64 **)(a1 + 32) )
      break;
  }
  return 0LL;
}
