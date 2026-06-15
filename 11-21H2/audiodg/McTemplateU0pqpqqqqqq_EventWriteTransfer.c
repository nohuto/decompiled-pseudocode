/*
 * XREFs of McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC
 * Callers:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140002CB4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140002DE8 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140002E50 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140005974 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x1400059F4 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x140010660 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D80 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838 (-Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001F1C8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1400221FC (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14002223C (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140023170 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x140024770 (--_ECPrivateAPO@@UEAAPEAXI@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x14002D1F0 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x14002D3A0 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x14002D5E0 (-AERTUnlockCurrentThread@@YAJXZ.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14006E3E4 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14006E478 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14006E4F8 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14006E568 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pqpqqqqqq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v13; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-81h]
  __int64 v16; // [rsp+58h] [rbp-79h]
  int *v17; // [rsp+60h] [rbp-71h]
  __int64 v18; // [rsp+68h] [rbp-69h]
  char *v19; // [rsp+70h] [rbp-61h]
  __int64 v20; // [rsp+78h] [rbp-59h]
  char *v21; // [rsp+80h] [rbp-51h]
  __int64 v22; // [rsp+88h] [rbp-49h]
  char *v23; // [rsp+90h] [rbp-41h]
  __int64 v24; // [rsp+98h] [rbp-39h]
  char *v25; // [rsp+A0h] [rbp-31h]
  __int64 v26; // [rsp+A8h] [rbp-29h]
  int *v27; // [rsp+B0h] [rbp-21h]
  __int64 v28; // [rsp+B8h] [rbp-19h]
  char *v29; // [rsp+C0h] [rbp-11h]
  __int64 v30; // [rsp+C8h] [rbp-9h]
  char *v31; // [rsp+D0h] [rbp-1h]
  __int64 v32; // [rsp+D8h] [rbp+7h]
  int v33; // [rsp+118h] [rbp+47h] BYREF

  v33 = a4;
  v16 = 8LL;
  v12 = 0;
  v15 = &v13;
  v13 = 0LL;
  v17 = &v33;
  v18 = 4LL;
  v19 = &a5;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &v12;
  v29 = &a10;
  v31 = &a11;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEMemory, 0LL, 0xAu, &v14);
}
