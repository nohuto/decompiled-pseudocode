/*
 * XREFs of ??$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@1@@Z @ 0x18009BDEC
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18009D580 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_529814a0_b7b4_43d3_a819_132b7f63d656,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
