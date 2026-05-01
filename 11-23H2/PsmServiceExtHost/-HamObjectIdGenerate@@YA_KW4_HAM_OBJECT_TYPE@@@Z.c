/*
 * XREFs of ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180015A28
 * Callers:
 *     ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18001448C (-HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180015978 (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180015AD4 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18004EB0C (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?HamSrvCreateSingleUseHostId@@YAXPEA_K@Z @ 0x180071D50 (-HamSrvCreateSingleUseHostId@@YAXPEA_K@Z.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800867C4 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800868A0 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HamObjectIdGenerate(int a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rcx

  v1 = a1;
  v2 = _InterlockedIncrement64((volatile signed __int64 *)&(&HampNextHandleValues)[a1]);
  if ( (v2 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  return v2 | (v1 << 57) | 0x1000000000000000LL;
}
