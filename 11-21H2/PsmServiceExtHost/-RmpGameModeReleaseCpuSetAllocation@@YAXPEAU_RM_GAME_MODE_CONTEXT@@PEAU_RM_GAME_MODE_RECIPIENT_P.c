/*
 * XREFs of ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008BAF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089E04 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

void __fastcall RmpGameModeReleaseCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF

  RmpAcquireGlobalLock();
  RmpCpuSetManagerReleaseAllocation(*((_QWORD **)a1 + 15), v3, v4, v5);
  RmpReleaseGlobalLock();
  *((_QWORD *)a1 + 15) = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800C43BD, 0LL, 0LL, 2u, &v7);
  }
}
