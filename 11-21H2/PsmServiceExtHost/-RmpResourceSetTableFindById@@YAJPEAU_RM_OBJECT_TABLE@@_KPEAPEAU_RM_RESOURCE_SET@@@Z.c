/*
 * XREFs of ?RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z @ 0x180088098
 * Callers:
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x1800833D8 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800046C4 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmpResourceSetTableFindById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_SET **a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RM_OBJECT_HEADER *v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  result = RmpObjectTableFindObjectByHandle(a1, &v5, &v6);
  if ( (int)result >= 0 )
  {
    *a3 = v6;
    return 0LL;
  }
  return result;
}
