/*
 * XREFs of ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800018B0
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180004C90 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180004EF4 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006D550 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x18006D62C (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActClose(struct _AR_ACTIVITY *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  if ( *(struct _AR_ACTIVITY **)(v1 + 600) == a1 )
  {
    *(_QWORD *)(v1 + 600) = 0LL;
    v1 = *((_QWORD *)a1 + 2);
  }
  result = HamCloseActivity(*(_QWORD *)((*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *((_QWORD *)a1 + 1));
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 32) = 3;
    return 0LL;
  }
  return result;
}
