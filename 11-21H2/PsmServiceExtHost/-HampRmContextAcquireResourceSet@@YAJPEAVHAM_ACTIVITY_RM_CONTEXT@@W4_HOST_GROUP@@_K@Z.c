/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HOST_GROUP@@_K@Z @ 0x180020D64
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180009DAC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180020E90 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(__int64 a1, char a2, __int64 a3)
{
  struct ExecutionModel::_ResourceSetInfo *v6; // r8
  void *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 result; // rax
  _BYTE v11[16]; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v12[104]; // [rsp+80h] [rbp-198h] BYREF
  int v13; // [rsp+E8h] [rbp-130h]
  __int64 v14; // [rsp+F0h] [rbp-128h]
  int v15; // [rsp+1F4h] [rbp-24h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v12);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(*(_QWORD *)(a1 + 8) + 112LL),
    (struct _HAM_ACTIVITY_PROPERTIES *)v12,
    v6);
  v15 &= ~0x40000u;
  v13 = 1;
  v14 = a3;
  v7 = (void *)HamObjectIdGenerate(1);
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v7;
  v9 = RmSrvAcquireResourceSet(
         (__int64)RmSvcGlobals,
         (struct ExecutionModel::_ResourceSetInfo *)v12,
         a1,
         (__int64)v7,
         (wchar_t *)(*(_QWORD *)(v8 + 80) + 24LL),
         (PSID)(*(_QWORD *)(v8 + 80) + 488LL),
         *(_DWORD *)(*(_QWORD *)(v8 + 80) + 556LL),
         *(_DWORD *)(*(_QWORD *)(v8 + 80) + 560LL),
         *(_QWORD *)(*(_QWORD *)(v8 + 80) + 568LL),
         0,
         a2,
         v7,
         0LL,
         v11);
  if ( v9 >= 0 )
    return 0LL;
  result = v9 | 0xC0000000;
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
