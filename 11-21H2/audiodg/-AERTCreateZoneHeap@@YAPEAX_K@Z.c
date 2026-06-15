/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001F1C8
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x14001EB20 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossPr.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140088AB0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x140093CD4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140094BE0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTCreateZoneHeap(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = a1;
  RtlCreateMemoryZone(&v6, a1, 0LL);
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v3, v2, v4, 3, v6, v1, 0, 0);
  return v6;
}
