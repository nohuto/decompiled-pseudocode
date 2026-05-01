/*
 * XREFs of ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180002858
 * Callers:
 *     ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x1800027A8 (-HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180073DF0 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x180002928 (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800220DC (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180024250 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmPopulateDefaultProperties(
        struct _HAM_ACTIVITY_PROPERTIES *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        char a3)
{
  __int64 result; // rax
  struct ExecutionModel::_ResourceSetInfo *v7; // r8
  __int64 v8; // rcx
  _BYTE v9[384]; // [rsp+20h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v9);
  result = HampSystemQueryPolicyInfo(
             a2,
             (const unsigned __int16 *)a1 + 70,
             (struct ExecutionModel::_ResourceSetInfo *)v9);
  if ( (int)result >= 0 )
  {
    ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
      (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a1 + 280),
      (struct _RM_RESOURCE_SET_PROPERTIES *)v9,
      v7);
    if ( (*(_BYTE *)(v8 + 40) & 0x10) != 0 && *(_QWORD *)(v8 + 80) < *(_QWORD *)(v8 + 64) )
    {
      return 3221225485LL;
    }
    else
    {
      HampRmPopulateExternalResourceAccessData(
        (struct ExecutionModel::_ResourceSetInfo *)v9,
        (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a1 + 384));
      if ( (v9[42] & 7) == 4 )
        *(_DWORD *)a1 |= 0x80000u;
      if ( (a3 & 1) == 0 )
        *(_DWORD *)a1 &= ~0x80000u;
      return 0LL;
    }
  }
  return result;
}
