/*
 * XREFs of ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003E8F8
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18003E75C (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x18004C7AC (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008863C (-RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemDuplicateHandle(HANDLE SourceHandle, ACCESS_MASK DesiredAccess, PHANDLE TargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax

  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  return NtDuplicateObject(v7, SourceHandle, CurrentProcess, TargetHandle, DesiredAccess, 0, DesiredAccess == 0 ? 2 : 0);
}
