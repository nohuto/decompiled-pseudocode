/*
 * XREFs of ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1C00127B0
 * Callers:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94 (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _scope_exit__lambda_341f87df47f96b7a26159caf2415beed____::_2_::scope_exit::_scope_exit @ 0x1C000BF80 (_scope_exit__lambda_341f87df47f96b7a26159caf2415beed____--_2_--scope_exit--_scope_exit.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(
        struct _KSFILTER_DESCRIPTOR *a1,
        const KSTOPOLOGY_CONNECTION *a2,
        unsigned int a3)
{
  int v4; // r8d
  PDEVICE_OBJECT *v5; // rdx
  bool v6; // bl
  char v8; // bl
  struct _LIST_ENTRY *Flink; // r8
  _QWORD *v10; // rdx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v13; // edx
  struct _LIST_ENTRY P; // [rsp+50h] [rbp-20h] BYREF
  struct _LIST_ENTRY *p_P; // [rsp+60h] [rbp-10h] BYREF
  char v16; // [rsp+68h] [rbp-8h]

  P.Blink = &P;
  P.Flink = &P;
  if ( (int)CSidebandDevice::GetNodesInPath(a1, a2, a3, &P) >= 0 )
  {
    v8 = 1;
    p_P = &P;
    v16 = 1;
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
      {
        scope_exit__lambda_341f87df47f96b7a26159caf2415beed____::_2_::scope_exit::_scope_exit((__int64)&p_P);
        return 1LL;
      }
      v10 = *(const GUID **)((char *)&a1->NodeDescriptors->Type + a1->NodeDescriptorSize * LODWORD(P.Flink[1].Flink));
      if ( (*v10 != *(_QWORD *)&GUID_507ae360_c554_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_507ae360_c554_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_4d837fe0_c555_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_4d837fe0_c555_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_9db7b9e0_c555_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_9db7b9e0_c555_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_e573adc0_c555_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_e573adc0_c555_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_2ceaf780_c556_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_2ceaf780_c556_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_da441a60_c556_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_da441a60_c556_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_2ceaf780_c556_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_2ceaf780_c556_11d0_8a2b_00a0c9255ac1.Data4)
        && (*v10 != *(_QWORD *)&GUID_e88c9ba0_c557_11d0_8a2b_00a0c9255ac1.Data1
         || v10[1] != *(_QWORD *)GUID_e88c9ba0_c557_11d0_8a2b_00a0c9255ac1.Data4) )
      {
        break;
      }
      v11 = P.Flink->Flink;
      if ( P.Flink->Flink->Blink != P.Flink || (Blink = P.Flink->Blink, Blink->Flink != P.Flink) )
        __fastfail(3u);
      Blink->Flink = v11;
      v11->Blink = Blink;
      ExFreePool(Flink);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = 65;
      LOBYTE(v13) = v8;
      LOBYTE(Flink) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        (_DWORD)Flink,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    scope_exit__lambda_341f87df47f96b7a26159caf2415beed____::_2_::scope_exit::_scope_exit((__int64)&p_P);
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = v6;
      LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v5,
        v4,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return 0LL;
}
