/*
 * XREFs of PopSleepPowerSettingCallback @ 0x140823C90
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopInitSIdle @ 0x140824C14 (PopInitSIdle.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSleepPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  int v6; // esi
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // eax
  __int128 v30; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+30h] [rbp-E8h]
  __int128 v32; // [rsp+40h] [rbp-D8h]
  __int128 v33; // [rsp+50h] [rbp-C8h]
  __int128 v34; // [rsp+60h] [rbp-B8h]
  __int128 v35; // [rsp+70h] [rbp-A8h]
  __int128 v36; // [rsp+80h] [rbp-98h]
  __int128 v37; // [rsp+90h] [rbp-88h]
  _OWORD v38[6]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+100h] [rbp-18h]

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v30 = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v31 = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v32 = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v33 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v34 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v35 = v12;
  v36 = v13;
  v14 = v38;
  v37 = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v38[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v38[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v38[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v38[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v38[4] = v18;
  v38[5] = v19;
  v39 = v20;
  v21 = *a1;
  v22 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *a1 )
    v22 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - a1[1];
  if ( !v22 && a3 == 4 && a2 )
  {
    v23 = *a2;
    HIDWORD(v33) = *a2;
    if ( BYTE5(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) )
      LODWORD(v33) = 2;
    v6 = 0;
  }
  else
  {
    v23 = HIDWORD(v33);
  }
  v24 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - v21;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == v21 )
    v24 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - a1[1];
  if ( !v24 && a3 == 4 && a2 )
  {
    v29 = *a2;
    DWORD2(v35) = *a2;
    if ( !v23 && v29 && BYTE6(PopCapabilities) && BYTE7(PopCapabilities) )
      LODWORD(v33) = 3;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_9;
  }
  LOBYTE(v24) = 1;
  v6 = PopApplyPolicy(v24, 0LL, &v30, 232LL);
LABEL_9:
  v25 = *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 == *a1 )
    v25 = *(_QWORD *)GUID_HIBERNATE_FASTS4_POLICY.Data4 - a1[1];
  if ( !v25 && a3 == 4 && a2 )
  {
    byte_140C3D97C = *a2 == 0;
    v6 = 0;
  }
  v26 = *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 == *a1 )
    v26 = *(_QWORD *)GUID_ALLOW_STANDBY_STATES.Data4 - a1[1];
  if ( !v26 && a3 == 4 && a2 )
  {
    byte_140C3D97D = *a2 == 0;
    PopInitSIdle(3LL);
    v6 = 0;
  }
  v27 = *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 == *a1 )
    v27 = *(_QWORD *)GUID_UNATTEND_SLEEP_TIMEOUT.Data4 - a1[1];
  if ( !v27 && a3 == 4 && a2 )
  {
    dword_140C3D980 = *a2;
    PopInitSIdle(3LL);
    v6 = 0;
  }
  PopReleasePolicyLock(
    v27,
    v25,
    v7,
    v14,
    v30,
    *((_QWORD *)&v30 + 1),
    v31,
    *((_QWORD *)&v31 + 1),
    v32,
    *((_QWORD *)&v32 + 1));
  return (unsigned int)v6;
}
