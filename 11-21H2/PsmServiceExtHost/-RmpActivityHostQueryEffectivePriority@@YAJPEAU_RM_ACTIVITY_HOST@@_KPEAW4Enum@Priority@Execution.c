/*
 * XREFs of ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x1800517E0
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800871F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180087598 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180083D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180087118 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int64 v8; // rcx
  int v9; // eax
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v11; // r8
  struct ExecutionModel::ResourceSet *v12; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[1] = 2LL;
  v5 = 101;
  v6 = 0;
  v14[0] = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v14);
    v12 = Next;
    if ( !Next )
      break;
    v8 = *(_QWORD *)(*((_QWORD *)Next + 165) + 1360LL);
    if ( a2 > v8 )
      v9 = *((_DWORD *)Next + 323);
    else
      v9 = *((_DWORD *)Next + 322);
    if ( v5 >= v9 )
    {
      if ( a2 > v8 )
        v5 = *((_DWORD *)v12 + 323);
      else
        v5 = *((_DWORD *)v12 + 322);
    }
  }
  if ( (*((_BYTE *)a1 + 852) & 1) != 0 )
  {
    if ( v5 >= 80 )
      v5 = 80;
  }
  else if ( (int)RmpEmPriorityCompare((unsigned int)v5, 100LL, v11) < 0 )
  {
    return (unsigned int)-1073740759;
  }
  *(_DWORD *)a3 = v5;
  return v6;
}
