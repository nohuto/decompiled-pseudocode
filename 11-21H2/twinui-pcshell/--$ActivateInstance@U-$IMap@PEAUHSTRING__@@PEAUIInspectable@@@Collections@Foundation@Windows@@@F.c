/*
 * XREFs of ??$ActivateInstance@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@01@@Z @ 0x180492064
 * Callers:
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1804925BC (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
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
    v4 = *(_QWORD *)&GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
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
