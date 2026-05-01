/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008BEEC
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008C580 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180084DB8 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18008C044 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v3; // rax
  int IsGpuInterfering; // edi
  __int64 v5; // rax
  unsigned __int8 v7[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  if ( (*((_BYTE *)a1 + 1264) & 1) != 0 )
  {
    if ( !a2 )
    {
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      {
        v3 = *((_QWORD *)a1 + 4);
        v12 = 0;
        v8 = v3;
        v11 = 8;
        v10 = &v8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DB1E0,
          (unsigned __int8 *)dword_1800C592F,
          0LL,
          0LL,
          3u,
          &v9);
      }
      *((_DWORD *)a1 + 316) &= ~1u;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v7);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v7[0] )
    {
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      {
        v5 = *((_QWORD *)a1 + 4);
        v12 = 0;
        v8 = v5;
        v11 = 8;
        v10 = &v8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DB1E0,
          (unsigned __int8 *)dword_1800C5822,
          0LL,
          0LL,
          3u,
          &v9);
      }
      *((_DWORD *)a1 + 316) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1);
  return (unsigned int)IsGpuInterfering;
}
