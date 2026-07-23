/*
 * XREFs of sub_1403D99B4 @ 0x1403D99B4
 * Callers:
 *     sub_140259288 @ 0x140259288 (sub_140259288.c)
 *     sub_1402A3EAC @ 0x1402A3EAC (sub_1402A3EAC.c)
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     sub_1402A7720 @ 0x1402A7720 (sub_1402A7720.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     IoInvalidateDeviceState @ 0x1402DCE00 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     sub_1402DDEC0 @ 0x1402DDEC0 (sub_1402DDEC0.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     sub_1403EBAC8 @ 0x1403EBAC8 (sub_1403EBAC8.c)
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 *     sub_14054B350 @ 0x14054B350 (sub_14054B350.c)
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_14055C354 @ 0x14055C354 (sub_14055C354.c)
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055C600 @ 0x14055C600 (sub_14055C600.c)
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055CB14 @ 0x14055CB14 (sub_14055CB14.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_1405623A0 @ 0x1405623A0 (sub_1405623A0.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_1405680F4 @ 0x1405680F4 (sub_1405680F4.c)
 *     sub_14057958C @ 0x14057958C (sub_14057958C.c)
 *     sub_140592BEC @ 0x140592BEC (sub_140592BEC.c)
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_1405C6710 @ 0x1405C6710 (sub_1405C6710.c)
 *     sub_1405C68A8 @ 0x1405C68A8 (sub_1405C68A8.c)
 *     sub_140643AFC @ 0x140643AFC (sub_140643AFC.c)
 *     sub_1407491AC @ 0x1407491AC (sub_1407491AC.c)
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     sub_140749848 @ 0x140749848 (sub_140749848.c)
 *     sub_1407498EC @ 0x1407498EC (sub_1407498EC.c)
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x14080D9D0 (IoSetDevicePropertyData.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 *     sub_14080E030 @ 0x14080E030 (sub_14080E030.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     IoGetDmaAdapter @ 0x1408462A0 (IoGetDmaAdapter.c)
 *     sub_140846398 @ 0x140846398 (sub_140846398.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409407A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140940A60 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     sub_140941244 @ 0x140941244 (sub_140941244.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 *     IoAssignResources @ 0x140941E70 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140942160 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140944D50 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140944F40 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x140945420 (IoRequestDeviceRemovalForReset.c)
 *     sub_140945654 @ 0x140945654 (sub_140945654.c)
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140956608 @ 0x140956608 (sub_140956608.c)
 *     sub_1409568C8 @ 0x1409568C8 (sub_1409568C8.c)
 *     sub_140956BF8 @ 0x140956BF8 (sub_140956BF8.c)
 *     sub_140956ED0 @ 0x140956ED0 (sub_140956ED0.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B29088 @ 0x140B29088 (sub_140B29088.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     sub_1403D9A34 @ 0x1403D9A34 (sub_1403D9A34.c)
 */

char __fastcall sub_1403D99B4(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-10h]

  v7[0] = dword_140C47500;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = qword_140C47520;
  v4 = sub_1403D9A34(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  dword_140C47500 = v7[0];
  if ( KtriageDumpDataArray )
    KeAddTriageDumpDataBlock(KtriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
