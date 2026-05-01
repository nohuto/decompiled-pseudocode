/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180091FAC
 * Callers:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180045060 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180087AA0 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004510C (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rdi
  _OWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 64);
  if ( (*((_BYTE *)a2 + 852) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 83) |= 0x4000000000000uLL;
    HampHostCheckQueueStateWorker(v2, 0);
    HampHostReleaseLockExclusiveEx(v2);
  }
  else
  {
    *((_DWORD *)a2 + 314) |= 2u;
    RmpQoSSetForHost(a1, a2, 0);
  }
  v4 = (_OWORD *)((char *)a2 + 1272);
  v5 = *((_QWORD *)a2 + 159);
  if ( *(struct _RM_ACTIVITY_HOST **)(v5 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1272)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 160), (_OWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  RmpObjectRelease((char *)a2);
}
