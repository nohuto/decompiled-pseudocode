/*
 * XREFs of ??$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIGeographicRegion@Globalization@1@@Z @ 0x18002452C
 * Callers:
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x1800381FC (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Globalization::IGeographicRegion>(
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
    v4 = *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
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
