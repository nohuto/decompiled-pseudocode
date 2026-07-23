/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14022D020
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     PiDcHandleDeviceEvent @ 0x140787510 (PiDcHandleDeviceEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x140798554 (PiSwFindBusRelations.c)
 *     PopPowerRequestTableLookupEntry @ 0x1407A6EE0 (PopPowerRequestTableLookupEntry.c)
 *     PopPowerRequestStatsCreate @ 0x1407A79CC (PopPowerRequestStatsCreate.c)
 *     PiDmLookupObject @ 0x1407C2554 (PiDmLookupObject.c)
 *     PiDqQueryIsObjectInResultSet @ 0x1407E1F44 (PiDqQueryIsObjectInResultSet.c)
 *     PiSwFindSwDevice @ 0x14086A17C (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409448E0 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099FA54 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
