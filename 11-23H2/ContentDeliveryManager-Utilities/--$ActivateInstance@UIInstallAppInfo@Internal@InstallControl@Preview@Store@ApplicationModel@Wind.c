/*
 * XREFs of ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@1@@Z @ 0x180079F14
 * Callers:
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18007F2F4 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
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
    v4 = *(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
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
