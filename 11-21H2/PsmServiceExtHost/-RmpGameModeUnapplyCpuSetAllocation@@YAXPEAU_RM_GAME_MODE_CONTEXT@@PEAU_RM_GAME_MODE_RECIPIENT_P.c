/*
 * XREFs of ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C5E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18004B4D8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180089F60 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180093900 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = *((_DWORD *)a2 + 35);
  if ( (v2 & 0x10) != 0 )
  {
    RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 0);
    v2 = *((_DWORD *)a2 + 35);
  }
  if ( (v2 & 4) != 0 )
    RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
  RmpAcquireGlobalLock();
  RmpCpuSetManagerReleaseProcessRegistrationEx(
    (struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL),
    *((struct _RM_CPU_SET_PROCESS_REGISTRATION **)a2 + 19),
    1);
  RmpReleaseGlobalLock();
  *((_QWORD *)a2 + 19) = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      v6 = *((_DWORD *)a2 + 27);
      v11 = 0;
      v7 = v6;
      v10 = 4;
      v9 = &v7;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C41EA, 0LL, 0LL, 3u, &v8);
    }
  }
}
