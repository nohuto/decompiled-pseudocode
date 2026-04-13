/*
 * XREFs of ??$ActivateInstance@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAppServiceConnection@AppService@ApplicationModel@1@@Z @ 0x18004BF44
 * Callers:
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004C09C (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::ApplicationModel::AppService::IAppServiceConnection>(
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
    v4 = *(_QWORD *)&GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_9dd474a2_871f_4d52_89a9_9e090531bd27,
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
