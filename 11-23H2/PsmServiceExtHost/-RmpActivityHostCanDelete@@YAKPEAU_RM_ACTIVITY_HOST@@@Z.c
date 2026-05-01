/*
 * XREFs of ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C840
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmpActivityHostCanDelete(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // rbx
  _BOOL8 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( *((int *)a1 + 6) >= 0 && !(*((_DWORD *)a1 + 294) + *((_DWORD *)a1 + 288)) && !*((_QWORD *)a1 + 83) )
  {
    v1 = (char *)a1 + 64;
    RmHamHostGetCurrentState(
      (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v4,
      (union _RM_OPTIMIZATION_STATE *)&v3);
    if ( !v3 && (v4 & 0x80u) != 0 && (v4 & 0x100) != 0 && (v1[672] & 2) == 0 && !*((_QWORD *)v1 + 132) )
      return 1;
  }
  return result;
}
