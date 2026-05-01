/*
 * XREFs of ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B784
 * Callers:
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005DD4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000C220 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C06C (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18005512A (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F64C (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007000C (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B998 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DB50 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18007FAF8 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D70C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007B038 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampActRequestStopEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        __int16 a5,
        unsigned int a6,
        struct _HAM_CLIENT_CONTEXT *a7)
{
  unsigned int v10; // esi
  int Pid; // r14d
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // ebx
  char v17; // [rsp+38h] [rbp-51h] BYREF
  char v18; // [rsp+39h] [rbp-50h] BYREF
  int v19; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-21h]
  int v23; // [rsp+70h] [rbp-19h]
  int v24; // [rsp+74h] [rbp-15h]
  int *v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+84h] [rbp-5h]
  char *v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+94h] [rbp+Bh]
  char *v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+A0h] [rbp+17h]
  int v33; // [rsp+A4h] [rbp+1Bh]

  v10 = a2;
  if ( a7 )
    Pid = HampClientGetPid(a7, a2);
  else
    Pid = 0;
  if ( a6 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a6);
  if ( ((*(_DWORD *)(a1 + 552) >> 8) & 3u) < v10 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    {
      v14 = *(_QWORD *)(a1 + 40);
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v20 = v14;
      v31 = &v17;
      v28 = &v18;
      v25 = &v19;
      v22 = &v20;
      v23 = v13;
      v17 = a3;
      v18 = v10;
      v19 = Pid;
      v32 = 1;
      v29 = 1;
      v26 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB218,
        (unsigned __int8 *)dword_1800C2176,
        0LL,
        0LL,
        6u,
        &v21);
    }
    v15 = *(_DWORD *)(a1 + 552) & 0xFFFFC0FF;
    *(_DWORD *)(a1 + 556) = a4;
    v16 = v15 | ((v10 & 3 | (4 * (a3 & 0xF))) << 8);
    *(_WORD *)(a1 + 560) = a5;
    *(_DWORD *)(a1 + 552) = v16;
    if ( (v16 & 1) == 0 )
      HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1, 0);
  }
  else if ( (unsigned int)dword_1800DB218 > 5 )
  {
    v12 = *(_QWORD *)(a1 + 40);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v20 = v12;
    v28 = &v17;
    v25 = &v19;
    v22 = &v20;
    v17 = v10;
    v19 = Pid;
    v29 = 1;
    v26 = 4;
    v23 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C203E,
      0LL,
      0LL,
      5u,
      &v21);
  }
}
