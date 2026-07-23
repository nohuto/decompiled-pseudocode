/*
 * XREFs of PopConsoleLockPowerSettingCallback @ 0x140823890
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopConsoleLockPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
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
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int128 v24; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-E8h]
  __int128 v26; // [rsp+40h] [rbp-D8h]
  __int128 v27; // [rsp+50h] [rbp-C8h]
  __int128 v28; // [rsp+60h] [rbp-B8h]
  __int128 v29; // [rsp+70h] [rbp-A8h]
  __int128 v30; // [rsp+80h] [rbp-98h]
  __int128 v31; // [rsp+90h] [rbp-88h]
  _OWORD v32[6]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+100h] [rbp-18h]

  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v24 = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v25 = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v26 = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v27 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v28 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v29 = v12;
  v30 = v13;
  v14 = v32;
  v31 = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v32[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v32[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v32[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v32[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v32[4] = v18;
  v32[5] = v19;
  v33 = v20;
  v21 = *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 == *a1 )
    v21 = *(_QWORD *)GUID_LOCK_CONSOLE_ON_WAKE.Data4 - a1[1];
  if ( !v21 && a3 == 4 && a2 )
  {
    LODWORD(v29) = *a2;
    LOBYTE(v21) = 1;
    v22 = PopApplyPolicy(v21, 0LL, &v24, 232LL);
  }
  else
  {
    v22 = -1073741811;
  }
  PopReleasePolicyLock(
    v21,
    v6,
    v7,
    v14,
    v24,
    *((_QWORD *)&v24 + 1),
    v25,
    *((_QWORD *)&v25 + 1),
    v26,
    *((_QWORD *)&v26 + 1));
  return v22;
}
