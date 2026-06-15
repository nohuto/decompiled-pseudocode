/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14007AB54
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x1400170B0 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140025B70 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14007AFE4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B164 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, unsigned __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( (unsigned int)((__int64 (*)(void))RtlExtendMemoryBlockLookaside)() == -1073741663
    && (int)IncreaseProcessWorkingSet(a2) >= 0 )
  {
    RtlExtendMemoryBlockLookaside(a1, a2);
  }
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v6, 5, (char)a1, a2, 0, 0);
}
