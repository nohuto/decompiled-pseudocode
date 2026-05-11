/*
 * XREFs of FilterCreateFilterFactory @ 0x1C0029ED4
 * Callers:
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019940 (memset.c)
 *     FilterCreateFilterPropertySets @ 0x1C002A068 (FilterCreateFilterPropertySets.c)
 *     FilterInitComponentId @ 0x1C002A1D8 (FilterInitComponentId.c)
 *     PinBuildDescriptors @ 0x1C002A4A4 (PinBuildDescriptors.c)
 *     TopologyBuildFilterTopology @ 0x1C002C258 (TopologyBuildFilterTopology.c)
 *     TopologyFreeFunctionUnits @ 0x1C002C880 (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall FilterCreateFilterFactory(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS FilterPropertySets; // ebx
  PKSFILTERFACTORY FilterFactory; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  FilterFactory = 0LL;
  *(_QWORD *)(v1 + 88) = v1 + 80;
  *(_QWORD *)(v1 + 80) = v1 + 80;
  FilterPropertySets = (*(__int64 (**)(void))(pExtBusDeviceDispatchTable + 56))();
  if ( FilterPropertySets >= 0 )
  {
    FilterPropertySets = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 64))(a1);
    if ( FilterPropertySets >= 0 )
    {
      memset((void *)(v1 + 128), 0, 0x68uLL);
      FilterPropertySets = TopologyBuildFilterTopology(a1, v1 + 128);
      if ( FilterPropertySets >= 0 )
      {
        FilterPropertySets = PinBuildDescriptors(a1, v1 + 168, v1 + 160, v1 + 164);
        if ( FilterPropertySets >= 0 )
        {
          *(_DWORD *)(v1 + 144) = -1;
          *(_DWORD *)(v1 + 148) = 0;
          *(_QWORD *)(v1 + 128) = FilterDispatch;
          *(_QWORD *)(v1 + 136) = v1 + 304;
          *(_QWORD *)(v1 + 152) = &KSNAME_Filter;
          *(_DWORD *)(v1 + 308) = 72;
          FilterPropertySets = FilterCreateFilterPropertySets(a1, v1 + 304, v1 + 312);
        }
      }
    }
  }
  TopologyFreeFunctionUnits(a1);
  if ( FilterPropertySets >= 0 )
  {
    FilterPropertySets = FilterInitComponentId(a1, v1 + 232);
    if ( FilterPropertySets >= 0 )
    {
      *(_QWORD *)(v1 + 224) = v1 + 232;
      if ( !*(_DWORD *)(v1 + 860) || *(_DWORD *)(v1 + 1000) )
      {
        FilterPropertySets = KsCreateFilterFactory(
                               *(PDEVICE_OBJECT *)(a1 + 24),
                               (const KSFILTER_DESCRIPTOR *)(v1 + 128),
                               (PWSTR)L"GLOBAL",
                               0LL,
                               8u,
                               0LL,
                               0LL,
                               &FilterFactory);
        if ( FilterPropertySets >= 0 )
          *(_QWORD *)(v1 + 120) = FilterFactory;
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  }
  return (unsigned int)FilterPropertySets;
}
