/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18004EACC
 * Callers:
 *     ?HampRmContextStartActivityAsync@@YAJPEAX_K@Z @ 0x18004EBA0 (-HampRmContextStartActivityAsync@@YAJPEAX_K@Z.c)
 * Callees:
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18000B820 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18001199C (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180014CA0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180015A28 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DFB0 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18004FC50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(struct HAM_ACTIVITY_RM_CONTEXT *a1, __int64 a2)
{
  __int64 v4; // rdi
  struct ExecutionModel::_ResourceSetInfo *v5; // r8
  int v6; // edx
  struct _RM_ACTIVITY_HOST *v7; // rax
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 result; // rax
  _BYTE v11[372]; // [rsp+30h] [rbp-198h] BYREF
  int v12; // [rsp+1A4h] [rbp-24h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v11);
  v4 = *((_QWORD *)a1 + 1);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(v4 + 112),
    (struct _HAM_ACTIVITY_PROPERTIES *)v11,
    v5);
  ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v11, 1, a2);
  v12 &= ~0x40000u;
  *((_QWORD *)a1 + 2) = HamObjectIdGenerate(v6);
  v7 = RmHostFromHamHost(*(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 80));
  v9 = RmSrvAcquireResourceSet(RmSvcGlobals, (struct ExecutionModel::_ResourceSetInfo *)v11, a1, v7, v8);
  if ( v9 >= 0 )
    return 0LL;
  result = v9 | 0xC0000000;
  *((_QWORD *)a1 + 2) = -1LL;
  return result;
}
