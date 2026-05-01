/*
 * XREFs of ?RmpProcContextInitialize@@YAXP6A?AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x1800134A4
 * Callers:
 *     RmConnectProcessManager @ 0x18001B590 (RmConnectProcessManager.c)
 * Callees:
 *     memset_0 @ 0x18001570E (memset_0.c)
 *     CempLockInitialize @ 0x18001E678 (CempLockInitialize.c)
 */

void __fastcall RmpProcContextInitialize(
        enum _RM_PROC_CALLBACK_RESULT (__high *a1)(void *, enum _RM_PROC_REQUEST, unsigned int),
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a2)
{
  memset_0(a2, 0, 0x70uLL);
  RtlInitializeSRWLock((char *)a2 + 16);
  RtlInitializeConditionVariable((char *)a2 + 32);
  *((_QWORD *)a2 + 3) = RmpProcContextEntryDestroy;
  CempLockInitialize((char *)a2 + 48);
  *((_QWORD *)a2 + 13) = a1;
  *((_QWORD *)a2 + 11) = (char *)a2 + 80;
  *((_QWORD *)a2 + 10) = (char *)a2 + 80;
}
