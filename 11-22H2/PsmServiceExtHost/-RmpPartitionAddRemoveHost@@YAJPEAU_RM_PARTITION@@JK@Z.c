/*
 * XREFs of ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x1800381EC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF60 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180038220 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 */

__int64 __fastcall RmpPartitionAddRemoveHost(struct _RM_PARTITION *a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  *((_DWORD *)a1 + 52) += a2;
  result = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 160), *((_DWORD *)a1 + 52), a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
