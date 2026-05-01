/*
 * XREFs of ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077D24
 * Callers:
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180036CE0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003D0C4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x1800515F2 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075B14 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077CF4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077F3C (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A184 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007A998 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EC30 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180082110 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007753C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActRequestStopEx(
        __int64 a1,
        unsigned int a2,
        char a3,
        int a4,
        __int16 a5,
        unsigned int a6,
        __int64 a7)
{
  int v11; // r14d
  unsigned int v12; // r9d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // ebx
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

  if ( a7 )
    v11 = *(_DWORD *)(a7 + 140);
  else
    v11 = 0;
  if ( a6 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a6);
  v12 = *(_DWORD *)(a1 + 552);
  if ( ((v12 >> 7) & 3) < a2 )
  {
    if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v15 = *(_QWORD *)(a1 + 40);
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v20 = v15;
      v31 = &v17;
      v28 = &v18;
      v25 = &v19;
      v22 = &v20;
      v23 = v14;
      v17 = a3;
      v18 = a2;
      v19 = v11;
      v32 = 1;
      v29 = 1;
      v26 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC218,
        (unsigned __int8 *)dword_1800C056D,
        0LL,
        0LL,
        6u,
        &v21);
      v12 = *(_DWORD *)(a1 + 552);
    }
    *(_DWORD *)(a1 + 556) = a4;
    v16 = v12 & 0xFFFFE07F | ((a2 & 3 | (4 * (a3 & 0xF))) << 7);
    *(_WORD *)(a1 + 560) = a5;
    *(_DWORD *)(a1 + 552) = v16;
    if ( (v16 & 1) == 0 )
      HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1);
  }
  else if ( (unsigned int)dword_1800DC218 > 5 )
  {
    v13 = *(_QWORD *)(a1 + 40);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v20 = v13;
    v28 = &v17;
    v25 = &v19;
    v22 = &v20;
    v17 = a2;
    v19 = v11;
    v29 = 1;
    v26 = 4;
    v23 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C0435,
      0LL,
      0LL,
      5u,
      &v21);
  }
}
