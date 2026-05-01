/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18004049C
 * Callers:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000C110 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800329D4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040A50 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180040574 (-RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  void **v5; // rsi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v2 = (void *)*((_QWORD *)a1 + 12);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)((char *)a1 + 48);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  RmpPolicyReleaseScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 160));
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v8 = *((_QWORD *)a1 + 29);
    v13 = 0;
    v9 = v8;
    v12 = 8;
    v11 = &v9;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_1800C47D3, 0LL, 0LL, 3u, &v10);
  }
}
