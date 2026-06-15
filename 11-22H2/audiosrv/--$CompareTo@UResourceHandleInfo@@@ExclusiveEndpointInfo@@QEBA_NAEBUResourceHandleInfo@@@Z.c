/*
 * XREFs of ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800FE1B0
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFC18 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101E9C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x180102050 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x180102408 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

bool __fastcall ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  _WORD *v4; // rdi
  bool result; // al

  v4 = a2;
  result = (!*(_WORD *)a1 || (a2 += 148, !*a2) || !(unsigned int)_o__wcsicmp(a1, a2))
        && SimpleWildcardStringCompare((const unsigned __int16 *const)(a1 + 402), (unsigned __int64)a2, v4 + 349, a4)
        && *(_DWORD *)(a1 + 924) == *((_DWORD *)v4 + 305);
  return result;
}
