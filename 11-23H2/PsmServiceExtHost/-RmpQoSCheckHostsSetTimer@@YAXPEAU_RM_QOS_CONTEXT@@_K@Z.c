/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x18003E240
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DE3C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E070 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800511D8 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x18008D5C8 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2)
{
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // r9
  char *v8; // rsi
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]

  if ( *(struct _RM_QOS_CONTEXT **)a1 != a1 )
  {
    v4 = (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)(*(_QWORD *)a1 - 88LL);
    if ( *(_QWORD *)a1 != 88LL )
    {
      do
      {
        if ( *((_QWORD *)v4 + 15) > a2 )
          break;
        v8 = (char *)v4 - 1192;
        if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 25LL) )
        {
          v9 = *((_QWORD *)v8 + 4);
          v13 = 8LL;
          v12 = &v9;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DB1E0,
            (unsigned __int8 *)dword_1800C640E,
            0LL,
            0LL,
            3u,
            &v11);
        }
        RmpQoSDisableForHostOnTimerExpiry((struct _RM_ACTIVITY_HOST *)v8);
        v4 = RmpQoSGetEarliestHostInfo(a1);
      }
      while ( v4 );
    }
  }
  v5 = *(_QWORD *)a1;
  if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 || v5 == 88 )
  {
    v7 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v6 = &v10;
    v7 = *((unsigned int *)a1 + 7);
    v10 = *(_QWORD *)(v5 + 32);
  }
  TpSetTimer(*((_QWORD *)a1 + 2), v6, 0LL, v7);
}
