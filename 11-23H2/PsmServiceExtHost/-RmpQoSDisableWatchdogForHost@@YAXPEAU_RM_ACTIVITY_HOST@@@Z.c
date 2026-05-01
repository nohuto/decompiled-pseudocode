/*
 * XREFs of ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008D590
 * Callers:
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800511D8 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpQoSDisableWatchdogForHost(struct _RM_ACTIVITY_HOST *a1)
{
  _OWORD *v1; // rax
  __int64 v2; // r8
  _QWORD *v3; // rdx

  v1 = (_OWORD *)((char *)a1 + 1280);
  v2 = *((_QWORD *)a1 + 160);
  if ( *(struct _RM_ACTIVITY_HOST **)(v2 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1280)
    || (v3 = (_QWORD *)*((_QWORD *)a1 + 161), (_OWORD *)*v3 != v1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *v1 = 0LL;
  RmpObjectRelease(a1);
}
