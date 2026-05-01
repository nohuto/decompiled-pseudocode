/*
 * XREFs of ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C8C
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostStartProcessPresenceChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)a1 + 83); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 83) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 696, 0LL);
  *((_QWORD *)a1 + 83) = i | 0x1000000000000LL;
}
