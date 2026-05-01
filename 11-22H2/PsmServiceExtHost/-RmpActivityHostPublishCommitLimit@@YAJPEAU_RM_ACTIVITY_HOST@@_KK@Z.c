/*
 * XREFs of ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180005670
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000544C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180005C14 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 */

__int64 __fastcall RmpActivityHostPublishCommitLimit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // r8
  __int64 result; // rax

  v5 = *((_QWORD *)a1 + 174);
  if ( a2 == v5 && (a3 & 1) == 0 )
    return 0LL;
  result = ExecutionModel::ResourceManager::CommitMemoryLimitChange(
             *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 6) + 3536LL),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             v5,
             a2,
             *((_QWORD *)a1 + 118));
  if ( (int)result >= 0 )
    *((_QWORD *)a1 + 174) = a2;
  return result;
}
