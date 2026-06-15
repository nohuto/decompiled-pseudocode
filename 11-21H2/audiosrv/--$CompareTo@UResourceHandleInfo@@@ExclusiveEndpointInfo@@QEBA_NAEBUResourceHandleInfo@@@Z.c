/*
 * XREFs of ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x18010940C
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x18010A530 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x18010B2EC (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x18010DA8C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x18010DC40 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x18010DFF8 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
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
