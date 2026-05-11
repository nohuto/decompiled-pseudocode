/*
 * XREFs of FilterCreateFilterContext @ 0x1C002BCD4
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AF80 (memset.c)
 *     FilterCreateFilterPropertySets @ 0x1C002BEAC (FilterCreateFilterPropertySets.c)
 *     TopologyBuildFilterTopology @ 0x1C002C7F0 (TopologyBuildFilterTopology.c)
 *     TopologyFreeFunctionUnits @ 0x1C002CE9C (TopologyFreeFunctionUnits.c)
 *     PinBuildDescriptors @ 0x1C003BE74 (PinBuildDescriptors.c)
 */

__int64 __fastcall FilterCreateFilterContext(__int64 a1, char *a2)
{
  _QWORD *v2; // rax
  _QWORD *v5; // rbp
  int FilterPropertySets; // ebx

  v2 = *(_QWORD **)(a1 + 16);
  v5 = v2 + 38;
  v2 += 10;
  v2[1] = v2;
  *v2 = v2;
  FilterPropertySets = (*(__int64 (**)(void))(pExtBusDeviceDispatchTable + 56))();
  if ( FilterPropertySets >= 0 )
  {
    FilterPropertySets = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 64))(a1);
    if ( FilterPropertySets >= 0 )
    {
      memset(a2, 0, 0x68uLL);
      FilterPropertySets = TopologyBuildFilterTopology(a1, a2);
      if ( FilterPropertySets >= 0 )
      {
        FilterPropertySets = PinBuildDescriptors(a1, a2 + 40, a2 + 32, a2 + 36);
        if ( FilterPropertySets >= 0 )
        {
          *((_DWORD *)a2 + 4) = -1;
          *((_DWORD *)a2 + 5) = 0;
          *(_QWORD *)a2 = FilterDispatch;
          *((_QWORD *)a2 + 1) = v5;
          *((_QWORD *)a2 + 3) = &KSNAME_Filter;
          *((_DWORD *)v5 + 1) = 72;
          FilterPropertySets = FilterCreateFilterPropertySets(a1, v5, v5 + 1);
        }
      }
    }
  }
  TopologyFreeFunctionUnits(a1);
  if ( FilterPropertySets < 0 )
    (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  return (unsigned int)FilterPropertySets;
}
