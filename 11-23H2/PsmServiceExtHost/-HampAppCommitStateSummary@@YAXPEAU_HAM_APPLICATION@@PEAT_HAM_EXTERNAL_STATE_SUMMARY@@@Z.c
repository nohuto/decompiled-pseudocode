/*
 * XREFs of ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180019944
 * Callers:
 *     ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4_HOST_GROUP@@@Z @ 0x18001782C (-HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180019670 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x18001C4F0 (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampAppCommitStateSummary(struct _HAM_APPLICATION *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  char UpdateMask; // al
  int v19; // ecx
  _DWORD *v20; // r9
  __int64 v21; // rcx
  _DWORD v22[2]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v23[464]; // [rsp+28h] [rbp-230h] BYREF
  __int128 v24; // [rsp+1F8h] [rbp-60h]
  __int128 v25; // [rsp+208h] [rbp-50h]
  __int128 v26; // [rsp+218h] [rbp-40h]
  __int128 v27; // [rsp+228h] [rbp-30h]
  int v28; // [rsp+238h] [rbp-20h]
  int v29; // [rsp+23Ch] [rbp-1Ch]

  memset_0(v23, 0, 0x214uLL);
  v4 = (_OWORD *)((char *)a1 + 96);
  v5 = v23;
  v6 = 3LL;
  do
  {
    v7 = v4[1];
    *v5 = *v4;
    v8 = v4[2];
    v5[1] = v7;
    v9 = v4[3];
    v5[2] = v8;
    v10 = v4[4];
    v5[3] = v9;
    v11 = v4[5];
    v5[4] = v10;
    v12 = v4[6];
    v5[5] = v11;
    v13 = v4[7];
    v4 += 8;
    v5[6] = v12;
    v5 += 8;
    *(v5 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = v4[1];
  *v5 = *v4;
  v15 = v4[2];
  v5[1] = v14;
  v16 = v4[3];
  v5[2] = v15;
  v17 = v4[4];
  v5[3] = v16;
  v5[4] = v17;
  v22[0] = 0;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_APPLICATION *)((char *)a1 + 620), a2);
  v19 = *(_DWORD *)a2;
  *v20 = *(_DWORD *)a2;
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
                                    - 392),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v22,
    UpdateMask);
  HampPkgPushUpdate(*((struct _HAM_PACKAGE **)a1 + 11));
}
