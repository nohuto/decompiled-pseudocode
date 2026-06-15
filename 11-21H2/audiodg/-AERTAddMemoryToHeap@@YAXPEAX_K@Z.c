/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350
 * Callers:
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000C8A0 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D80 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838 (-Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x14002D1F0 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140002CB4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( (unsigned int)((__int64 (*)(void))RtlExtendMemoryBlockLookaside)() == -1073741663
    && (int)IncreaseProcessWorkingSet(a2) >= 0 )
  {
    RtlExtendMemoryBlockLookaside(a1, a2);
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v6, 5, (char)a1, a2, 0, 0);
}
