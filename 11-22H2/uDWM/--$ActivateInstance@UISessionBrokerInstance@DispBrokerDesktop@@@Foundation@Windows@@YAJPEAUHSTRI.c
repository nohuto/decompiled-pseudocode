/*
 * XREFs of ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x18004E424
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x18004DE7C (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(
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
    v4 = *(_QWORD *)&GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc,
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
