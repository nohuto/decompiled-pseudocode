/*
 * XREFs of ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180191520
 * Callers:
 *     ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K@Z @ 0x180190F90 (-OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180191254 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180190448 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnTailButtonLongPress(PenEventsDispatcherPrincipal *this)
{
  __int64 v1; // rdx
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v2[0] = off_1801ED6C8;
  v2[7] = v2;
  if ( *((_BYTE *)this + 196) )
    v1 = *((unsigned int *)this + 50);
  PenEventsDispatcherPrincipal::FireEvents((__int64)this, v1, (__int64)v2);
}
