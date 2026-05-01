/*
 * XREFs of ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18004B698
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004AE94 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B5E8 (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180089A74 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerGetCpuSetInformation(struct _SYSTEM_CPU_SET_INFORMATION **a1, unsigned int *a2)
{
  struct _SYSTEM_CPU_SET_INFORMATION *Heap; // rbx
  int i; // eax
  int v6; // eax
  unsigned int v7; // edi
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Heap = 0LL;
  for ( i = 0; ; i = Size )
  {
    v10 = 0LL;
    v6 = NtQuerySystemInformationEx(175LL, &v10, 8LL, Heap, i, &Size);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = Size;
      *a1 = Heap;
      return v7;
    }
    if ( v6 != -1073741789 )
      break;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = (struct _SYSTEM_CPU_SET_INFORMATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
