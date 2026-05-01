/*
 * XREFs of ?RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x1800405F4
 * Callers:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18004051C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPolicyReleaseScratchBuffers(PVOID *a1)
{
  PVOID v2; // r8
  PVOID v3; // r8

  if ( *a1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a1);
    *a1 = 0LL;
  }
  v2 = a1[1];
  if ( v2 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    a1[1] = 0LL;
  }
  v3 = a1[3];
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  *((_DWORD *)a1 + 8) = 0;
}
