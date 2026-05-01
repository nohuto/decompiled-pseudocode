/*
 * XREFs of ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC
 * Callers:
 *     ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4_HOST_GROUP@@@Z @ 0x180009E54 (-HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x18000FDE0 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x1800108E8 (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampAppCommitStateSummary(struct _HAM_APPLICATION *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  _OWORD *v3; // rax
  char *v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  unsigned int UpdateMask; // eax
  int *v18; // rdx
  int v19; // ecx
  int *v20; // r9
  __int64 v21; // rcx
  _DWORD v22[2]; // [rsp+20h] [rbp-238h] BYREF
  char v23; // [rsp+28h] [rbp-230h] BYREF
  __int128 v24; // [rsp+1F8h] [rbp-60h]
  __int128 v25; // [rsp+208h] [rbp-50h]
  __int128 v26; // [rsp+218h] [rbp-40h]
  __int128 v27; // [rsp+228h] [rbp-30h]
  int v28; // [rsp+238h] [rbp-20h]
  int v29; // [rsp+23Ch] [rbp-1Ch]

  v3 = (_OWORD *)((char *)a1 + 96);
  v4 = &v23;
  v5 = 3LL;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v4 = *v3;
    v7 = v3[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v4 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v4 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v4 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v4 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v11;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = v3[1];
  *(_OWORD *)v4 = *v3;
  v14 = v3[2];
  *((_OWORD *)v4 + 1) = v13;
  v15 = v3[3];
  *((_OWORD *)v4 + 2) = v14;
  v16 = v3[4];
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  v22[0] = 0;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_APPLICATION *)((char *)a1 + 620), a2);
  v19 = *v18;
  *v20 = *v18;
  v22[1] = v19;
  v21 = *((_QWORD *)a1 + 11);
  v24 = *(_OWORD *)(v21 + 228);
  v25 = *(_OWORD *)(v21 + 244);
  v26 = *(_OWORD *)(v21 + 260);
  v27 = *(_OWORD *)(v21 + 276);
  v28 = *(_DWORD *)(v21 + 292);
  v29 = *(_DWORD *)(v21 + 296);
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    - 168),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v22,
    UpdateMask);
  HampPkgPushUpdate(*((struct _HAM_PACKAGE **)a1 + 11));
}
