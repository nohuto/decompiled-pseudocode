/*
 * XREFs of PopSleepPowerSettingCallback @ 0x1408578E0
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSleepPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  int v6; // esi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v27; // eax
  _OWORD v28[3]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-C8h]
  __int128 v30; // [rsp+60h] [rbp-B8h]
  __int128 v31; // [rsp+70h] [rbp-A8h]
  __int128 v32; // [rsp+80h] [rbp-98h]
  __int128 v33; // [rsp+90h] [rbp-88h]
  __int128 v34; // [rsp+A0h] [rbp-78h]
  __int128 v35; // [rsp+B0h] [rbp-68h]
  __int128 v36; // [rsp+C0h] [rbp-58h]
  __int128 v37; // [rsp+D0h] [rbp-48h]
  __int128 v38; // [rsp+E0h] [rbp-38h]
  __int128 v39; // [rsp+F0h] [rbp-28h]
  __int64 v40; // [rsp+100h] [rbp-18h]

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v7 = *((_OWORD *)PopPolicy + 1);
  v28[0] = *(_OWORD *)PopPolicy;
  v8 = *((_OWORD *)PopPolicy + 2);
  v28[1] = v7;
  v9 = *((_OWORD *)PopPolicy + 3);
  v28[2] = v8;
  v10 = *((_OWORD *)PopPolicy + 4);
  v29 = v9;
  v11 = *((_OWORD *)PopPolicy + 5);
  v30 = v10;
  v12 = *((_OWORD *)PopPolicy + 6);
  v31 = v11;
  v32 = v12;
  v33 = *((_OWORD *)PopPolicy + 7);
  v13 = *((_OWORD *)PopPolicy + 9);
  v34 = *((_OWORD *)PopPolicy + 8);
  v14 = *((_OWORD *)PopPolicy + 10);
  v35 = v13;
  v15 = *((_OWORD *)PopPolicy + 11);
  v36 = v14;
  v16 = *((_OWORD *)PopPolicy + 12);
  v37 = v15;
  v17 = *((_OWORD *)PopPolicy + 13);
  v18 = *((_QWORD *)PopPolicy + 28);
  v38 = v16;
  v39 = v17;
  v40 = v18;
  v19 = *a1;
  v20 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *a1 )
    v20 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - a1[1];
  if ( !v20 && a3 == 4 && a2 )
  {
    v21 = *a2;
    HIDWORD(v29) = *a2;
    if ( BYTE5(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) )
      LODWORD(v29) = 2;
    v6 = 0;
  }
  else
  {
    v21 = HIDWORD(v29);
  }
  v22 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - v19;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == v19 )
    v22 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - a1[1];
  if ( !v22 && a3 == 4 && a2 )
  {
    v27 = *a2;
    DWORD2(v31) = *a2;
    if ( !v21 && v27 && BYTE6(PopCapabilities) && BYTE7(PopCapabilities) )
      LODWORD(v29) = 3;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_9;
  }
  v6 = PopApplyPolicy(1, 0, v28, 0xE8u);
LABEL_9:
  v23 = *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 == *a1 )
    v23 = *(_QWORD *)GUID_HIBERNATE_FASTS4_POLICY.Data4 - a1[1];
  if ( !v23 && a3 == 4 && a2 )
  {
    byte_140C232DC = *a2 == 0;
    v6 = 0;
  }
  v24 = *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 == *a1 )
    v24 = *(_QWORD *)GUID_ALLOW_STANDBY_STATES.Data4 - a1[1];
  if ( !v24 && a3 == 4 && a2 )
  {
    byte_140C232DD = *a2 == 0;
    PopInitSIdle(3u);
    v6 = 0;
  }
  v25 = *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 == *a1 )
    v25 = *(_QWORD *)GUID_UNATTEND_SLEEP_TIMEOUT.Data4 - a1[1];
  if ( !v25 && a3 == 4 && a2 )
  {
    dword_140C232E0 = *a2;
    PopInitSIdle(3u);
    v6 = 0;
  }
  PopReleasePolicyLock(v25, v23);
  return (unsigned int)v6;
}
