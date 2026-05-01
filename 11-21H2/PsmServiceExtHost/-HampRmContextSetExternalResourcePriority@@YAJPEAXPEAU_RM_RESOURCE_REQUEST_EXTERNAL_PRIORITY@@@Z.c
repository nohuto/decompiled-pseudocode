/*
 * XREFs of ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800820B8
 * Callers:
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180078078 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180086584 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampRmContextSetExternalResourcePriority(
        _QWORD *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  int v2; // eax
  int v3; // eax
  unsigned __int64 v4; // rdx
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v2 = *(unsigned __int8 *)a2;
  v7 = 0LL;
  LODWORD(v7) = v2;
  v3 = *((unsigned __int8 *)a2 + 1);
  v4 = a1[2];
  LODWORD(v8) = v3;
  v5 = RmSrvResourceSetExternalResourcePriorities(RmSvcGlobals, v4, 1u, (struct ExecutionModel::_ResourceInfo *)&v7);
  if ( v5 >= 0 )
    return 0LL;
  else
    return v5 | 0xC0000000;
}
