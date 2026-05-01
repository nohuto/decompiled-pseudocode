/*
 * XREFs of ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180044DC0
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180045060 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004510C (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180045270 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmpQoSEnableDisableForHost(struct _RM_ACTIVITY_HOST *P, unsigned int a2)
{
  struct _RM_QOS_CONTEXT *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RM_QOS_CONTEXT *)(*((_QWORD *)P + 6) + 176LL);
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = RmpQoSSetForHost(v3, P, a2);
  v6 = v5;
  if ( !a2 )
  {
    if ( !(unsigned int)CempListEntryIsNull((_QWORD *)P + 159) )
    {
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_OWORD *)v8 = 0LL;
      RmpObjectRelease((char *)P);
    }
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    RmpQoSEnableWatchdogForHost(v3, P, v11);
LABEL_4:
    RmpQoSCheckHostsSetTimer(v3, v11);
  }
  return v6;
}
