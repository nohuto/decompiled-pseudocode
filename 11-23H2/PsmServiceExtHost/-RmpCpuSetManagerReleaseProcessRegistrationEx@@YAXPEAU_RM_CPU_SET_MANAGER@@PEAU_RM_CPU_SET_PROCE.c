/*
 * XREFs of ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800878A0
 * Callers:
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180083710 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180083A88 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180087540 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087744 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800877E8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089730 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089F30 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18002ABC0 (-RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004626C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180086D64 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 */

void __fastcall RmpCpuSetManagerReleaseProcessRegistrationEx(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2,
        char a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  RmpCpuSetManagerInvalidateProcessRegistration(a1, a2);
  v6 = (_OWORD *)((char *)a2 + 72);
  v7 = *((_QWORD *)a2 + 9);
  if ( *(struct _RM_CPU_SET_PROCESS_REGISTRATION **)(v7 + 8) != (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a2 + 72)
    || (v8 = (_QWORD *)*((_QWORD *)a2 + 10), (_OWORD *)*v8 != v6) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = 0LL;
  RmpObjectRelease(a2);
  RmpObjectTableRemoveObject((struct _RM_CPU_SET_MANAGER *)((char *)a1 + 48), a2);
  RmpObjectRelease(a2);
  if ( (a3 & 1) != 0 )
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
}
