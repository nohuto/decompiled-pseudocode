/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0071388
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C004D26C (RaidUnitGetMinimumPowerCyclePeriod.c)
 */

void __fastcall StorpTelemetrySendAdaptiveIdleCounters(__int64 a1)
{
  signed __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  __int64 *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 0x100) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v2 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3272);
      if ( v2 > 0 )
        v2 = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_1C00920C8 > 5 )
      {
        if ( tlgKeywordOn(v2, 0x400000000000LL) )
        {
          v6 = *(_QWORD *)(a1 + 24);
          v24 = a1 + 2024;
          v23 = 16LL;
          v25 = 16LL;
          v22 = v6 + 5000;
          v7 = *(_DWORD *)(v6 + 56);
          v8 = *(_QWORD *)(a1 + 1792);
          v13 = v7;
          v26 = &v13;
          v10 = *(_BYTE *)(a1 + 96);
          v28 = &v10;
          v11 = *(_BYTE *)(a1 + 97);
          v30 = &v11;
          v12 = *(_BYTE *)(a1 + 98);
          v32 = &v12;
          v27 = 4LL;
          v29 = 1LL;
          v31 = 1LL;
          v33 = 1LL;
          v9 = *(unsigned int *)(*(_QWORD *)(v8 + 8) + 12LL);
          v34 = &v14;
          v14 = v9;
          v35 = 4LL;
          v15 = *(_DWORD *)(v8 + 24);
          v36 = &v15;
          v16 = *(_DWORD *)(a1 + 3264);
          v38 = &v16;
          v40 = &v17;
          v42 = &v18;
          v37 = 4LL;
          v39 = 4LL;
          v17 = v5;
          v41 = 4LL;
          v18 = v4;
          v43 = 4LL;
          v19 = *(_QWORD *)(v8 + 56);
          v44 = &v19;
          v45 = 8LL;
          v20 = *(_QWORD *)(v8 + 48);
          v46 = &v20;
          v47 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_1C00855AA, v3, v4, 0xFu, &v21);
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 48LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
