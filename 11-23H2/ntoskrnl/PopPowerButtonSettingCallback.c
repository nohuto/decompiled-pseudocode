/*
 * XREFs of PopPowerButtonSettingCallback @ 0x140823FA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerButtonSettingCallback(__int64 *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
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
  int v23; // eax
  char *v24; // rax
  unsigned int v25; // ebx
  __int128 v27; // [rsp+20h] [rbp-108h] BYREF
  __int128 v28; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-E8h]
  __int128 v30; // [rsp+50h] [rbp-D8h]
  __int128 v31; // [rsp+60h] [rbp-C8h]
  __int128 v32; // [rsp+70h] [rbp-B8h]
  __int128 v33; // [rsp+80h] [rbp-A8h]
  __int128 v34; // [rsp+90h] [rbp-98h]
  _OWORD v35[6]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v36; // [rsp+100h] [rbp-28h]

  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v27 = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v28 = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v29 = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v30 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v31 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v32 = v12;
  v33 = v13;
  v14 = v35;
  v34 = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v35[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v35[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v35[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v35[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v35[4] = v18;
  v35[5] = v19;
  v36 = v20;
  v21 = *a1;
  v22 = *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 == *a1 )
    v22 = *(_QWORD *)GUID_POWERBUTTON_ACTION.Data4 - a1[1];
  if ( v22 )
  {
    v22 = *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 - v21;
    if ( *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 == v21 )
      v22 = *(_QWORD *)GUID_SLEEPBUTTON_ACTION.Data4 - a1[1];
    if ( v22 )
    {
      v22 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - v21;
      if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == v21 )
        v22 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - a1[1];
      if ( v22 )
      {
        v22 = *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 - v21;
        if ( *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 == v21 )
          v22 = *(_QWORD *)GUID_LIDOPEN_POWERSTATE.Data4 - a1[1];
        if ( !v22 && a3 == 4 && a2 )
        {
          v22 = *a2;
          v23 = DWORD2(v29);
          if ( (unsigned int)v22 <= 7 )
            v23 = *a2;
          DWORD2(v29) = v23;
        }
        goto LABEL_24;
      }
      v24 = (char *)&v28 + 12;
    }
    else
    {
      v24 = (char *)&v28;
    }
  }
  else
  {
    v24 = (char *)&v27 + 4;
  }
  if ( a3 != 4 || !a2 || (v22 = *a2, (unsigned int)v22 > 8) || (v6 = 333LL, !_bittest((const int *)&v6, v22)) )
  {
    v25 = -1073741811;
    goto LABEL_25;
  }
  *(_QWORD *)(v24 + 4) = 0LL;
  *(_DWORD *)v24 = v22;
LABEL_24:
  LOBYTE(v22) = 1;
  v25 = PopApplyPolicy(v22, 0LL, &v27, 232LL);
LABEL_25:
  PopReleasePolicyLock(
    v22,
    v6,
    v7,
    v14,
    v27,
    *((_QWORD *)&v27 + 1),
    v28,
    *((_QWORD *)&v28 + 1),
    v29,
    *((_QWORD *)&v29 + 1));
  return v25;
}
