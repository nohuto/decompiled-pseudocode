/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14022CF30
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBF54 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmGetObject @ 0x1406D81D0 (PiDmGetObject.c)
 *     PiDcHandleDeviceEvent @ 0x140787830 (PiDcHandleDeviceEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x140798874 (PiSwFindBusRelations.c)
 *     PopPowerRequestTableLookupEntry @ 0x1407A7200 (PopPowerRequestTableLookupEntry.c)
 *     PopPowerRequestStatsCreate @ 0x1407A7CEC (PopPowerRequestStatsCreate.c)
 *     PiDmLookupObject @ 0x1407C2814 (PiDmLookupObject.c)
 *     PiDqQueryIsObjectInResultSet @ 0x1407E21F4 (PiDqQueryIsObjectInResultSet.c)
 *     PiSwFindSwDevice @ 0x14086A40C (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x140944790 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F904 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 == GenericLessThan )
          break;
        if ( v6 != GenericGreaterThan )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
