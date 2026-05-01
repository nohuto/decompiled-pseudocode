/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E04C
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002DFA8 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  struct _HAM_ACTIVITY *NextActivity; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v6, (union _RM_OPTIMIZATION_STATE *)&v7);
  v2 = *((_QWORD *)a1 + 83);
  if ( ((v2 >> 16) & 3) == 0 )
    return 0LL;
  if ( ((v2 >> 16) & 3) == 1 )
  {
    if ( v6 < 0 && v7 >= 0 && (v2 & 0x40000000000LL) == 0 )
    {
      v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
      if ( v3 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
      {
        NextActivity = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v3 - 96);
        if ( NextActivity )
        {
          while ( 1 )
          {
            if ( (*((_BYTE *)NextActivity + 552) & 0x48) == 0 )
            {
              LOBYTE(v2) = 5;
              if ( (unsigned int)HampActIsStartedOrReachedPendState(NextActivity, v2) )
              {
                if ( (*((_DWORD *)NextActivity + 28) & 0x2000) != 0 )
                  break;
              }
            }
            NextActivity = HampHostGetNextActivity(NextActivity);
            if ( !NextActivity )
              return 1LL;
          }
          return 0LL;
        }
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( ((v2 >> 16) & 3) != 2 )
    return ((v2 >> 16) & 3) == 3;
  return (v2 & 0x8000000000000LL) == 0;
}
